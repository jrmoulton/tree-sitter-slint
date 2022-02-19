#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 305
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_import = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  anon_sym_from = 5,
  anon_sym_SEMI = 6,
  anon_sym_struct = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_COLON = 9,
  anon_sym_animate = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_if = 12,
  anon_sym_for = 13,
  anon_sym_in = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_property = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_EQ = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_DASH = 23,
  anon_sym_BANG = 24,
  anon_sym_STAR = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_SLASH = 28,
  anon_sym_QMARK = 29,
  anon_sym_PLUS = 30,
  anon_sym_callback = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_DQUOTE = 33,
  anon_sym_SQUOTE = 34,
  sym_unescaped_double_string_fragment = 35,
  sym_unescaped_single_string_fragment = 36,
  sym_escape_sequence = 37,
  sym_visibility_modifier = 38,
  sym__identifier = 39,
  anon_sym_DOT = 40,
  anon_sym_AT = 41,
  anon_sym_parent = 42,
  anon_sym_root = 43,
  anon_sym_this = 44,
  anon_sym_POUND = 45,
  aux_sym_color_token1 = 46,
  aux_sym_color_token2 = 47,
  sym_int_number = 48,
  sym_float_number = 49,
  anon_sym_px = 50,
  anon_sym_PERCENT = 51,
  anon_sym_ms = 52,
  anon_sym_black = 53,
  anon_sym_blue = 54,
  anon_sym_ease = 55,
  anon_sym_ease_in = 56,
  anon_sym_ease_in_out = 57,
  anon_sym_ease_out = 58,
  anon_sym_end = 59,
  anon_sym_green = 60,
  anon_sym_red = 61,
  anon_sym_start = 62,
  anon_sym_yellow = 63,
  anon_sym_true = 64,
  anon_sym_false = 65,
  anon_sym_transparent = 66,
  anon_sym_angle = 67,
  anon_sym_bool = 68,
  anon_sym_brush = 69,
  anon_sym_duration = 70,
  anon_sym_easing = 71,
  anon_sym_float = 72,
  anon_sym_image = 73,
  anon_sym_int = 74,
  anon_sym_length = 75,
  anon_sym_percent = 76,
  anon_sym_physical_DASHlength = 77,
  anon_sym_string = 78,
  sym_comment = 79,
  sym_source_file = 80,
  sym__definition = 81,
  sym_import_statement = 82,
  sym_struct_definition = 83,
  sym_struct_field_declaration_list = 84,
  sym_component_definition = 85,
  sym_component_field_declaration_list = 86,
  sym_animate_statement = 87,
  sym_animate_declaration_list = 88,
  sym_callback_event = 89,
  sym_callback_call = 90,
  sym_if_statement_definition = 91,
  sym_for_loop_definition = 92,
  sym_for_loop_index = 93,
  sym_property_definition = 94,
  sym_property_expr = 95,
  sym__propterty_kind = 96,
  sym_property_type_list = 97,
  sym_list_definition = 98,
  sym_variable_definition = 99,
  sym_variable_set_equal = 100,
  sym__expression = 101,
  sym_expression_body_paren = 102,
  sym_expression_body = 103,
  sym_unary_expression = 104,
  sym__binary_expression = 105,
  sym_mult_binary_expression = 106,
  sym_ternary_expression = 107,
  sym_add_binary_expression = 108,
  sym_callback_definition = 109,
  sym_call_signature = 110,
  sym_formal_parameters = 111,
  sym_formal_parameter = 112,
  sym_string = 113,
  sym_post_identifier = 114,
  sym_user_type_identifier = 115,
  sym__type_identifier = 116,
  sym_var_identifier = 117,
  sym_function_identifier = 118,
  sym_function_call = 119,
  sym_reference_identifier = 120,
  sym_value = 121,
  sym_color = 122,
  sym_value_with_units = 123,
  sym_number = 124,
  sym_unit_type = 125,
  sym_language_constant = 126,
  sym_builtin_type_identifier = 127,
  aux_sym_source_file_repeat1 = 128,
  aux_sym_import_statement_repeat1 = 129,
  aux_sym_struct_field_declaration_list_repeat1 = 130,
  aux_sym_component_field_declaration_list_repeat1 = 131,
  aux_sym_animate_declaration_list_repeat1 = 132,
  aux_sym_list_definition_repeat1 = 133,
  aux_sym_formal_parameters_repeat1 = 134,
  aux_sym_string_repeat1 = 135,
  aux_sym_string_repeat2 = 136,
  aux_sym_var_identifier_repeat1 = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [anon_sym_SEMI] = ";",
  [anon_sym_struct] = "struct",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON] = ":",
  [anon_sym_animate] = "animate",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_property] = "property",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_SLASH] = "/",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_callback] = "callback",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym__identifier] = "_identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_parent] = "parent",
  [anon_sym_root] = "root",
  [anon_sym_this] = "this",
  [anon_sym_POUND] = "#",
  [aux_sym_color_token1] = "color_token1",
  [aux_sym_color_token2] = "color_token2",
  [sym_int_number] = "int_number",
  [sym_float_number] = "float_number",
  [anon_sym_px] = "px",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ms] = "ms",
  [anon_sym_black] = "black",
  [anon_sym_blue] = "blue",
  [anon_sym_ease] = "ease",
  [anon_sym_ease_in] = "ease_in",
  [anon_sym_ease_in_out] = "ease_in_out",
  [anon_sym_ease_out] = "ease_out",
  [anon_sym_end] = "end",
  [anon_sym_green] = "green",
  [anon_sym_red] = "red",
  [anon_sym_start] = "start",
  [anon_sym_yellow] = "yellow",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_transparent] = "transparent",
  [anon_sym_angle] = "angle",
  [anon_sym_bool] = "bool",
  [anon_sym_brush] = "brush",
  [anon_sym_duration] = "duration",
  [anon_sym_easing] = "easing",
  [anon_sym_float] = "float",
  [anon_sym_image] = "image",
  [anon_sym_int] = "int",
  [anon_sym_length] = "length",
  [anon_sym_percent] = "percent",
  [anon_sym_physical_DASHlength] = "physical-length",
  [anon_sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_import_statement] = "import_statement",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_field_declaration_list] = "struct_field_declaration_list",
  [sym_component_definition] = "component_definition",
  [sym_component_field_declaration_list] = "component_field_declaration_list",
  [sym_animate_statement] = "animate_statement",
  [sym_animate_declaration_list] = "animate_declaration_list",
  [sym_callback_event] = "callback_event",
  [sym_callback_call] = "callback_call",
  [sym_if_statement_definition] = "if_statement_definition",
  [sym_for_loop_definition] = "for_loop_definition",
  [sym_for_loop_index] = "for_loop_index",
  [sym_property_definition] = "property_definition",
  [sym_property_expr] = "property_expr",
  [sym__propterty_kind] = "_propterty_kind",
  [sym_property_type_list] = "property_type_list",
  [sym_list_definition] = "list_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_set_equal] = "variable_set_equal",
  [sym__expression] = "_expression",
  [sym_expression_body_paren] = "expression_body_paren",
  [sym_expression_body] = "expression_body",
  [sym_unary_expression] = "unary_expression",
  [sym__binary_expression] = "_binary_expression",
  [sym_mult_binary_expression] = "mult_binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_add_binary_expression] = "add_binary_expression",
  [sym_callback_definition] = "callback_definition",
  [sym_call_signature] = "call_signature",
  [sym_formal_parameters] = "formal_parameters",
  [sym_formal_parameter] = "formal_parameter",
  [sym_string] = "string",
  [sym_post_identifier] = "post_identifier",
  [sym_user_type_identifier] = "user_type_identifier",
  [sym__type_identifier] = "_type_identifier",
  [sym_var_identifier] = "var_identifier",
  [sym_function_identifier] = "function_identifier",
  [sym_function_call] = "function_call",
  [sym_reference_identifier] = "reference_identifier",
  [sym_value] = "value",
  [sym_color] = "color",
  [sym_value_with_units] = "value_with_units",
  [sym_number] = "number",
  [sym_unit_type] = "unit_type",
  [sym_language_constant] = "language_constant",
  [sym_builtin_type_identifier] = "builtin_type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_struct_field_declaration_list_repeat1] = "struct_field_declaration_list_repeat1",
  [aux_sym_component_field_declaration_list_repeat1] = "component_field_declaration_list_repeat1",
  [aux_sym_animate_declaration_list_repeat1] = "animate_declaration_list_repeat1",
  [aux_sym_list_definition_repeat1] = "list_definition_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_var_identifier_repeat1] = "var_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_animate] = anon_sym_animate,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_callback] = anon_sym_callback,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym__identifier] = sym__identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_parent] = anon_sym_parent,
  [anon_sym_root] = anon_sym_root,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [aux_sym_color_token2] = aux_sym_color_token2,
  [sym_int_number] = sym_int_number,
  [sym_float_number] = sym_float_number,
  [anon_sym_px] = anon_sym_px,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_ease] = anon_sym_ease,
  [anon_sym_ease_in] = anon_sym_ease_in,
  [anon_sym_ease_in_out] = anon_sym_ease_in_out,
  [anon_sym_ease_out] = anon_sym_ease_out,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_transparent] = anon_sym_transparent,
  [anon_sym_angle] = anon_sym_angle,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_brush] = anon_sym_brush,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_easing] = anon_sym_easing,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_percent] = anon_sym_percent,
  [anon_sym_physical_DASHlength] = anon_sym_physical_DASHlength,
  [anon_sym_string] = anon_sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_import_statement] = sym_import_statement,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_field_declaration_list] = sym_struct_field_declaration_list,
  [sym_component_definition] = sym_component_definition,
  [sym_component_field_declaration_list] = sym_component_field_declaration_list,
  [sym_animate_statement] = sym_animate_statement,
  [sym_animate_declaration_list] = sym_animate_declaration_list,
  [sym_callback_event] = sym_callback_event,
  [sym_callback_call] = sym_callback_call,
  [sym_if_statement_definition] = sym_if_statement_definition,
  [sym_for_loop_definition] = sym_for_loop_definition,
  [sym_for_loop_index] = sym_for_loop_index,
  [sym_property_definition] = sym_property_definition,
  [sym_property_expr] = sym_property_expr,
  [sym__propterty_kind] = sym__propterty_kind,
  [sym_property_type_list] = sym_property_type_list,
  [sym_list_definition] = sym_list_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_set_equal] = sym_variable_set_equal,
  [sym__expression] = sym__expression,
  [sym_expression_body_paren] = sym_expression_body_paren,
  [sym_expression_body] = sym_expression_body,
  [sym_unary_expression] = sym_unary_expression,
  [sym__binary_expression] = sym__binary_expression,
  [sym_mult_binary_expression] = sym_mult_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_add_binary_expression] = sym_add_binary_expression,
  [sym_callback_definition] = sym_callback_definition,
  [sym_call_signature] = sym_call_signature,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_formal_parameter] = sym_formal_parameter,
  [sym_string] = sym_string,
  [sym_post_identifier] = sym_post_identifier,
  [sym_user_type_identifier] = sym_user_type_identifier,
  [sym__type_identifier] = sym__type_identifier,
  [sym_var_identifier] = sym_var_identifier,
  [sym_function_identifier] = sym_function_identifier,
  [sym_function_call] = sym_function_call,
  [sym_reference_identifier] = sym_reference_identifier,
  [sym_value] = sym_value,
  [sym_color] = sym_color,
  [sym_value_with_units] = sym_value_with_units,
  [sym_number] = sym_number,
  [sym_unit_type] = sym_unit_type,
  [sym_language_constant] = sym_language_constant,
  [sym_builtin_type_identifier] = sym_builtin_type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_struct_field_declaration_list_repeat1] = aux_sym_struct_field_declaration_list_repeat1,
  [aux_sym_component_field_declaration_list_repeat1] = aux_sym_component_field_declaration_list_repeat1,
  [aux_sym_animate_declaration_list_repeat1] = aux_sym_animate_declaration_list_repeat1,
  [aux_sym_list_definition_repeat1] = aux_sym_list_definition_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_var_identifier_repeat1] = aux_sym_var_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_root] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_int_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_px] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ease] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ease_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ease_in_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ease_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transparent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_angle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_easing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_percent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_physical_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_component_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_component_field_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_animate_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_animate_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_callback_event] = {
    .visible = true,
    .named = true,
  },
  [sym_callback_call] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop_index] = {
    .visible = true,
    .named = true,
  },
  [sym_property_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_property_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__propterty_kind] = {
    .visible = false,
    .named = true,
  },
  [sym_property_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_set_equal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_body_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_body] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_mult_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_add_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_callback_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_call_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_post_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_user_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_var_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_value_with_units] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_type] = {
    .visible = true,
    .named = true,
  },
  [sym_language_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_field_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_animate_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_function = 2,
  field_name = 3,
  field_parameters = 4,
  field_prev_name = 5,
  field_super_type = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_function] = "function",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_prev_name] = "prev_name",
  [field_super_type] = "super_type",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 3},
  [7] = {.index = 14, .length = 3},
  [8] = {.index = 17, .length = 3},
  [9] = {.index = 20, .length = 2},
  [10] = {.index = 22, .length = 1},
  [11] = {.index = 23, .length = 1},
  [12] = {.index = 24, .length = 1},
  [13] = {.index = 25, .length = 2},
  [14] = {.index = 27, .length = 3},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 1},
  [17] = {.index = 33, .length = 1},
  [18] = {.index = 34, .length = 1},
  [19] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
    {field_super_type, 0},
  [2] =
    {field_body, 2},
    {field_super_type, 1},
  [4] =
    {field_body, 2},
    {field_name, 0},
    {field_super_type, 1},
  [7] =
    {field_body, 3},
    {field_name, 1},
  [9] =
    {field_body, 3},
    {field_super_type, 2},
  [11] =
    {field_body, 3},
    {field_name, 1},
    {field_super_type, 2},
  [14] =
    {field_body, 3},
    {field_name, 0},
    {field_super_type, 2},
  [17] =
    {field_body, 4},
    {field_name, 1},
    {field_super_type, 3},
  [20] =
    {field_body, 4},
    {field_name, 2},
  [22] =
    {field_type, 0},
  [23] =
    {field_parameters, 0},
  [24] =
    {field_name, 1, .inherited = true},
  [25] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [27] =
    {field_body, 5},
    {field_name, 2},
    {field_super_type, 4},
  [30] =
    {field_function, 0},
    {field_function, 1},
  [32] =
    {field_name, 0},
  [33] =
    {field_prev_name, 0},
  [34] =
    {field_type, 1},
  [35] =
    {field_name, 4},
    {field_type, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 3,
  [9] = 4,
  [10] = 6,
  [11] = 3,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 17,
  [23] = 14,
  [24] = 21,
  [25] = 19,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 29,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 44,
  [88] = 73,
  [89] = 89,
  [90] = 72,
  [91] = 91,
  [92] = 92,
  [93] = 70,
  [94] = 94,
  [95] = 69,
  [96] = 74,
  [97] = 45,
  [98] = 98,
  [99] = 42,
  [100] = 100,
  [101] = 52,
  [102] = 43,
  [103] = 67,
  [104] = 65,
  [105] = 47,
  [106] = 106,
  [107] = 107,
  [108] = 66,
  [109] = 109,
  [110] = 110,
  [111] = 46,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 124,
  [129] = 119,
  [130] = 120,
  [131] = 131,
  [132] = 34,
  [133] = 40,
  [134] = 109,
  [135] = 41,
  [136] = 39,
  [137] = 137,
  [138] = 40,
  [139] = 34,
  [140] = 41,
  [141] = 39,
  [142] = 142,
  [143] = 36,
  [144] = 44,
  [145] = 45,
  [146] = 38,
  [147] = 46,
  [148] = 35,
  [149] = 35,
  [150] = 116,
  [151] = 42,
  [152] = 117,
  [153] = 43,
  [154] = 47,
  [155] = 36,
  [156] = 38,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 78,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 164,
  [174] = 78,
  [175] = 158,
  [176] = 157,
  [177] = 165,
  [178] = 166,
  [179] = 169,
  [180] = 161,
  [181] = 172,
  [182] = 160,
  [183] = 170,
  [184] = 171,
  [185] = 163,
  [186] = 168,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 191,
  [198] = 188,
  [199] = 39,
  [200] = 41,
  [201] = 201,
  [202] = 40,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 212,
  [213] = 209,
  [214] = 209,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 220,
  [224] = 216,
  [225] = 221,
  [226] = 226,
  [227] = 226,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 237,
  [238] = 237,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 230,
  [244] = 235,
  [245] = 237,
  [246] = 230,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 254,
  [265] = 265,
  [266] = 266,
  [267] = 257,
  [268] = 258,
  [269] = 260,
  [270] = 270,
  [271] = 266,
  [272] = 251,
  [273] = 273,
  [274] = 274,
  [275] = 265,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(213);
      if (lookahead == '!') ADVANCE(247);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(441);
      if (lookahead == '%') ADVANCE(448);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '+') ADVANCE(253);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(239);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '@') ADVANCE(434);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == '\\') SKIP(209)
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(81);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == 'x') ADVANCE(202);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(247);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(441);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '@') ADVANCE(434);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(345);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == 'y') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(448);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '+') ADVANCE(253);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '=') ADVANCE(240);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(448);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '+') ADVANCE(253);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 28:
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '+') ADVANCE(253);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 29:
      if (lookahead == '&') ADVANCE(249);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(504);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(503);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '>') ADVANCE(239);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '@') ADVANCE(434);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(256);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(147);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(446);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(487);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(501);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(483);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(495);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(499);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(451);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(254);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 191:
      if (lookahead == 'w') ADVANCE(471);
      END_STATE();
    case 192:
      if (lookahead == 'x') ADVANCE(446);
      END_STATE();
    case 193:
      if (lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 195:
      if (lookahead == '{') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 196:
      if (lookahead == '|') ADVANCE(250);
      END_STATE();
    case 197:
      if (lookahead == '}') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(504);
      if (lookahead == '\r') ADVANCE(505);
      END_STATE();
    case 208:
      if (eof) ADVANCE(213);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 209:
      if (eof) ADVANCE(213);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(208)
      END_STATE();
    case 210:
      if (eof) ADVANCE(213);
      if (lookahead == '\n') SKIP(212)
      END_STATE();
    case 211:
      if (eof) ADVANCE(213);
      if (lookahead == '\n') SKIP(212)
      if (lookahead == '\r') SKIP(210)
      END_STATE();
    case 212:
      if (eof) ADVANCE(213);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '\\') SKIP(211)
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_animate);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_animate);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(256);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(504);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_visibility_modifier);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_visibility_modifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'x') ADVANCE(382);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'x') ADVANCE(447);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(285);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(464);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(468);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(488);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(502);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(347);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(304);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(419);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(422);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(496);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(452);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(255);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(486);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(319);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(430);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(472);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(237);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(403);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(337);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(380);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(504);
      if (lookahead == '\\') ADVANCE(207);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 212},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 32},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 212},
  [50] = {.lex_state = 212},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 32},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 32},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 32},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 212},
  [77] = {.lex_state = 212},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 212},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 212},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 212},
  [91] = {.lex_state = 38},
  [92] = {.lex_state = 212},
  [93] = {.lex_state = 212},
  [94] = {.lex_state = 212},
  [95] = {.lex_state = 212},
  [96] = {.lex_state = 212},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 212},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 212},
  [101] = {.lex_state = 212},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 212},
  [104] = {.lex_state = 212},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 212},
  [107] = {.lex_state = 212},
  [108] = {.lex_state = 212},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 36},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 31},
  [132] = {.lex_state = 26},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 26},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 28},
  [140] = {.lex_state = 28},
  [141] = {.lex_state = 26},
  [142] = {.lex_state = 31},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 28},
  [145] = {.lex_state = 28},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 28},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 26},
  [151] = {.lex_state = 28},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 28},
  [154] = {.lex_state = 28},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 28},
  [158] = {.lex_state = 28},
  [159] = {.lex_state = 31},
  [160] = {.lex_state = 28},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 28},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 28},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 28},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 28},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 26},
  [176] = {.lex_state = 26},
  [177] = {.lex_state = 26},
  [178] = {.lex_state = 26},
  [179] = {.lex_state = 26},
  [180] = {.lex_state = 26},
  [181] = {.lex_state = 26},
  [182] = {.lex_state = 26},
  [183] = {.lex_state = 26},
  [184] = {.lex_state = 26},
  [185] = {.lex_state = 26},
  [186] = {.lex_state = 26},
  [187] = {.lex_state = 26},
  [188] = {.lex_state = 26},
  [189] = {.lex_state = 26},
  [190] = {.lex_state = 26},
  [191] = {.lex_state = 26},
  [192] = {.lex_state = 40},
  [193] = {.lex_state = 26},
  [194] = {.lex_state = 26},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 40},
  [197] = {.lex_state = 26},
  [198] = {.lex_state = 26},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 40},
  [204] = {.lex_state = 40},
  [205] = {.lex_state = 40},
  [206] = {.lex_state = 40},
  [207] = {.lex_state = 40},
  [208] = {.lex_state = 40},
  [209] = {.lex_state = 39},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 31},
  [212] = {.lex_state = 40},
  [213] = {.lex_state = 39},
  [214] = {.lex_state = 39},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 25},
  [217] = {.lex_state = 25},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 30},
  [220] = {.lex_state = 30},
  [221] = {.lex_state = 25},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 30},
  [224] = {.lex_state = 25},
  [225] = {.lex_state = 25},
  [226] = {.lex_state = 30},
  [227] = {.lex_state = 30},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 31},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 31},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 31},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 41},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 41},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 39},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_animate] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_callback] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_visibility_modifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_root] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_int_number] = ACTIONS(1),
    [sym_float_number] = ACTIONS(1),
    [anon_sym_px] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_ease] = ACTIONS(1),
    [anon_sym_ease_in] = ACTIONS(1),
    [anon_sym_ease_in_out] = ACTIONS(1),
    [anon_sym_ease_out] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_transparent] = ACTIONS(1),
    [anon_sym_angle] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_brush] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_easing] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_percent] = ACTIONS(1),
    [anon_sym_physical_DASHlength] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(303),
    [sym__definition] = STATE(49),
    [sym_import_statement] = STATE(49),
    [sym_struct_definition] = STATE(49),
    [sym_component_definition] = STATE(49),
    [sym_user_type_identifier] = STATE(84),
    [sym__type_identifier] = STATE(84),
    [sym_builtin_type_identifier] = STATE(84),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_COLON_EQ] = ACTIONS(11),
    [sym_visibility_modifier] = ACTIONS(13),
    [sym__identifier] = ACTIONS(15),
    [anon_sym_angle] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_brush] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_easing] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_image] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_length] = ACTIONS(17),
    [anon_sym_percent] = ACTIONS(17),
    [anon_sym_physical_DASHlength] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(278), 1,
      sym_list_definition,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(193), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [106] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(244), 1,
      sym_formal_parameter,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [212] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(270), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [318] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(270), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [424] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(270), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [530] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(270), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [636] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(235), 1,
      sym_formal_parameter,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [742] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(270), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [848] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(270), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [954] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(236), 1,
      sym_formal_parameter,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1060] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    STATE(270), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(187), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1163] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_BANG,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_int_number,
    ACTIONS(83), 1,
      sym_float_number,
    STATE(109), 1,
      sym_number,
    STATE(136), 1,
      sym_reference_identifier,
    STATE(243), 1,
      sym_function_identifier,
    ACTIONS(77), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(162), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(87), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(85), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1263] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(197), 1,
      sym_expression_body,
    STATE(246), 1,
      sym_function_identifier,
    STATE(201), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1365] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(189), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1465] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(188), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1565] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_BANG,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_int_number,
    ACTIONS(83), 1,
      sym_float_number,
    STATE(109), 1,
      sym_number,
    STATE(136), 1,
      sym_reference_identifier,
    STATE(243), 1,
      sym_function_identifier,
    ACTIONS(77), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(157), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(165), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(87), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(85), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1665] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_BANG,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_int_number,
    ACTIONS(83), 1,
      sym_float_number,
    STATE(109), 1,
      sym_number,
    STATE(136), 1,
      sym_reference_identifier,
    STATE(243), 1,
      sym_function_identifier,
    ACTIONS(77), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(168), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(87), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(85), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1765] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_BANG,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_int_number,
    ACTIONS(83), 1,
      sym_float_number,
    STATE(109), 1,
      sym_number,
    STATE(136), 1,
      sym_reference_identifier,
    STATE(243), 1,
      sym_function_identifier,
    ACTIONS(77), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(169), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(87), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(85), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1865] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(186), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [1965] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_BANG,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_int_number,
    ACTIONS(83), 1,
      sym_float_number,
    STATE(109), 1,
      sym_number,
    STATE(136), 1,
      sym_reference_identifier,
    STATE(243), 1,
      sym_function_identifier,
    ACTIONS(77), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(170), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(87), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(85), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2065] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(176), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2165] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(191), 1,
      sym_expression_body,
    STATE(246), 1,
      sym_function_identifier,
    STATE(201), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2267] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(183), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2367] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(179), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2467] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(198), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2567] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(194), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2667] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_int_number,
    ACTIONS(41), 1,
      sym_float_number,
    STATE(134), 1,
      sym_number,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(175), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(190), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(177), 10,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_ternary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
      sym_builtin_type_identifier,
    ACTIONS(45), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
    ACTIONS(43), 14,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_out,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
  [2767] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_COLON_EQ,
    ACTIONS(93), 1,
      anon_sym_animate,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_property,
    ACTIONS(101), 1,
      anon_sym_callback,
    ACTIONS(103), 1,
      sym_visibility_modifier,
    ACTIONS(105), 1,
      sym__identifier,
    STATE(39), 1,
      sym_reference_identifier,
    STATE(48), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(83), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(32), 11,
      sym_component_definition,
      sym_animate_statement,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_variable_set_equal,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2841] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COLON_EQ,
    ACTIONS(93), 1,
      anon_sym_animate,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_property,
    ACTIONS(101), 1,
      anon_sym_callback,
    ACTIONS(103), 1,
      sym_visibility_modifier,
    ACTIONS(105), 1,
      sym__identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_reference_identifier,
    STATE(48), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(83), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(31), 11,
      sym_component_definition,
      sym_animate_statement,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_variable_set_equal,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2915] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_COLON_EQ,
    ACTIONS(116), 1,
      anon_sym_animate,
    ACTIONS(119), 1,
      anon_sym_if,
    ACTIONS(122), 1,
      anon_sym_for,
    ACTIONS(125), 1,
      anon_sym_property,
    ACTIONS(128), 1,
      anon_sym_callback,
    ACTIONS(131), 1,
      sym_visibility_modifier,
    ACTIONS(134), 1,
      sym__identifier,
    STATE(39), 1,
      sym_reference_identifier,
    STATE(48), 1,
      sym_var_identifier,
    ACTIONS(137), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(83), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(31), 11,
      sym_component_definition,
      sym_animate_statement,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_variable_set_equal,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(140), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2989] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COLON_EQ,
    ACTIONS(93), 1,
      anon_sym_animate,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_property,
    ACTIONS(101), 1,
      anon_sym_callback,
    ACTIONS(103), 1,
      sym_visibility_modifier,
    ACTIONS(105), 1,
      sym__identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_reference_identifier,
    STATE(48), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(83), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(31), 11,
      sym_component_definition,
      sym_animate_statement,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_variable_set_equal,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3063] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COLON_EQ,
    ACTIONS(93), 1,
      anon_sym_animate,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_property,
    ACTIONS(101), 1,
      anon_sym_callback,
    ACTIONS(103), 1,
      sym_visibility_modifier,
    ACTIONS(105), 1,
      sym__identifier,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_reference_identifier,
    STATE(48), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(83), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(30), 11,
      sym_component_definition,
      sym_animate_statement,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_variable_set_equal,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(149), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(149), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(155), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(157), 2,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
    ACTIONS(161), 11,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(163), 13,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(169), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(159), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
    ACTIONS(161), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
    ACTIONS(173), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(153), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
    ACTIONS(155), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(180), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(184), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(188), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(192), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(196), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(200), 24,
      anon_sym_COLON,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3691] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      anon_sym_COLON,
    ACTIONS(210), 1,
      anon_sym_EQ_GT,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(202), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(208), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3735] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 1,
      sym_visibility_modifier,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(84), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(50), 5,
      sym__definition,
      sym_import_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3783] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_import,
    ACTIONS(221), 1,
      anon_sym_struct,
    ACTIONS(224), 1,
      anon_sym_COLON_EQ,
    ACTIONS(227), 1,
      sym_visibility_modifier,
    ACTIONS(230), 1,
      sym__identifier,
    STATE(84), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(50), 5,
      sym__definition,
      sym_import_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(233), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(238), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(242), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(246), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(250), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(254), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(258), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(262), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(266), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(270), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(274), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(278), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(282), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(286), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(290), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(294), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(298), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(302), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(306), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(310), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(314), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(318), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(322), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(326), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(330), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(334), 22,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
    ACTIONS(338), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
    ACTIONS(342), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(346), 14,
      anon_sym_COLON,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(163), 13,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    STATE(280), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(281), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4779] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_COLON_EQ,
    STATE(52), 1,
      sym_component_field_declaration_list,
    STATE(269), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      anon_sym_COLON_EQ,
    STATE(101), 1,
      sym_component_field_declaration_list,
    STATE(260), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_COLON_EQ,
    STATE(65), 1,
      sym_component_field_declaration_list,
    STATE(267), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4884] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_COLON_EQ,
    STATE(104), 1,
      sym_component_field_declaration_list,
    STATE(257), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(364), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_struct_field_declaration_list,
    STATE(262), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(186), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [5003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(326), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5029] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_struct_field_declaration_list,
    STATE(252), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(322), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5087] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(368), 1,
      anon_sym_struct,
    ACTIONS(370), 1,
      anon_sym_COLON_EQ,
    STATE(82), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(374), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(314), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(378), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(310), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(330), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(190), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [5275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(382), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(178), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [5327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(386), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(242), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(182), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [5405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(302), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(294), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(198), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [5483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(390), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(394), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(298), 16,
      anon_sym_import,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5561] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_PERCENT,
    STATE(171), 1,
      sym_unit_type,
    ACTIONS(400), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(398), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(396), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(404), 1,
      anon_sym_COLON_EQ,
    STATE(81), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(194), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5646] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(247), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(274), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(283), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(261), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_PERCENT,
    ACTIONS(410), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
  [5777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(161), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(159), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(259), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(266), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(272), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(297), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(264), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(254), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(268), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [5989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(288), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(299), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(294), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(258), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(271), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(304), 1,
      sym_builtin_type_identifier,
    ACTIONS(416), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(171), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6224] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    STATE(184), 1,
      sym_unit_type,
    ACTIONS(420), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(396), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(422), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(153), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(161), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(159), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(304), 1,
      sym_builtin_type_identifier,
    ACTIONS(416), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(173), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(171), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(147), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(155), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(153), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(159), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(304), 1,
      sym_builtin_type_identifier,
    ACTIONS(432), 12,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(153), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(186), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(190), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    ACTIONS(167), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(194), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(147), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(147), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SLASH,
    ACTIONS(408), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
  [6641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(178), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(159), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(182), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(198), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(153), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(167), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [6779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_QMARK,
    ACTIONS(435), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(437), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(396), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 13,
      anon_sym_RBRACE,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [6842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(443), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(447), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6884] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_QMARK,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      anon_sym_DASH,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_PLUS,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(463), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(465), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(469), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(473), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [6980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(477), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(344), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(481), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_QMARK,
    ACTIONS(485), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(487), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_QMARK,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(489), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS,
    ACTIONS(491), 5,
      anon_sym_DASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(493), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(497), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SLASH,
    ACTIONS(469), 11,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(344), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(396), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SLASH,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(435), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [7214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(473), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_SLASH,
    ACTIONS(477), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SLASH,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(485), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [7273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(447), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_SLASH,
    ACTIONS(497), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SLASH,
    ACTIONS(443), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(489), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
  [7353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(493), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(465), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(481), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(511), 1,
      anon_sym_COLON,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7455] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(515), 1,
      anon_sym_SEMI,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_SLASH,
    ACTIONS(519), 6,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7517] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      sym__identifier,
    STATE(195), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(290), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7541] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7563] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(529), 1,
      anon_sym_SEMI,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7585] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__identifier,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(290), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      sym__identifier,
    STATE(196), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(290), 1,
      sym_var_identifier,
    ACTIONS(538), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SLASH,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 6,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(159), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [7690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DOT,
    STATE(200), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(153), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [7707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_QMARK,
    ACTIONS(505), 1,
      anon_sym_SLASH,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    STATE(200), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(171), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [7743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__identifier,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(293), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__identifier,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(301), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__identifier,
    STATE(141), 1,
      sym_reference_identifier,
    STATE(242), 1,
      sym_var_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__identifier,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(300), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__identifier,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(215), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__identifier,
    STATE(199), 1,
      sym_reference_identifier,
    STATE(255), 1,
      sym_var_identifier,
    ACTIONS(107), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7851] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(552), 1,
      sym__identifier,
    STATE(35), 1,
      sym_function_call,
    STATE(36), 1,
      sym_post_identifier,
    STATE(230), 1,
      sym_function_identifier,
  [7870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(554), 1,
      sym__identifier,
    STATE(143), 1,
      sym_post_identifier,
    STATE(149), 1,
      sym_function_call,
    STATE(246), 1,
      sym_function_identifier,
  [7889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_DASH_GT,
    STATE(105), 1,
      sym_formal_parameters,
    STATE(250), 1,
      sym_call_signature,
  [7908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(564), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(566), 1,
      sym__identifier,
    STATE(148), 1,
      sym_function_call,
    STATE(155), 1,
      sym_post_identifier,
    STATE(243), 1,
      sym_function_identifier,
  [7940] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(552), 1,
      sym__identifier,
    STATE(35), 1,
      sym_function_call,
    STATE(36), 1,
      sym_post_identifier,
    STATE(246), 1,
      sym_function_identifier,
  [7959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    STATE(284), 1,
      sym_property_expr,
    ACTIONS(570), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [7973] = 4,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
    ACTIONS(576), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(574), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7987] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      aux_sym_string_repeat1,
    ACTIONS(580), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [8001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      aux_sym_list_definition_repeat1,
    STATE(249), 1,
      sym_struct_field_declaration_list,
  [8017] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      aux_sym_string_repeat2,
    ACTIONS(590), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8031] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      aux_sym_string_repeat2,
    ACTIONS(595), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8045] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      aux_sym_string_repeat1,
    ACTIONS(597), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [8059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      aux_sym_list_definition_repeat1,
    STATE(249), 1,
      sym_struct_field_declaration_list,
  [8075] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      aux_sym_string_repeat2,
    ACTIONS(595), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8089] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      aux_sym_string_repeat1,
    ACTIONS(605), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [8103] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      aux_sym_string_repeat1,
    ACTIONS(597), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [8117] = 4,
    ACTIONS(576), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      aux_sym_string_repeat2,
    ACTIONS(607), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8131] = 4,
    ACTIONS(572), 1,
      anon_sym_SQUOTE,
    ACTIONS(576), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym_string_repeat2,
    ACTIONS(609), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      aux_sym_list_definition_repeat1,
    STATE(249), 1,
      sym_struct_field_declaration_list,
  [8161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [8170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_call_signature,
    STATE(47), 1,
      sym_formal_parameters,
  [8183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_formal_parameters_repeat1,
  [8196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(622), 1,
      sym__identifier,
    STATE(211), 1,
      sym_function_identifier,
  [8209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(298), 1,
      sym_string,
  [8222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(289), 1,
      sym_string,
  [8235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_formal_parameters_repeat1,
  [8248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_formal_parameters_repeat1,
  [8261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_formal_parameters_repeat1,
  [8274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_formal_parameters_repeat1,
  [8287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(302), 1,
      sym_string,
  [8300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      aux_sym_import_statement_repeat1,
  [8313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [8322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_in,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    STATE(279), 1,
      sym_for_loop_index,
  [8335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_call_signature,
    STATE(154), 1,
      sym_formal_parameters,
  [8348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym_formal_parameters_repeat1,
  [8361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_formal_parameters_repeat1,
  [8374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_formal_parameters,
    STATE(111), 1,
      sym_call_signature,
  [8387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      aux_sym_import_statement_repeat1,
  [8400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      aux_sym_import_statement_repeat1,
  [8413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(659), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SEMI,
    ACTIONS(665), 1,
      anon_sym_DASH_GT,
  [8434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_component_field_declaration_list,
  [8444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_struct_field_declaration_list,
  [8454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_component_field_declaration_list,
  [8464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_component_field_declaration_list,
  [8474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_animate_declaration_list,
  [8484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_component_field_declaration_list,
  [8494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_component_field_declaration_list,
  [8504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_component_field_declaration_list,
  [8514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_component_field_declaration_list,
  [8532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_component_field_declaration_list,
  [8542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_struct_field_declaration_list,
  [8552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(253), 1,
      sym_expression_body_paren,
  [8562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_component_field_declaration_list,
  [8572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      aux_sym_color_token1,
    ACTIONS(671), 1,
      aux_sym_color_token2,
  [8582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_component_field_declaration_list,
  [8592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_component_field_declaration_list,
  [8602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_component_field_declaration_list,
  [8612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_component_field_declaration_list,
  [8622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_component_field_declaration_list,
  [8640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_component_field_declaration_list,
  [8650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_component_field_declaration_list,
  [8668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      aux_sym_color_token1,
    ACTIONS(675), 1,
      aux_sym_color_token2,
  [8678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_LT,
  [8685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_GT,
  [8692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SEMI,
  [8699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_in,
  [8706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_GT,
  [8713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_GT,
  [8720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_SEMI,
  [8727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
  [8734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [8741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SEMI,
  [8748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_from,
  [8755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
  [8762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [8769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [8776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_COLON,
  [8783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym__identifier,
  [8790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_from,
  [8797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_COLON,
  [8804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_COLON_EQ,
  [8811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_in,
  [8818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_from,
  [8825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_SEMI,
  [8832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SEMI,
  [8839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_COLON_EQ,
  [8846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
  [8853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_COLON,
  [8860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_SEMI,
  [8867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
  [8874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 212,
  [SMALL_STATE(5)] = 318,
  [SMALL_STATE(6)] = 424,
  [SMALL_STATE(7)] = 530,
  [SMALL_STATE(8)] = 636,
  [SMALL_STATE(9)] = 742,
  [SMALL_STATE(10)] = 848,
  [SMALL_STATE(11)] = 954,
  [SMALL_STATE(12)] = 1060,
  [SMALL_STATE(13)] = 1163,
  [SMALL_STATE(14)] = 1263,
  [SMALL_STATE(15)] = 1365,
  [SMALL_STATE(16)] = 1465,
  [SMALL_STATE(17)] = 1565,
  [SMALL_STATE(18)] = 1665,
  [SMALL_STATE(19)] = 1765,
  [SMALL_STATE(20)] = 1865,
  [SMALL_STATE(21)] = 1965,
  [SMALL_STATE(22)] = 2065,
  [SMALL_STATE(23)] = 2165,
  [SMALL_STATE(24)] = 2267,
  [SMALL_STATE(25)] = 2367,
  [SMALL_STATE(26)] = 2467,
  [SMALL_STATE(27)] = 2567,
  [SMALL_STATE(28)] = 2667,
  [SMALL_STATE(29)] = 2767,
  [SMALL_STATE(30)] = 2841,
  [SMALL_STATE(31)] = 2915,
  [SMALL_STATE(32)] = 2989,
  [SMALL_STATE(33)] = 3063,
  [SMALL_STATE(34)] = 3137,
  [SMALL_STATE(35)] = 3179,
  [SMALL_STATE(36)] = 3218,
  [SMALL_STATE(37)] = 3257,
  [SMALL_STATE(38)] = 3304,
  [SMALL_STATE(39)] = 3343,
  [SMALL_STATE(40)] = 3385,
  [SMALL_STATE(41)] = 3427,
  [SMALL_STATE(42)] = 3469,
  [SMALL_STATE(43)] = 3506,
  [SMALL_STATE(44)] = 3543,
  [SMALL_STATE(45)] = 3580,
  [SMALL_STATE(46)] = 3617,
  [SMALL_STATE(47)] = 3654,
  [SMALL_STATE(48)] = 3691,
  [SMALL_STATE(49)] = 3735,
  [SMALL_STATE(50)] = 3783,
  [SMALL_STATE(51)] = 3831,
  [SMALL_STATE(52)] = 3863,
  [SMALL_STATE(53)] = 3895,
  [SMALL_STATE(54)] = 3927,
  [SMALL_STATE(55)] = 3959,
  [SMALL_STATE(56)] = 3991,
  [SMALL_STATE(57)] = 4023,
  [SMALL_STATE(58)] = 4055,
  [SMALL_STATE(59)] = 4087,
  [SMALL_STATE(60)] = 4119,
  [SMALL_STATE(61)] = 4151,
  [SMALL_STATE(62)] = 4183,
  [SMALL_STATE(63)] = 4215,
  [SMALL_STATE(64)] = 4247,
  [SMALL_STATE(65)] = 4279,
  [SMALL_STATE(66)] = 4311,
  [SMALL_STATE(67)] = 4343,
  [SMALL_STATE(68)] = 4375,
  [SMALL_STATE(69)] = 4407,
  [SMALL_STATE(70)] = 4439,
  [SMALL_STATE(71)] = 4471,
  [SMALL_STATE(72)] = 4503,
  [SMALL_STATE(73)] = 4535,
  [SMALL_STATE(74)] = 4567,
  [SMALL_STATE(75)] = 4599,
  [SMALL_STATE(76)] = 4631,
  [SMALL_STATE(77)] = 4660,
  [SMALL_STATE(78)] = 4689,
  [SMALL_STATE(79)] = 4718,
  [SMALL_STATE(80)] = 4746,
  [SMALL_STATE(81)] = 4779,
  [SMALL_STATE(82)] = 4814,
  [SMALL_STATE(83)] = 4849,
  [SMALL_STATE(84)] = 4884,
  [SMALL_STATE(85)] = 4919,
  [SMALL_STATE(86)] = 4945,
  [SMALL_STATE(87)] = 4977,
  [SMALL_STATE(88)] = 5003,
  [SMALL_STATE(89)] = 5029,
  [SMALL_STATE(90)] = 5061,
  [SMALL_STATE(91)] = 5087,
  [SMALL_STATE(92)] = 5119,
  [SMALL_STATE(93)] = 5145,
  [SMALL_STATE(94)] = 5171,
  [SMALL_STATE(95)] = 5197,
  [SMALL_STATE(96)] = 5223,
  [SMALL_STATE(97)] = 5249,
  [SMALL_STATE(98)] = 5275,
  [SMALL_STATE(99)] = 5301,
  [SMALL_STATE(100)] = 5327,
  [SMALL_STATE(101)] = 5353,
  [SMALL_STATE(102)] = 5379,
  [SMALL_STATE(103)] = 5405,
  [SMALL_STATE(104)] = 5431,
  [SMALL_STATE(105)] = 5457,
  [SMALL_STATE(106)] = 5483,
  [SMALL_STATE(107)] = 5509,
  [SMALL_STATE(108)] = 5535,
  [SMALL_STATE(109)] = 5561,
  [SMALL_STATE(110)] = 5592,
  [SMALL_STATE(111)] = 5621,
  [SMALL_STATE(112)] = 5646,
  [SMALL_STATE(113)] = 5675,
  [SMALL_STATE(114)] = 5701,
  [SMALL_STATE(115)] = 5727,
  [SMALL_STATE(116)] = 5753,
  [SMALL_STATE(117)] = 5777,
  [SMALL_STATE(118)] = 5807,
  [SMALL_STATE(119)] = 5833,
  [SMALL_STATE(120)] = 5859,
  [SMALL_STATE(121)] = 5885,
  [SMALL_STATE(122)] = 5911,
  [SMALL_STATE(123)] = 5937,
  [SMALL_STATE(124)] = 5963,
  [SMALL_STATE(125)] = 5989,
  [SMALL_STATE(126)] = 6015,
  [SMALL_STATE(127)] = 6041,
  [SMALL_STATE(128)] = 6067,
  [SMALL_STATE(129)] = 6093,
  [SMALL_STATE(130)] = 6119,
  [SMALL_STATE(131)] = 6145,
  [SMALL_STATE(132)] = 6172,
  [SMALL_STATE(133)] = 6197,
  [SMALL_STATE(134)] = 6224,
  [SMALL_STATE(135)] = 6251,
  [SMALL_STATE(136)] = 6278,
  [SMALL_STATE(137)] = 6305,
  [SMALL_STATE(138)] = 6332,
  [SMALL_STATE(139)] = 6359,
  [SMALL_STATE(140)] = 6384,
  [SMALL_STATE(141)] = 6411,
  [SMALL_STATE(142)] = 6438,
  [SMALL_STATE(143)] = 6465,
  [SMALL_STATE(144)] = 6487,
  [SMALL_STATE(145)] = 6509,
  [SMALL_STATE(146)] = 6531,
  [SMALL_STATE(147)] = 6553,
  [SMALL_STATE(148)] = 6575,
  [SMALL_STATE(149)] = 6597,
  [SMALL_STATE(150)] = 6619,
  [SMALL_STATE(151)] = 6641,
  [SMALL_STATE(152)] = 6663,
  [SMALL_STATE(153)] = 6691,
  [SMALL_STATE(154)] = 6713,
  [SMALL_STATE(155)] = 6735,
  [SMALL_STATE(156)] = 6757,
  [SMALL_STATE(157)] = 6779,
  [SMALL_STATE(158)] = 6802,
  [SMALL_STATE(159)] = 6823,
  [SMALL_STATE(160)] = 6842,
  [SMALL_STATE(161)] = 6863,
  [SMALL_STATE(162)] = 6884,
  [SMALL_STATE(163)] = 6917,
  [SMALL_STATE(164)] = 6938,
  [SMALL_STATE(165)] = 6959,
  [SMALL_STATE(166)] = 6980,
  [SMALL_STATE(167)] = 7001,
  [SMALL_STATE(168)] = 7022,
  [SMALL_STATE(169)] = 7043,
  [SMALL_STATE(170)] = 7066,
  [SMALL_STATE(171)] = 7093,
  [SMALL_STATE(172)] = 7114,
  [SMALL_STATE(173)] = 7135,
  [SMALL_STATE(174)] = 7155,
  [SMALL_STATE(175)] = 7174,
  [SMALL_STATE(176)] = 7193,
  [SMALL_STATE(177)] = 7214,
  [SMALL_STATE(178)] = 7233,
  [SMALL_STATE(179)] = 7252,
  [SMALL_STATE(180)] = 7273,
  [SMALL_STATE(181)] = 7292,
  [SMALL_STATE(182)] = 7311,
  [SMALL_STATE(183)] = 7330,
  [SMALL_STATE(184)] = 7353,
  [SMALL_STATE(185)] = 7372,
  [SMALL_STATE(186)] = 7391,
  [SMALL_STATE(187)] = 7410,
  [SMALL_STATE(188)] = 7433,
  [SMALL_STATE(189)] = 7455,
  [SMALL_STATE(190)] = 7477,
  [SMALL_STATE(191)] = 7499,
  [SMALL_STATE(192)] = 7517,
  [SMALL_STATE(193)] = 7541,
  [SMALL_STATE(194)] = 7563,
  [SMALL_STATE(195)] = 7585,
  [SMALL_STATE(196)] = 7609,
  [SMALL_STATE(197)] = 7633,
  [SMALL_STATE(198)] = 7651,
  [SMALL_STATE(199)] = 7673,
  [SMALL_STATE(200)] = 7690,
  [SMALL_STATE(201)] = 7707,
  [SMALL_STATE(202)] = 7726,
  [SMALL_STATE(203)] = 7743,
  [SMALL_STATE(204)] = 7761,
  [SMALL_STATE(205)] = 7779,
  [SMALL_STATE(206)] = 7797,
  [SMALL_STATE(207)] = 7815,
  [SMALL_STATE(208)] = 7833,
  [SMALL_STATE(209)] = 7851,
  [SMALL_STATE(210)] = 7870,
  [SMALL_STATE(211)] = 7889,
  [SMALL_STATE(212)] = 7908,
  [SMALL_STATE(213)] = 7921,
  [SMALL_STATE(214)] = 7940,
  [SMALL_STATE(215)] = 7959,
  [SMALL_STATE(216)] = 7973,
  [SMALL_STATE(217)] = 7987,
  [SMALL_STATE(218)] = 8001,
  [SMALL_STATE(219)] = 8017,
  [SMALL_STATE(220)] = 8031,
  [SMALL_STATE(221)] = 8045,
  [SMALL_STATE(222)] = 8059,
  [SMALL_STATE(223)] = 8075,
  [SMALL_STATE(224)] = 8089,
  [SMALL_STATE(225)] = 8103,
  [SMALL_STATE(226)] = 8117,
  [SMALL_STATE(227)] = 8131,
  [SMALL_STATE(228)] = 8145,
  [SMALL_STATE(229)] = 8161,
  [SMALL_STATE(230)] = 8170,
  [SMALL_STATE(231)] = 8183,
  [SMALL_STATE(232)] = 8196,
  [SMALL_STATE(233)] = 8209,
  [SMALL_STATE(234)] = 8222,
  [SMALL_STATE(235)] = 8235,
  [SMALL_STATE(236)] = 8248,
  [SMALL_STATE(237)] = 8261,
  [SMALL_STATE(238)] = 8274,
  [SMALL_STATE(239)] = 8287,
  [SMALL_STATE(240)] = 8300,
  [SMALL_STATE(241)] = 8313,
  [SMALL_STATE(242)] = 8322,
  [SMALL_STATE(243)] = 8335,
  [SMALL_STATE(244)] = 8348,
  [SMALL_STATE(245)] = 8361,
  [SMALL_STATE(246)] = 8374,
  [SMALL_STATE(247)] = 8387,
  [SMALL_STATE(248)] = 8400,
  [SMALL_STATE(249)] = 8413,
  [SMALL_STATE(250)] = 8424,
  [SMALL_STATE(251)] = 8434,
  [SMALL_STATE(252)] = 8444,
  [SMALL_STATE(253)] = 8454,
  [SMALL_STATE(254)] = 8464,
  [SMALL_STATE(255)] = 8474,
  [SMALL_STATE(256)] = 8484,
  [SMALL_STATE(257)] = 8494,
  [SMALL_STATE(258)] = 8504,
  [SMALL_STATE(259)] = 8514,
  [SMALL_STATE(260)] = 8522,
  [SMALL_STATE(261)] = 8532,
  [SMALL_STATE(262)] = 8542,
  [SMALL_STATE(263)] = 8552,
  [SMALL_STATE(264)] = 8562,
  [SMALL_STATE(265)] = 8572,
  [SMALL_STATE(266)] = 8582,
  [SMALL_STATE(267)] = 8592,
  [SMALL_STATE(268)] = 8602,
  [SMALL_STATE(269)] = 8612,
  [SMALL_STATE(270)] = 8622,
  [SMALL_STATE(271)] = 8630,
  [SMALL_STATE(272)] = 8640,
  [SMALL_STATE(273)] = 8650,
  [SMALL_STATE(274)] = 8658,
  [SMALL_STATE(275)] = 8668,
  [SMALL_STATE(276)] = 8678,
  [SMALL_STATE(277)] = 8685,
  [SMALL_STATE(278)] = 8692,
  [SMALL_STATE(279)] = 8699,
  [SMALL_STATE(280)] = 8706,
  [SMALL_STATE(281)] = 8713,
  [SMALL_STATE(282)] = 8720,
  [SMALL_STATE(283)] = 8727,
  [SMALL_STATE(284)] = 8734,
  [SMALL_STATE(285)] = 8741,
  [SMALL_STATE(286)] = 8748,
  [SMALL_STATE(287)] = 8755,
  [SMALL_STATE(288)] = 8762,
  [SMALL_STATE(289)] = 8769,
  [SMALL_STATE(290)] = 8776,
  [SMALL_STATE(291)] = 8783,
  [SMALL_STATE(292)] = 8790,
  [SMALL_STATE(293)] = 8797,
  [SMALL_STATE(294)] = 8804,
  [SMALL_STATE(295)] = 8811,
  [SMALL_STATE(296)] = 8818,
  [SMALL_STATE(297)] = 8825,
  [SMALL_STATE(298)] = 8832,
  [SMALL_STATE(299)] = 8839,
  [SMALL_STATE(300)] = 8846,
  [SMALL_STATE(301)] = 8853,
  [SMALL_STATE(302)] = 8860,
  [SMALL_STATE(303)] = 8867,
  [SMALL_STATE(304)] = 8874,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(122),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(208),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(263),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(205),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(276),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(232),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(110),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(37),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(38),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(78),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type_identifier, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(209),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 11),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 11),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(287),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 8),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 8),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 12),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 14),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 14),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(210),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(213),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(78),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 13),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 13), SHIFT_REPEAT(199),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 13), SHIFT_REPEAT(38),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(214),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(217),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2), SHIFT_REPEAT(192),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(219),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(118),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 18),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 10),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_index, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [729] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_slint(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
