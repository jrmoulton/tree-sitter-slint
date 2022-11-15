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

  extras: ($) => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: ($) => repeat($._item),

    _item: ($) =>
      choice(
        $.component_item,
        $.import_statement,
        $.export_statement,
        $.global_single,
      ),

    export_statement: ($) =>
      seq(
        $.vis,
        "{",
        commaSep(
          seq($._type_identifier, optional(seq("as", $._type_identifier))),
        ),
        "}",
      ),

    global_single: ($) =>
      seq(
        optional($.vis),
        "global",
        $._type_identifier,
        ":=",
        $._component_body,
      ),

    import_statement: ($) =>
      seq(
        "import",
        optional(seq(
          "{",
          commaSep($._type_identifier),
          "}",
          "from",
        )),
        $.string_literal,
        ";",
      ),

    component_item: ($) =>
      seq(
        optional($._conditional_element),
        optional($.vis),
        $._type_identifier,
        optional(seq(":=", $._type_identifier)),
        alias($._component_body, $.comp_body),
      ),

    _conditional_element: ($) => seq("if", $._expression, ":"),

    _component_body: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $._property,
            $.component_item,
          ),
        ),
        "}",
      ),

    _property: ($) =>
      choice(
        alias($._assign_property, $.assign_property),
        seq(alias($._define_property, $.define_property), ";"),
        $.define_assign_property,
        $.two_way_property,
        $.call_back_definition,
        $.call_back_handler,
      ),

    call_back_definition: ($) =>
      seq(
        "callback",
        $._function_identifier,
        optional($.call_back_parameters),
        optional(
          choice(
            seq("->", field("return_type", $.identifier)),
            seq("<=>", field("alias", $.field_expression)),
          ),
        ),
        ";",
      ),

    call_back_parameters: ($) => seq("(", commaSep($.identifier), ")"),

    call_back_handler: ($) =>
      seq(
        $._function_identifier,
        optional($.call_back_parameters),
        "=>",
        $.handler_body,
      ),

    handler_body: ($) =>
      seq(
        "{",
        optional($._expression),
        optional(";"),
        "}",
      ),

    two_way_property: ($) => seq($._define_property, "<=>", $._expression, ";"),

    define_assign_property: ($) => seq($._define_property, $._assign_property),

    _define_property: ($) =>
      seq(
        "property",
        optional(seq("<", $._type_identifier, ">")),
        $.identifier,
      ),

    _assign_property: ($) =>
      seq(
        optional($.identifier),
        ":",
        seq(
          $._expression,
          ";",
        ),
      ),

    _expression: ($) =>
      choice(
        $.unary_expression,
        $.binary_expression,
        $.ternary_expression,
        $.call_expression,
        $.identifier,
        $.assign_expression,
        $.comp_assign_expression,
        $.field_expression,
        $._literal,
      ),

    assign_expression: ($) =>
      prec.left(
        PREC.assign,
        seq(
          field("left", $._expression),
          "=",
          field("right", $._expression),
        ),
      ),

    // TODO: Vet operators for what is actually included in slint
    comp_assign_expression: ($) =>
      prec.left(
        PREC.assign,
        seq(
          field("left", $._expression),
          field(
            "operator",
            choice(
              "+=",
              "-=",
              "*=",
              "/=",
              "%=",
              "&=",
              "|=",
              "^=",
              "<<=",
              ">>=",
            ),
          ),
          field("right", $._expression),
        ),
      ),

    call_expression: ($) =>
      prec(
        PREC.call,
        seq(
          field("function", $._expression),
          field("arguments", $.function_call_args),
        ),
      ),

    function_call_args: ($) => seq("(", commaSep($._expression), ")"),

    field_expression: ($) =>
      prec(
        PREC.field,
        seq(
          field("value", $._expression),
          ".",
          field(
            "field",
            $.identifier,
          ),
        ),
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
              field("right", $._expression),
            ),
          )
        ),
      );
    },

    ternary_expression: ($) =>
      prec.left(
        PREC.ternary,
        seq(
          $._expression,
          "?",
          $._expression,
          ":",
          $._expression,
        ),
      ),

    _literal: ($) =>
      choice(
        $._number,
        $.string_literal,
        $.bool_literal,
        $.color_literal,
      ),

    // This is taken from tree-sitter-javascript
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/grammar.js#L866
    /////////////////////////////////////////////////////////////////////
    string_literal: ($) =>
      choice(
        seq(
          '"',
          repeat(choice(
            $._unescaped_double_string_fragment,
            $.escape_sequence,
          )),
          '"',
        ),
        seq(
          "'",
          repeat(choice(
            $._unescaped_single_string_fragment,
            $.escape_sequence,
          )),
          "'",
        ),
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
            /x[0-9a-fA-F]{2}/,
          ),
        ),
      ),
    /////////////////////////////////////////////////////////////////////

    vis: (_$) => "export",

    identifier: (_$) => /[_\p{XID_Start}][_\-\p{XID_Continue}]*/,

    color_literal: (_$) =>
      seq(
        "#",
        choice(
          /[\da-fA-F]{3}/,
          /[\da-fA-F]{6}/,
          /[\da-fA-F]{8}/,
        ),
      ),

    _number: ($) =>
      prec.left(seq(
        choice(
          $.int_literal,
          $.float_literal,
        ),
        optional($.units),
      )),
    int_literal: (_$) => /\d+/,
    float_literal: (_$) => /\d+\.\d+/,

    units: (_$) =>
      choice(
        "px",
        "ms",
        "%",
      ),
    _type_identifier: ($) => alias($.identifier, $.type_identifier),
    _function_identifier: ($) => alias($.identifier, $.function_identifier),

    language_constant: (_$) =>
      choice(
        "black",
        "blue",
        "ease",
        "ease-in",
        "ease_in",
        "ease_in_out",
        "ease-in-out",
        "ease_out",
        "ease-out",
        "end",
        "green",
        "red",
        "red",
        "start",
        "yellow",
        "true",
        "false",
        "transparent",
      ),

    builtin_type_identifier: (_$) =>
      prec(
        2,
        choice(
          "angle",
          "bool",
          "brush",
          // "color", // Having color as a builtin type causes problems because slint also uses color as a variable name
          "duration",
          "easing",
          "float",
          "image",
          "int",
          "length",
          "percent",
          "physical-length",
          "physical_length",
          "string",
        ),
      ),

    // https://github.com/tree-sitter/tree-sitter-c/blob/e348e8ec5efd3aac020020e4af53d2ff18f393a9/grammar.js#L1009
    comment: (_$) =>
      token(choice(
        seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
        seq(
          "/*",
          /[^*]*\*+([^/*][^*]*\*+)*/,
          "/",
        ),
      )),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
