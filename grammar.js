const PREC = {
  range: 16,
  call: 15,
  field: 14,
  unary: 13,
  cast: 12,
  multiplicative: 11,
  additive: 10,
  shift: 9,
  bitand: 8,
  bitxor: 7,
  bitor: 6,
  comparative: 5,
  and: 4,
  or: 3,
  ternary: 2,
  assign: 1,
};

module.exports = grammar({
  name: "slint",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  rules: {
    source_file: ($) => repeat($._item),

    _item: ($) =>
      choice(
        $.component_item,
        $.import_statement,
        $.export_statement,
        $.global_single,
        $.struct_item
      ),

    struct_item: ($) =>
      seq(
        optional($.vis),
        "struct",
        $._type_identifier,
        $.struct_block_definition
      ),

    struct_block_definition: ($) =>
      seq(
        "{",
        commaSep(
          seq(field("field", $.identifier), ":", field("type", $._expression))
        ),
        "}"
      ),

    export_statement: ($) =>
      seq(
        $.vis,
        "{",
        commaSep(
          seq($._type_identifier, optional(seq("as", $._type_identifier)))
        ),
        "}"
      ),

    global_single: ($) =>
      seq(optional($.vis), "global", $._type_identifier, $._component_body),

    import_statement: ($) =>
      seq(
        "import",
        optional(seq("{", commaSep($._type_identifier), "}", "from")),
        $.string_literal,
        ";"
      ),

    component_item: ($) =>
      seq(
        optional($._conditional_element),
        optional($.vis),
        optional("component"),
        $._type_identifier,
        optional(seq(choice(":=", "inherits"), $._type_identifier)),
        alias($._component_body, $.comp_body)
      ),

    _conditional_element: ($) => seq("if", $._expression, ":"),

    _component_body: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $._property,
            $.component_item,
            $.for_loop,
            $.animate_statement,
            $.state_statement,
            $.transition_statement,
            seq("@", $.children_macro)
          )
        ),
        "}"
      ),

    transition_statement: ($) =>
      seq(
        "transitions",
        "[",
        repeat(
          seq(
            field("transition", choice("in", "out")),
            field("state", $.identifier),
            ":",
            "{",
            $.animate_statement,
            "}"
          )
        ),
        "]"
      ),

    state_statement: ($) =>
      seq(
        "states",
        "[",
        repeat(seq($.state_expression, ":", "{", repeat($._property), "}")),
        "]"
      ),

    animate_statement: ($) =>
      prec(
        1,
        seq(
          "animate",
          choice(commaSep($._expression), "*"),
          "{",
          repeat($._property),
          "}"
        )
      ),

    for_loop: ($) =>
      seq("for", $._expression, "in", $._expression, ":", $.component_item),

    _property: ($) =>
      choice(
        alias($._assign_property, $.assign_property),
        seq(alias($._define_property, $.define_property), ";"),
        $.define_assign_property,
        $.two_way_property,
        $.call_back_definition,
        $.call_back_handler
      ),

    call_back_definition: ($) =>
      seq(
        "callback",
        $._function_identifier,
        optional($.call_back_parameters),
        optional(
          choice(
            seq("->", field("return_type", $.identifier)),
            seq("<=>", field("alias", $.field_expression))
          )
        ),
        ";"
      ),

    call_back_parameters: ($) => seq("(", commaSep($.identifier), ")"),

    call_back_handler: ($) =>
      seq(
        $._function_identifier,
        optional($.call_back_parameters),
        "=>",
        $.handler_body
      ),

    handler_body: ($) => seq("{", optional($._expression), optional(";"), "}"),

    two_way_property: ($) => seq($._define_property, "<=>", $._expression, ";"),

    define_assign_property: ($) => seq($._define_property, $._assign_property),

    _define_property: ($) =>
      seq(
        optional(choice("in", "out", "in-out")),
        "property",
        optional(
          seq(
            "<",
            choice(
              $._type_identifier,
              $.array_literal,
              $.struct_block_definition
            ),
            ">"
          )
        ),
        $._expression
      ),

    _assign_property: ($) =>
      seq(optional($._expression), ":", seq($._expression, ";")),

    _expression: ($) =>
      prec.left(choice(seq("(", $._all_expressions, ")"), $._all_expressions)),

    _all_expressions: ($) =>
      prec.left(
        choice(
          $.unary_expression,
          $.binary_expression,
          $.ternary_expression,
          $.call_expression,
          $.index_expression,
          $.identifier,
          $.if_expression,
          $.assign_expression,
          $.comp_assign_expression,
          $.field_expression,
          $.struct_block_definition,
          $._macro,
          $._literal
        )
      ),

    if_expression: ($) =>
      seq(
        "if",
        "(",
        $._expression,
        ")",
        $.consequence_body,
        optional(
          choice(seq("else", $.if_expression), seq("else", $.consequence_body))
        )
      ),

    consequence_body: ($) =>
      seq("{", repeat(seq($._expression, optional(";"))), "}"),

    state_expression: ($) =>
      seq(field("state", $.identifier), "when", $._expression),

    index_expression: ($) =>
      prec(PREC.call, seq($._expression, "[", $._expression, "]")),

    assign_expression: ($) =>
      prec.left(
        PREC.assign,
        seq(
          field("left", $._expression),
          "=",
          field("right", $._expression),
          optional(";")
        )
      ),

    // TODO: Vet operators for what is actually included in slint
    comp_assign_expression: ($) =>
      prec.left(
        PREC.assign,
        seq(
          field("left", $._expression),
          field(
            "operator",
            choice("+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=")
          ),
          field("right", $._expression)
        )
      ),

    call_expression: ($) =>
      prec(
        PREC.call,
        seq(
          field("function", $._expression),
          field("arguments", $.function_call_args)
        )
      ),

    function_call_args: ($) => seq("(", commaSep($._expression), ")"),

    field_expression: ($) =>
      prec(
        PREC.field,
        seq(field("value", $._expression), ".", field("field", $.identifier))
      ),

    bool_literal: (_$) => choice("true", "false"),

    unary_expression: ($) =>
      prec.left(PREC.unary, seq(choice("-", "!"), $._expression)),

    binary_expression: ($) => {
      const table = [
        [PREC.and, "&&"],
        [PREC.or, "||"],
        [PREC.bitand, "&"],
        [PREC.bitor, "|"],
        [PREC.bitxor, "^"],
        [PREC.comparative, choice("==", "!=", "<", "<=", ">", ">=")],
        [PREC.shift, choice("<<", ">>")],
        [PREC.additive, choice("+", "-")],
        [PREC.multiplicative, choice("*", "/")],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          )
        )
      );
    },

    ternary_expression: ($) =>
      prec.left(
        PREC.ternary,
        seq($._expression, "?", $._expression, ":", $._expression)
      ),

    _macro: ($) =>
      seq("@", choice($.linear_grad_macro, $.radial_grad_macro, $.image_macro)),
    children_macro: (_$) => "children",

    linear_grad_macro: ($) =>
      seq(
        "linear-gradient",
        "(",
        $._expression,
        ",",
        commaSep(seq($._expression, $._expression)),
        ")"
      ),

    radial_grad_macro: ($) =>
      seq(
        "radial-gradient",
        "(",
        "circle",
        ",",
        commaSep(seq($._expression, $._expression)),
        ")"
      ),

    // I think this is fine to leave as an expression. Although it might need to just be a string_literal
    image_macro: ($) => seq("image-url", "(", $._expression, ")"),

    _literal: ($) =>
      choice(
        $._number,
        $.string_literal,
        $.array_literal,
        $.bool_literal,
        $.color_literal
      ),

    array_literal: ($) => seq("[", commaSep($._expression), "]"),

    // This is taken from tree-sitter-javascript
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/grammar.js#L866
    /////////////////////////////////////////////////////////////////////
    string_literal: ($) =>
      choice(
        seq(
          '"',
          repeat(
            choice($._unescaped_double_string_fragment, $.escape_sequence)
          ),
          '"'
        ),
        seq(
          "'",
          repeat(
            choice($._unescaped_single_string_fragment, $.escape_sequence)
          ),
          "'"
        )
      ),

    _unescaped_double_string_fragment: (_$) =>
      token.immediate(prec(1, /[^"\\]+/)),

    // same here
    _unescaped_single_string_fragment: (_$) =>
      token.immediate(prec(1, /[^'\\]+/)),

    escape_sequence: (_$) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu]/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/,
            /x[0-9a-fA-F]{2}/
          )
        )
      ),
    /////////////////////////////////////////////////////////////////////

    vis: (_$) => "export",

    identifier: ($) => choice($._builtin, $._ident_reg),
    _ident_reg: (_$) => /[_\p{XID_Start}][_\-\p{XID_Continue}]*/,

    color_literal: (_$) =>
      seq("#", choice(/[\da-fA-F]{3}/, /[\da-fA-F]{6}/, /[\da-fA-F]{8}/)),

    _number: ($) => choice(choice($.int_literal, $.float_literal), $.num_units),
    num_units: ($) => seq(choice($.int_literal, $.float_literal), $.units),

    int_literal: (_$) => /\d+/,
    float_literal: (_$) => /\d+\.\d+/,

    units: (_$) => choice("px", "ms", "%", "deg", "rad"),
    _type_identifier: ($) => alias($.identifier, $.type_identifier),
    _function_identifier: ($) =>
      prec.left(PREC.call, alias($.identifier, $.function_identifier)),

    _builtin: ($) =>
      choice(
        $.constant_builtin,
        $.type_builtin,
        $.function_builtin,
        $.variable_builtin
      ),

    constant_builtin: (_$) =>
      choice(
        "ease",
        "ease-in",
        "ease_in",
        "ease_in_out",
        "ease-in-out",
        "ease_out",
        "ease-out",
        "start",
        "end",
        "black",
        "blue",
        "green",
        "red",
        "yellow",
        "white",
        "gray",
        "transparent"
      ),

    type_builtin: (_$) =>
      choice(
        "angle",
        "bool",
        "brush",
        "color",
        "float",
        "image",
        "int",
        "length",
        "percent",
        "physical-length",
        "physical_length",
        "string"
      ),

    function_builtin: (_$) =>
      choice(
        "debug",
        "animation-tick",
        "min",
        "max",
        "mod",
        "abs",
        "round",
        "ceil",
        "floor",
        "sin",
        "cos",
        "tan",
        "asin",
        "acos",
        "atan",
        "sqrt",
        "pow",
        "log",
        "rgb"
      ),
    variable_builtin: (_$) => choice("easing", "duration", "parent", "root"),

    // https://github.com/tree-sitter/tree-sitter-c/blob/e348e8ec5efd3aac020020e4af53d2ff18f393a9/grammar.js#L1009
    comment: (_$) =>
      token(
        choice(
          seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", optional(rule))));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
