module.exports = grammar({
  name: "slint",

  extras: ($) => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  // externals: ($) => [
  //   $._string_content,
  // ],

  // conflicts: ($) => [
  //   [$.expression_body, $.component_field_declaration_list],
  // ],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.struct_definition,
        $.component_definition,
      ),

    struct_definition: ($) =>
      seq(
        optional($.visibility_modifier),
        "struct",
        field("name", $._type_identifier),
        ":=",
        optional(field("super_type", $._type_identifier)),
        field("body", $.struct_field_declaration_list),
      ),

    struct_field_declaration_list: ($) =>
      seq(
        "{",
        repeat(seq(
          field("name", $.var_identifier),
          ":",
          $._expression,
          optional(","),
        )),
        "}",
      ),

    component_definition: ($) =>
      seq(
        optional($.visibility_modifier),
        optional(field("name", $._type_identifier)),
        optional(":="),
        field("super_type", $._type_identifier),
        field("body", $.component_field_declaration_list),
      ),

    component_field_declaration_list: ($) =>
      seq(
        "{",
        repeat(choice(
          $.component_definition,
          $.property_definition,
          $.callback_definition,
          $.variable_definition,
          $.for_loop_definition,
          $.if_statement_definition,
          $.callback_event,
          $.callback_call,
          $.var_identifier,
        )),
        "}",
      ),

    callback_event: ($) =>
      seq(
        $.var_identifier,
        "=>",
        $.component_field_declaration_list,
      ),
    callback_call: ($) =>
      seq(
        $.var_identifier,
        ";",
      ),

    if_statement_definition: ($) =>
      seq(
        "if",
        $.expression_body_paren,
        $.component_field_declaration_list,
      ),

    for_loop_definition: ($) =>
      seq(
        "for",
        $.var_identifier,
        optional($.for_loop_index),
        "in",
        $.var_identifier,
        ":",
        $._type_identifier,
        $.component_field_declaration_list,
      ),

    for_loop_index: ($) =>
      seq(
        "[",
        $.var_identifier,
        "]",
      ),

    property_definition: ($) =>
      seq(
        "property",
        "<",
        $._propterty_kind,
        ">",
        field("name", $.var_identifier),
        optional($.property_expr),
        ";",
      ),
    property_expr: ($) =>
      seq(
        choice(
          "=",
          ":",
        ),
        choice(
          $._expression,
          $.list_definition,
        ),
      ),

    _propterty_kind: ($) =>
      choice(
        field("type", $._type_identifier),
        $.property_type_list,
      ),

    property_type_list: ($) =>
      seq(
        "[",
        field("type", $._type_identifier),
        "]",
      ),

    list_definition: ($) =>
      seq(
        "[",
        repeat(
          seq(
            $.struct_field_declaration_list,
            optional(","),
          ),
        ),
        "]",
      ),

    variable_definition: ($) =>
      seq(
        field("name", $.var_identifier),
        choice(
          ":",
          "=",
        ),
        $._expression,
        ";",
      ),

    _expression: ($) =>
      choice(
        $.expression_body,
        $.expression_body_paren,
      ),

    expression_body_paren: ($) =>
      seq(
        "(",
        $.expression_body,
        ")",
      ),

    expression_body: ($) =>
      seq(
        choice(
          $.value,
          $.string_literal,
          $.function_call,
          $.var_identifier,
          $.unary_expression,
          $._binary_expression,
        ),
      ),

    unary_expression: ($) =>
      prec.left(
        2,
        choice(
          seq("-", $._expression),
          seq("!", $._expression),
        ),
      ),

    _binary_expression: ($) =>
      prec.left(
        1,
        choice(
          $.mult_binary_expression,
          $.add_binary_expression,
        ),
      ),
    mult_binary_expression: ($) =>
      prec.left(
        2,
        choice(
          seq($._expression, "*", $._expression),
          seq($._expression, "&&", $._expression),
          seq($._expression, "||", $._expression),
          seq($._expression, "/", $._expression),
        ),
      ),

    add_binary_expression: ($) =>
      prec.left(
        1,
        choice(
          seq($._expression, "+", $._expression),
          seq($._expression, "-", $._expression),
        ),
      ),

    callback_definition: ($) =>
      seq(
        "callback",
        $.function_call,
        ";",
      ),

    call_signature: ($) => field("parameters", $.formal_parameters),

    formal_parameters: ($) =>
      seq(
        "(",
        optional(seq(
          commaSep1($.formal_parameter),
          optional(","),
        )),
        ")",
      ),
    formal_parameter: ($) => $._expression,

    operator: ($) =>
      choice(
        "+",
        "-",
        "*",
        "/",
      ),
    string_literal: ($) => /".*?"/,

    escape_sequence: ($) =>
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

    visibility_modifier: ($) => "export",

    _identifier: ($) => /[a-zA-Z_-]+/,
    prefix_identifier: ($) => $._identifier,
    post_identifier: ($) =>
      choice(
        $._identifier,
        $.function_call,
      ),
    user_type_identifier: ($) => prec(1, $._identifier),
    _type_identifier: ($) =>
      choice(
        $.user_type_identifier,
        $.builtin_type_identifier,
      ),
    var_identifier: ($) =>
      choice(
        $._identifier,
        $.reference_identifier,
        seq($._identifier, repeat(seq(".", $.post_identifier))),
        seq($.reference_identifier, repeat(seq(".", $.post_identifier))),
      ),

    function_identifier: ($) =>
      seq(
        optional("@"),
        $._identifier,
      ),

    function_call: ($) =>
      field(
        "function",
        seq($.function_identifier, $.call_signature),
      ),

    reference_identifier: ($) =>
      choice(
        "parent",
        "root",
        "this",
      ),

    value: ($) =>
      choice(
        $.value_with_units,
        $.number,
        $.language_constant,
      ),

    value_with_units: ($) =>
      seq(
        $.number,
        $.unit_type,
      ),
    number: ($) => /\d+/,
    unit_type: ($) =>
      choice(
        "px",
      ),

    language_constant: ($) =>
      choice(
        "black",
        "blue",
        "ease",
        "ease_in",
        "ease_in_out",
        "ease_out",
        "end",
        "green",
        "red",
        "red",
        "start",
        "yellow",
        "true",
        "false",
      ),

    builtin_type_identifier: ($) =>
      prec(
        2,
        choice(
          "angle",
          "bool",
          "brush",
          "color",
          "duration",
          "easing",
          "float",
          "image",
          "int",
          "length",
          "percent",
          "physical-length",
          "string",
        ),
      ),

    // https://github.com/tree-sitter/tree-sitter-c/blob/e348e8ec5efd3aac020020e4af53d2ff18f393a9/grammar.js#L1009
    comment: ($) =>
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
