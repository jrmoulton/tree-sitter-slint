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
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
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
  anon_sym_EQ_GT = 10,
  anon_sym_if = 11,
  anon_sym_for = 12,
  anon_sym_in = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_property = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_EQ = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_DASH = 22,
  anon_sym_BANG = 23,
  anon_sym_STAR = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_SLASH = 27,
  anon_sym_PLUS = 28,
  anon_sym_callback = 29,
  anon_sym_DQUOTE = 30,
  anon_sym_SQUOTE = 31,
  sym_unescaped_double_string_fragment = 32,
  sym_unescaped_single_string_fragment = 33,
  sym_escape_sequence = 34,
  sym_visibility_modifier = 35,
  sym__identifier = 36,
  anon_sym_DOT = 37,
  anon_sym_AT = 38,
  anon_sym_parent = 39,
  anon_sym_root = 40,
  anon_sym_this = 41,
  anon_sym_POUND = 42,
  aux_sym_color_token1 = 43,
  aux_sym_color_token2 = 44,
  sym_int_number = 45,
  sym_float_number = 46,
  anon_sym_px = 47,
  anon_sym_PERCENT = 48,
  anon_sym_black = 49,
  anon_sym_blue = 50,
  anon_sym_ease = 51,
  anon_sym_ease_in = 52,
  anon_sym_ease_in_out = 53,
  anon_sym_ease_out = 54,
  anon_sym_end = 55,
  anon_sym_green = 56,
  anon_sym_red = 57,
  anon_sym_start = 58,
  anon_sym_yellow = 59,
  anon_sym_true = 60,
  anon_sym_false = 61,
  anon_sym_transparent = 62,
  anon_sym_angle = 63,
  anon_sym_bool = 64,
  anon_sym_brush = 65,
  anon_sym_duration = 66,
  anon_sym_easing = 67,
  anon_sym_float = 68,
  anon_sym_image = 69,
  anon_sym_int = 70,
  anon_sym_length = 71,
  anon_sym_percent = 72,
  anon_sym_physical_DASHlength = 73,
  anon_sym_string = 74,
  sym_comment = 75,
  sym_source_file = 76,
  sym__definition = 77,
  sym_import_statement = 78,
  sym_struct_definition = 79,
  sym_struct_field_declaration_list = 80,
  sym_component_definition = 81,
  sym_component_field_declaration_list = 82,
  sym_callback_event = 83,
  sym_callback_call = 84,
  sym_if_statement_definition = 85,
  sym_for_loop_definition = 86,
  sym_for_loop_index = 87,
  sym_property_definition = 88,
  sym_property_expr = 89,
  sym__propterty_kind = 90,
  sym_property_type_list = 91,
  sym_list_definition = 92,
  sym_variable_definition = 93,
  sym_variable_set_equal = 94,
  sym__expression = 95,
  sym_expression_body_paren = 96,
  sym_expression_body = 97,
  sym_unary_expression = 98,
  sym__binary_expression = 99,
  sym_mult_binary_expression = 100,
  sym_add_binary_expression = 101,
  sym_callback_definition = 102,
  sym_call_signature = 103,
  sym_formal_parameters = 104,
  sym_formal_parameter = 105,
  sym_string = 106,
  sym_post_identifier = 107,
  sym_user_type_identifier = 108,
  sym__type_identifier = 109,
  sym_var_identifier = 110,
  sym_function_identifier = 111,
  sym_function_call = 112,
  sym_reference_identifier = 113,
  sym_value = 114,
  sym_color = 115,
  sym_value_with_units = 116,
  sym_number = 117,
  sym_unit_type = 118,
  sym_language_constant = 119,
  sym_builtin_type_identifier = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_import_statement_repeat1 = 122,
  aux_sym_struct_field_declaration_list_repeat1 = 123,
  aux_sym_component_field_declaration_list_repeat1 = 124,
  aux_sym_list_definition_repeat1 = 125,
  aux_sym_formal_parameters_repeat1 = 126,
  aux_sym_string_repeat1 = 127,
  aux_sym_string_repeat2 = 128,
  aux_sym_var_identifier_repeat1 = 129,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_callback] = "callback",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_callback] = anon_sym_callback,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callback] = {
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
  [11] = {.index = 23, .length = 2},
  [12] = {.index = 25, .length = 1},
  [13] = {.index = 26, .length = 1},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 3},
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
    {field_function, 0},
    {field_function, 1},
  [25] =
    {field_parameters, 0},
  [26] =
    {field_name, 1, .inherited = true},
  [27] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [29] =
    {field_body, 5},
    {field_name, 2},
    {field_super_type, 4},
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
  [7] = 4,
  [8] = 3,
  [9] = 6,
  [10] = 6,
  [11] = 3,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 13,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
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
  [70] = 67,
  [71] = 71,
  [72] = 69,
  [73] = 73,
  [74] = 59,
  [75] = 55,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 54,
  [80] = 80,
  [81] = 81,
  [82] = 57,
  [83] = 58,
  [84] = 84,
  [85] = 62,
  [86] = 61,
  [87] = 63,
  [88] = 56,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 98,
  [101] = 101,
  [102] = 102,
  [103] = 97,
  [104] = 104,
  [105] = 95,
  [106] = 101,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 42,
  [112] = 39,
  [113] = 37,
  [114] = 40,
  [115] = 41,
  [116] = 38,
  [117] = 29,
  [118] = 118,
  [119] = 35,
  [120] = 36,
  [121] = 33,
  [122] = 35,
  [123] = 36,
  [124] = 40,
  [125] = 41,
  [126] = 38,
  [127] = 33,
  [128] = 31,
  [129] = 32,
  [130] = 34,
  [131] = 37,
  [132] = 42,
  [133] = 39,
  [134] = 29,
  [135] = 31,
  [136] = 32,
  [137] = 34,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 110,
  [147] = 109,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 118,
  [154] = 149,
  [155] = 141,
  [156] = 152,
  [157] = 148,
  [158] = 140,
  [159] = 144,
  [160] = 150,
  [161] = 151,
  [162] = 142,
  [163] = 143,
  [164] = 138,
  [165] = 139,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 170,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 35,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 33,
  [181] = 36,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 185,
  [187] = 185,
  [188] = 185,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 189,
  [195] = 193,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 196,
  [200] = 200,
  [201] = 201,
  [202] = 197,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 206,
  [209] = 209,
  [210] = 210,
  [211] = 205,
  [212] = 212,
  [213] = 213,
  [214] = 210,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 210,
  [220] = 206,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 225,
  [237] = 237,
  [238] = 238,
  [239] = 226,
  [240] = 223,
  [241] = 229,
  [242] = 242,
  [243] = 238,
  [244] = 231,
  [245] = 242,
  [246] = 246,
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
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(185);
      if (lookahead == '!') ADVANCE(214);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(207);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '@') ADVANCE(391);
      if (lookahead == '[') ADVANCE(203);
      if (lookahead == '\\') SKIP(181)
      if (lookahead == ']') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'y') ADVANCE(69);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(174);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(214);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '@') ADVANCE(391);
      if (lookahead == '[') ADVANCE(203);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'y') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'p') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 23:
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 24:
      if (lookahead == '&') ADVANCE(216);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(458);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(457);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '[') ADVANCE(203);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '@') ADVANCE(391);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(403);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(442);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(455);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(438);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(449);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(453);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(406);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(220);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 164:
      if (lookahead == 'w') ADVANCE(426);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 167:
      if (lookahead == '{') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 168:
      if (lookahead == '|') ADVANCE(217);
      END_STATE();
    case 169:
      if (lookahead == '}') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(458);
      if (lookahead == '\r') ADVANCE(459);
      END_STATE();
    case 180:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 181:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(180)
      END_STATE();
    case 182:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') SKIP(184)
      END_STATE();
    case 183:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') SKIP(184)
      if (lookahead == '\r') SKIP(182)
      END_STATE();
    case 184:
      if (eof) ADVANCE(185);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '\\') SKIP(183)
      if (lookahead == ']') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(197);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(458);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_visibility_modifier);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_visibility_modifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'x') ADVANCE(341);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(270);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(404);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(443);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(456);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(267);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(376);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(379);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(439);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(450);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(407);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(441);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(445);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(427);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(206);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(360);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(339);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(458);
      if (lookahead == '\\') ADVANCE(179);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 184},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 184},
  [45] = {.lex_state = 184},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 184},
  [66] = {.lex_state = 184},
  [67] = {.lex_state = 30},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 30},
  [70] = {.lex_state = 30},
  [71] = {.lex_state = 30},
  [72] = {.lex_state = 30},
  [73] = {.lex_state = 30},
  [74] = {.lex_state = 184},
  [75] = {.lex_state = 184},
  [76] = {.lex_state = 184},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 184},
  [79] = {.lex_state = 184},
  [80] = {.lex_state = 184},
  [81] = {.lex_state = 184},
  [82] = {.lex_state = 184},
  [83] = {.lex_state = 184},
  [84] = {.lex_state = 184},
  [85] = {.lex_state = 184},
  [86] = {.lex_state = 184},
  [87] = {.lex_state = 184},
  [88] = {.lex_state = 184},
  [89] = {.lex_state = 184},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 184},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 30},
  [103] = {.lex_state = 30},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 34},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 33},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 33},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 25},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 25},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 21},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 25},
  [202] = {.lex_state = 25},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 35},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 35},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
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
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_callback] = ACTIONS(1),
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
    [sym_source_file] = STATE(274),
    [sym__definition] = STATE(44),
    [sym_import_statement] = STATE(44),
    [sym_struct_definition] = STATE(44),
    [sym_component_definition] = STATE(44),
    [sym_user_type_identifier] = STATE(70),
    [sym__type_identifier] = STATE(70),
    [sym_builtin_type_identifier] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(44),
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
  [0] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(254), 1,
      sym_list_definition,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(171), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [90] = 21,
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
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(234), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [180] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(234), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [270] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(234), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [360] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(214), 1,
      sym_formal_parameter,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [450] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(234), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [540] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(234), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [630] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(210), 1,
      sym_formal_parameter,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [720] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(219), 1,
      sym_formal_parameter,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [810] = 21,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(234), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [900] = 20,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    STATE(234), 1,
      sym_formal_parameter,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [987] = 19,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(155), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [1071] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_BANG,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_int_number,
    ACTIONS(81), 1,
      sym_float_number,
    STATE(110), 1,
      sym_number,
    STATE(120), 1,
      sym_reference_identifier,
    STATE(206), 1,
      sym_function_identifier,
    ACTIONS(75), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(140), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(145), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(139), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(83), 14,
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
  [1155] = 19,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(161), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [1239] = 19,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(173), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [1323] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_BANG,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_int_number,
    ACTIONS(81), 1,
      sym_float_number,
    STATE(110), 1,
      sym_number,
    STATE(120), 1,
      sym_reference_identifier,
    STATE(206), 1,
      sym_function_identifier,
    ACTIONS(75), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(140), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(139), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(83), 14,
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
  [1407] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_BANG,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_int_number,
    ACTIONS(81), 1,
      sym_float_number,
    STATE(110), 1,
      sym_number,
    STATE(120), 1,
      sym_reference_identifier,
    STATE(206), 1,
      sym_function_identifier,
    ACTIONS(75), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(140), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(142), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(139), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(83), 14,
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
  [1491] = 19,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(174), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [1575] = 19,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(220), 1,
      sym_function_identifier,
    ACTIONS(35), 3,
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
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [1659] = 20,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(172), 1,
      sym_expression_body,
    STATE(220), 1,
      sym_function_identifier,
    STATE(177), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [1745] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_BANG,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_int_number,
    ACTIONS(81), 1,
      sym_float_number,
    STATE(110), 1,
      sym_number,
    STATE(120), 1,
      sym_reference_identifier,
    STATE(206), 1,
      sym_function_identifier,
    ACTIONS(75), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(140), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(141), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(139), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(83), 14,
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
  [1829] = 20,
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
    STATE(123), 1,
      sym_reference_identifier,
    STATE(146), 1,
      sym_number,
    STATE(170), 1,
      sym_expression_body,
    STATE(220), 1,
      sym_function_identifier,
    STATE(177), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(158), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(165), 8,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_string,
      sym_var_identifier,
      sym_function_call,
      sym_value,
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
  [1915] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_if,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_property,
    ACTIONS(95), 1,
      anon_sym_callback,
    ACTIONS(97), 1,
      sym_visibility_modifier,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(36), 1,
      sym_reference_identifier,
    STATE(43), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(26), 10,
      sym_component_definition,
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
  [1985] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_if,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_property,
    ACTIONS(95), 1,
      anon_sym_callback,
    ACTIONS(97), 1,
      sym_visibility_modifier,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_reference_identifier,
    STATE(43), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(28), 10,
      sym_component_definition,
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
  [2055] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      anon_sym_COLON_EQ,
    ACTIONS(110), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(116), 1,
      anon_sym_property,
    ACTIONS(119), 1,
      anon_sym_callback,
    ACTIONS(122), 1,
      sym_visibility_modifier,
    ACTIONS(125), 1,
      sym__identifier,
    STATE(36), 1,
      sym_reference_identifier,
    STATE(43), 1,
      sym_var_identifier,
    ACTIONS(128), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(26), 10,
      sym_component_definition,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_variable_set_equal,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(131), 12,
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
  [2125] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_if,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_property,
    ACTIONS(95), 1,
      anon_sym_callback,
    ACTIONS(97), 1,
      sym_visibility_modifier,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_reference_identifier,
    STATE(43), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(24), 10,
      sym_component_definition,
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
  [2195] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_if,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_property,
    ACTIONS(95), 1,
      anon_sym_callback,
    ACTIONS(97), 1,
      sym_visibility_modifier,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_reference_identifier,
    STATE(43), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(26), 10,
      sym_component_definition,
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
  [2265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(140), 23,
      anon_sym_COLON,
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
  [2305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(144), 2,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
    ACTIONS(148), 10,
      anon_sym_COLON,
      anon_sym_if,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_callback,
      sym_visibility_modifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(150), 13,
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
  [2351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(156), 23,
      anon_sym_COLON,
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
  [2388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(140), 23,
      anon_sym_COLON,
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
  [2425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(158), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
    ACTIONS(160), 23,
      anon_sym_COLON,
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
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(164), 23,
      anon_sym_COLON,
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
  [2503] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(154), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
    ACTIONS(156), 23,
      anon_sym_COLON,
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
  [2544] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(146), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
    ACTIONS(148), 23,
      anon_sym_COLON,
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
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(171), 23,
      anon_sym_COLON,
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
  [2621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(175), 23,
      anon_sym_COLON,
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
  [2657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(179), 23,
      anon_sym_COLON,
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
  [2693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(183), 23,
      anon_sym_COLON,
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
  [2729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(187), 23,
      anon_sym_COLON,
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
  [2765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_DOT,
    ACTIONS(191), 23,
      anon_sym_COLON,
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
  [2801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(197), 1,
      anon_sym_COLON,
    ACTIONS(199), 1,
      anon_sym_EQ_GT,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(193), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(201), 21,
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
  [2844] = 10,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(70), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(45), 5,
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
  [2892] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_import,
    ACTIONS(212), 1,
      anon_sym_struct,
    ACTIONS(215), 1,
      anon_sym_COLON_EQ,
    ACTIONS(218), 1,
      sym_visibility_modifier,
    ACTIONS(221), 1,
      sym__identifier,
    STATE(70), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(45), 5,
      sym__definition,
      sym_import_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(224), 12,
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
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(229), 21,
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
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(233), 21,
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
  [3002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(237), 21,
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
  [3033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(241), 21,
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
  [3064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(245), 21,
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
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(249), 21,
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
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(253), 21,
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
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(257), 21,
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
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(261), 21,
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
  [3219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(265), 21,
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
  [3250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(269), 21,
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
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(273), 21,
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
  [3312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(277), 21,
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
  [3343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(281), 21,
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
  [3374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(285), 21,
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
  [3405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(289), 21,
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
  [3436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(293), 21,
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
  [3467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(297), 21,
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
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(301), 21,
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
  [3529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
    ACTIONS(305), 16,
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
  [3558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
    ACTIONS(309), 16,
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
  [3587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_COLON_EQ,
    STATE(54), 1,
      sym_component_field_declaration_list,
    STATE(239), 3,
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
  [3622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(315), 1,
      anon_sym_LBRACK,
    STATE(246), 2,
      sym__propterty_kind,
      sym_property_type_list,
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
  [3655] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      anon_sym_COLON_EQ,
    STATE(75), 1,
      sym_component_field_declaration_list,
    STATE(229), 3,
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
  [3690] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_COLON_EQ,
    STATE(79), 1,
      sym_component_field_declaration_list,
    STATE(226), 3,
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
  [3725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(325), 13,
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
  [3752] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(327), 1,
      anon_sym_COLON_EQ,
    STATE(55), 1,
      sym_component_field_declaration_list,
    STATE(241), 3,
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
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(150), 13,
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
  [3814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(281), 16,
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
  [3840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(265), 16,
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
  [3866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(331), 16,
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
  [3892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_struct_field_declaration_list,
    STATE(237), 3,
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
  [3924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(337), 16,
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
  [3950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(261), 16,
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
  [3976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(341), 16,
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
  [4002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(345), 16,
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
  [4028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(273), 16,
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
  [4054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(277), 16,
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
  [4080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(349), 16,
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
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(293), 16,
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
  [4132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(289), 16,
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
  [4158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(297), 16,
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
  [4184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(269), 16,
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
  [4210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(353), 16,
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
  [4236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(355), 1,
      anon_sym_struct,
    ACTIONS(357), 1,
      anon_sym_COLON_EQ,
    STATE(69), 3,
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
  [4268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_struct_field_declaration_list,
    STATE(232), 3,
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
  [4300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(361), 16,
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
  [4326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(363), 1,
      anon_sym_COLON_EQ,
    STATE(72), 3,
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
  [4355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(212), 3,
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
  [4384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(238), 3,
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
  [4410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(222), 3,
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
  [4436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(236), 3,
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
  [4462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(231), 3,
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
  [4488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
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
  [4514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(244), 3,
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
  [4540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(223), 3,
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
  [4566] = 4,
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
  [4592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(225), 3,
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
  [4618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(228), 3,
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
  [4644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(243), 3,
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
  [4670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(240), 3,
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
  [4696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(265), 3,
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
  [4722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(224), 3,
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
  [4748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(146), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(148), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_px,
    ACTIONS(375), 1,
      anon_sym_PERCENT,
    STATE(144), 1,
      sym_unit_type,
    ACTIONS(369), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(371), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(189), 14,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    ACTIONS(177), 14,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SLASH,
    ACTIONS(169), 14,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(181), 14,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(185), 14,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(173), 14,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(138), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_PERCENT,
    ACTIONS(379), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
  [4990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(154), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(156), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(146), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(148), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(158), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(160), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_SLASH,
    ACTIONS(384), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(154), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(146), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(181), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(185), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(173), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(158), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(154), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(138), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(162), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(169), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(189), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(177), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_SLASH,
    ACTIONS(154), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(138), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(162), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(391), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(395), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(371), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(399), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SLASH,
    ACTIONS(401), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS,
    ACTIONS(405), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(403), 5,
      anon_sym_DASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(411), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(415), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5559] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SLASH,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_PLUS,
    ACTIONS(405), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(425), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    STATE(159), 1,
      sym_unit_type,
    ACTIONS(427), 2,
      anon_sym_px,
      anon_sym_PERCENT,
    ACTIONS(369), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(146), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(431), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(435), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(439), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(443), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(447), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SLASH,
    ACTIONS(377), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_px,
      anon_sym_PERCENT,
  [5758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SLASH,
    ACTIONS(433), 9,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SLASH,
    ACTIONS(397), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SLASH,
    ACTIONS(445), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(429), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(369), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SLASH,
    ACTIONS(413), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SLASH,
    ACTIONS(437), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SLASH,
    ACTIONS(441), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SLASH,
    ACTIONS(409), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(389), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_SLASH,
    ACTIONS(393), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5965] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      sym__identifier,
    STATE(169), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(181), 1,
      sym_reference_identifier,
    STATE(258), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 1,
      sym__identifier,
    STATE(167), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(181), 1,
      sym_reference_identifier,
    STATE(258), 1,
      sym_var_identifier,
    ACTIONS(462), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(467), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6033] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(181), 1,
      sym_reference_identifier,
    STATE(258), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(473), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [6074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(467), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(473), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [6110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    ACTIONS(467), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(467), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__identifier,
    STATE(123), 1,
      sym_reference_identifier,
    STATE(221), 1,
      sym_var_identifier,
    ACTIONS(35), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(154), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [6182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(467), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__identifier,
    STATE(181), 1,
      sym_reference_identifier,
    STATE(267), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__identifier,
    STATE(181), 1,
      sym_reference_identifier,
    STATE(203), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(158), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [6250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(146), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [6266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__identifier,
    STATE(181), 1,
      sym_reference_identifier,
    STATE(255), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__identifier,
    STATE(181), 1,
      sym_reference_identifier,
    STATE(264), 1,
      sym_var_identifier,
    ACTIONS(101), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(496), 1,
      sym__identifier,
    STATE(31), 1,
      sym_post_identifier,
    STATE(32), 1,
      sym_function_call,
    STATE(220), 1,
      sym_function_identifier,
  [6334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(496), 1,
      sym__identifier,
    STATE(31), 1,
      sym_post_identifier,
    STATE(32), 1,
      sym_function_call,
    STATE(208), 1,
      sym_function_identifier,
  [6353] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(498), 1,
      sym__identifier,
    STATE(128), 1,
      sym_post_identifier,
    STATE(129), 1,
      sym_function_call,
    STATE(206), 1,
      sym_function_identifier,
  [6372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(500), 1,
      sym__identifier,
    STATE(135), 1,
      sym_post_identifier,
    STATE(136), 1,
      sym_function_call,
    STATE(220), 1,
      sym_function_identifier,
  [6391] = 4,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(504), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [6405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(508), 1,
      sym__identifier,
    STATE(220), 1,
      sym_function_identifier,
    STATE(271), 1,
      sym_function_call,
  [6421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym_list_definition_repeat1,
    STATE(218), 1,
      sym_struct_field_declaration_list,
  [6437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym_list_definition_repeat1,
    STATE(218), 1,
      sym_struct_field_declaration_list,
  [6453] = 4,
    ACTIONS(502), 1,
      anon_sym_SQUOTE,
    ACTIONS(506), 1,
      sym_comment,
    STATE(202), 1,
      aux_sym_string_repeat2,
    ACTIONS(517), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [6467] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      aux_sym_string_repeat1,
    ACTIONS(521), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [6481] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      aux_sym_string_repeat2,
    ACTIONS(523), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [6495] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      aux_sym_string_repeat1,
    ACTIONS(527), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [6509] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    STATE(201), 1,
      aux_sym_string_repeat2,
    ACTIONS(529), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [6523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_list_definition_repeat1,
    STATE(218), 1,
      sym_struct_field_declaration_list,
  [6539] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      aux_sym_string_repeat1,
    ACTIONS(527), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [6553] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      aux_sym_string_repeat1,
    ACTIONS(537), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [6567] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    STATE(201), 1,
      aux_sym_string_repeat2,
    ACTIONS(542), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [6581] = 4,
    ACTIONS(506), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
    STATE(201), 1,
      aux_sym_string_repeat2,
    ACTIONS(529), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [6595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    STATE(259), 1,
      sym_property_expr,
    ACTIONS(547), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [6609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      aux_sym_import_statement_repeat1,
  [6622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_formal_parameters_repeat1,
  [6635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_formal_parameters,
    STATE(125), 1,
      sym_call_signature,
  [6648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_formal_parameters_repeat1,
  [6661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_formal_parameters,
    STATE(41), 1,
      sym_call_signature,
  [6674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      aux_sym_import_statement_repeat1,
  [6687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_formal_parameters_repeat1,
  [6700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_formal_parameters_repeat1,
  [6713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_import_statement_repeat1,
  [6726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym_string,
  [6739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_formal_parameters_repeat1,
  [6752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      sym_string,
  [6765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(273), 1,
      sym_string,
  [6778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_formal_parameters_repeat1,
  [6791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(583), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_formal_parameters_repeat1,
  [6815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_formal_parameters,
    STATE(115), 1,
      sym_call_signature,
  [6828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_in,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(251), 1,
      sym_for_loop_index,
  [6841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_component_field_declaration_list,
  [6851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_component_field_declaration_list,
  [6861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_component_field_declaration_list,
  [6879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_component_field_declaration_list,
  [6889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_component_field_declaration_list,
  [6899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_component_field_declaration_list,
  [6909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_component_field_declaration_list,
  [6919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_component_field_declaration_list,
  [6929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_component_field_declaration_list,
  [6939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_struct_field_declaration_list,
  [6949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_expression_body_paren,
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_component_field_declaration_list,
  [6985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_struct_field_declaration_list,
  [6995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_component_field_declaration_list,
  [7005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_component_field_declaration_list,
  [7015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_component_field_declaration_list,
  [7025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_component_field_declaration_list,
  [7035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_color_token1,
    ACTIONS(599), 1,
      aux_sym_color_token2,
  [7045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_component_field_declaration_list,
  [7055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_component_field_declaration_list,
  [7065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_color_token1,
    ACTIONS(603), 1,
      aux_sym_color_token2,
  [7075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_GT,
  [7082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_GT,
  [7089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
  [7096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [7103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LT,
  [7110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_in,
  [7117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_from,
  [7124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [7131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
  [7138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACK,
  [7145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_SEMI,
  [7152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
  [7159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COLON,
  [7166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SEMI,
  [7173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_from,
  [7180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
  [7187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
  [7194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym__identifier,
  [7201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COLON,
  [7208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COLON_EQ,
  [7215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_GT,
  [7222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COLON,
  [7229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_in,
  [7236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_from,
  [7243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_SEMI,
  [7250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_SEMI,
  [7257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COLON_EQ,
  [7264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
  [7271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 630,
  [SMALL_STATE(10)] = 720,
  [SMALL_STATE(11)] = 810,
  [SMALL_STATE(12)] = 900,
  [SMALL_STATE(13)] = 987,
  [SMALL_STATE(14)] = 1071,
  [SMALL_STATE(15)] = 1155,
  [SMALL_STATE(16)] = 1239,
  [SMALL_STATE(17)] = 1323,
  [SMALL_STATE(18)] = 1407,
  [SMALL_STATE(19)] = 1491,
  [SMALL_STATE(20)] = 1575,
  [SMALL_STATE(21)] = 1659,
  [SMALL_STATE(22)] = 1745,
  [SMALL_STATE(23)] = 1829,
  [SMALL_STATE(24)] = 1915,
  [SMALL_STATE(25)] = 1985,
  [SMALL_STATE(26)] = 2055,
  [SMALL_STATE(27)] = 2125,
  [SMALL_STATE(28)] = 2195,
  [SMALL_STATE(29)] = 2265,
  [SMALL_STATE(30)] = 2305,
  [SMALL_STATE(31)] = 2351,
  [SMALL_STATE(32)] = 2388,
  [SMALL_STATE(33)] = 2425,
  [SMALL_STATE(34)] = 2466,
  [SMALL_STATE(35)] = 2503,
  [SMALL_STATE(36)] = 2544,
  [SMALL_STATE(37)] = 2585,
  [SMALL_STATE(38)] = 2621,
  [SMALL_STATE(39)] = 2657,
  [SMALL_STATE(40)] = 2693,
  [SMALL_STATE(41)] = 2729,
  [SMALL_STATE(42)] = 2765,
  [SMALL_STATE(43)] = 2801,
  [SMALL_STATE(44)] = 2844,
  [SMALL_STATE(45)] = 2892,
  [SMALL_STATE(46)] = 2940,
  [SMALL_STATE(47)] = 2971,
  [SMALL_STATE(48)] = 3002,
  [SMALL_STATE(49)] = 3033,
  [SMALL_STATE(50)] = 3064,
  [SMALL_STATE(51)] = 3095,
  [SMALL_STATE(52)] = 3126,
  [SMALL_STATE(53)] = 3157,
  [SMALL_STATE(54)] = 3188,
  [SMALL_STATE(55)] = 3219,
  [SMALL_STATE(56)] = 3250,
  [SMALL_STATE(57)] = 3281,
  [SMALL_STATE(58)] = 3312,
  [SMALL_STATE(59)] = 3343,
  [SMALL_STATE(60)] = 3374,
  [SMALL_STATE(61)] = 3405,
  [SMALL_STATE(62)] = 3436,
  [SMALL_STATE(63)] = 3467,
  [SMALL_STATE(64)] = 3498,
  [SMALL_STATE(65)] = 3529,
  [SMALL_STATE(66)] = 3558,
  [SMALL_STATE(67)] = 3587,
  [SMALL_STATE(68)] = 3622,
  [SMALL_STATE(69)] = 3655,
  [SMALL_STATE(70)] = 3690,
  [SMALL_STATE(71)] = 3725,
  [SMALL_STATE(72)] = 3752,
  [SMALL_STATE(73)] = 3787,
  [SMALL_STATE(74)] = 3814,
  [SMALL_STATE(75)] = 3840,
  [SMALL_STATE(76)] = 3866,
  [SMALL_STATE(77)] = 3892,
  [SMALL_STATE(78)] = 3924,
  [SMALL_STATE(79)] = 3950,
  [SMALL_STATE(80)] = 3976,
  [SMALL_STATE(81)] = 4002,
  [SMALL_STATE(82)] = 4028,
  [SMALL_STATE(83)] = 4054,
  [SMALL_STATE(84)] = 4080,
  [SMALL_STATE(85)] = 4106,
  [SMALL_STATE(86)] = 4132,
  [SMALL_STATE(87)] = 4158,
  [SMALL_STATE(88)] = 4184,
  [SMALL_STATE(89)] = 4210,
  [SMALL_STATE(90)] = 4236,
  [SMALL_STATE(91)] = 4268,
  [SMALL_STATE(92)] = 4300,
  [SMALL_STATE(93)] = 4326,
  [SMALL_STATE(94)] = 4355,
  [SMALL_STATE(95)] = 4384,
  [SMALL_STATE(96)] = 4410,
  [SMALL_STATE(97)] = 4436,
  [SMALL_STATE(98)] = 4462,
  [SMALL_STATE(99)] = 4488,
  [SMALL_STATE(100)] = 4514,
  [SMALL_STATE(101)] = 4540,
  [SMALL_STATE(102)] = 4566,
  [SMALL_STATE(103)] = 4592,
  [SMALL_STATE(104)] = 4618,
  [SMALL_STATE(105)] = 4644,
  [SMALL_STATE(106)] = 4670,
  [SMALL_STATE(107)] = 4696,
  [SMALL_STATE(108)] = 4722,
  [SMALL_STATE(109)] = 4748,
  [SMALL_STATE(110)] = 4777,
  [SMALL_STATE(111)] = 4806,
  [SMALL_STATE(112)] = 4829,
  [SMALL_STATE(113)] = 4852,
  [SMALL_STATE(114)] = 4875,
  [SMALL_STATE(115)] = 4898,
  [SMALL_STATE(116)] = 4921,
  [SMALL_STATE(117)] = 4944,
  [SMALL_STATE(118)] = 4968,
  [SMALL_STATE(119)] = 4990,
  [SMALL_STATE(120)] = 5016,
  [SMALL_STATE(121)] = 5042,
  [SMALL_STATE(122)] = 5068,
  [SMALL_STATE(123)] = 5093,
  [SMALL_STATE(124)] = 5118,
  [SMALL_STATE(125)] = 5139,
  [SMALL_STATE(126)] = 5160,
  [SMALL_STATE(127)] = 5181,
  [SMALL_STATE(128)] = 5206,
  [SMALL_STATE(129)] = 5227,
  [SMALL_STATE(130)] = 5248,
  [SMALL_STATE(131)] = 5269,
  [SMALL_STATE(132)] = 5290,
  [SMALL_STATE(133)] = 5311,
  [SMALL_STATE(134)] = 5332,
  [SMALL_STATE(135)] = 5355,
  [SMALL_STATE(136)] = 5375,
  [SMALL_STATE(137)] = 5395,
  [SMALL_STATE(138)] = 5415,
  [SMALL_STATE(139)] = 5435,
  [SMALL_STATE(140)] = 5455,
  [SMALL_STATE(141)] = 5475,
  [SMALL_STATE(142)] = 5495,
  [SMALL_STATE(143)] = 5519,
  [SMALL_STATE(144)] = 5539,
  [SMALL_STATE(145)] = 5559,
  [SMALL_STATE(146)] = 5589,
  [SMALL_STATE(147)] = 5613,
  [SMALL_STATE(148)] = 5639,
  [SMALL_STATE(149)] = 5659,
  [SMALL_STATE(150)] = 5679,
  [SMALL_STATE(151)] = 5699,
  [SMALL_STATE(152)] = 5719,
  [SMALL_STATE(153)] = 5739,
  [SMALL_STATE(154)] = 5758,
  [SMALL_STATE(155)] = 5776,
  [SMALL_STATE(156)] = 5793,
  [SMALL_STATE(157)] = 5810,
  [SMALL_STATE(158)] = 5827,
  [SMALL_STATE(159)] = 5844,
  [SMALL_STATE(160)] = 5861,
  [SMALL_STATE(161)] = 5878,
  [SMALL_STATE(162)] = 5895,
  [SMALL_STATE(163)] = 5914,
  [SMALL_STATE(164)] = 5931,
  [SMALL_STATE(165)] = 5948,
  [SMALL_STATE(166)] = 5965,
  [SMALL_STATE(167)] = 5989,
  [SMALL_STATE(168)] = 6013,
  [SMALL_STATE(169)] = 6033,
  [SMALL_STATE(170)] = 6057,
  [SMALL_STATE(171)] = 6074,
  [SMALL_STATE(172)] = 6093,
  [SMALL_STATE(173)] = 6110,
  [SMALL_STATE(174)] = 6129,
  [SMALL_STATE(175)] = 6148,
  [SMALL_STATE(176)] = 6166,
  [SMALL_STATE(177)] = 6182,
  [SMALL_STATE(178)] = 6198,
  [SMALL_STATE(179)] = 6216,
  [SMALL_STATE(180)] = 6234,
  [SMALL_STATE(181)] = 6250,
  [SMALL_STATE(182)] = 6266,
  [SMALL_STATE(183)] = 6284,
  [SMALL_STATE(184)] = 6302,
  [SMALL_STATE(185)] = 6315,
  [SMALL_STATE(186)] = 6334,
  [SMALL_STATE(187)] = 6353,
  [SMALL_STATE(188)] = 6372,
  [SMALL_STATE(189)] = 6391,
  [SMALL_STATE(190)] = 6405,
  [SMALL_STATE(191)] = 6421,
  [SMALL_STATE(192)] = 6437,
  [SMALL_STATE(193)] = 6453,
  [SMALL_STATE(194)] = 6467,
  [SMALL_STATE(195)] = 6481,
  [SMALL_STATE(196)] = 6495,
  [SMALL_STATE(197)] = 6509,
  [SMALL_STATE(198)] = 6523,
  [SMALL_STATE(199)] = 6539,
  [SMALL_STATE(200)] = 6553,
  [SMALL_STATE(201)] = 6567,
  [SMALL_STATE(202)] = 6581,
  [SMALL_STATE(203)] = 6595,
  [SMALL_STATE(204)] = 6609,
  [SMALL_STATE(205)] = 6622,
  [SMALL_STATE(206)] = 6635,
  [SMALL_STATE(207)] = 6648,
  [SMALL_STATE(208)] = 6661,
  [SMALL_STATE(209)] = 6674,
  [SMALL_STATE(210)] = 6687,
  [SMALL_STATE(211)] = 6700,
  [SMALL_STATE(212)] = 6713,
  [SMALL_STATE(213)] = 6726,
  [SMALL_STATE(214)] = 6739,
  [SMALL_STATE(215)] = 6752,
  [SMALL_STATE(216)] = 6765,
  [SMALL_STATE(217)] = 6778,
  [SMALL_STATE(218)] = 6791,
  [SMALL_STATE(219)] = 6802,
  [SMALL_STATE(220)] = 6815,
  [SMALL_STATE(221)] = 6828,
  [SMALL_STATE(222)] = 6841,
  [SMALL_STATE(223)] = 6851,
  [SMALL_STATE(224)] = 6861,
  [SMALL_STATE(225)] = 6869,
  [SMALL_STATE(226)] = 6879,
  [SMALL_STATE(227)] = 6889,
  [SMALL_STATE(228)] = 6899,
  [SMALL_STATE(229)] = 6909,
  [SMALL_STATE(230)] = 6919,
  [SMALL_STATE(231)] = 6929,
  [SMALL_STATE(232)] = 6939,
  [SMALL_STATE(233)] = 6949,
  [SMALL_STATE(234)] = 6959,
  [SMALL_STATE(235)] = 6967,
  [SMALL_STATE(236)] = 6975,
  [SMALL_STATE(237)] = 6985,
  [SMALL_STATE(238)] = 6995,
  [SMALL_STATE(239)] = 7005,
  [SMALL_STATE(240)] = 7015,
  [SMALL_STATE(241)] = 7025,
  [SMALL_STATE(242)] = 7035,
  [SMALL_STATE(243)] = 7045,
  [SMALL_STATE(244)] = 7055,
  [SMALL_STATE(245)] = 7065,
  [SMALL_STATE(246)] = 7075,
  [SMALL_STATE(247)] = 7082,
  [SMALL_STATE(248)] = 7089,
  [SMALL_STATE(249)] = 7096,
  [SMALL_STATE(250)] = 7103,
  [SMALL_STATE(251)] = 7110,
  [SMALL_STATE(252)] = 7117,
  [SMALL_STATE(253)] = 7124,
  [SMALL_STATE(254)] = 7131,
  [SMALL_STATE(255)] = 7138,
  [SMALL_STATE(256)] = 7145,
  [SMALL_STATE(257)] = 7152,
  [SMALL_STATE(258)] = 7159,
  [SMALL_STATE(259)] = 7166,
  [SMALL_STATE(260)] = 7173,
  [SMALL_STATE(261)] = 7180,
  [SMALL_STATE(262)] = 7187,
  [SMALL_STATE(263)] = 7194,
  [SMALL_STATE(264)] = 7201,
  [SMALL_STATE(265)] = 7208,
  [SMALL_STATE(266)] = 7215,
  [SMALL_STATE(267)] = 7222,
  [SMALL_STATE(268)] = 7229,
  [SMALL_STATE(269)] = 7236,
  [SMALL_STATE(270)] = 7243,
  [SMALL_STATE(271)] = 7250,
  [SMALL_STATE(272)] = 7257,
  [SMALL_STATE(273)] = 7264,
  [SMALL_STATE(274)] = 7271,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(97),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(233),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(175),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(250),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(190),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(93),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(30),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(71),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type_identifier, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(186),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 12),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 11),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 11),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 8),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 7),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 7),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 13),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 13),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(187),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(188),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(181),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(34),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(185),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2), SHIFT_REPEAT(166),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(200),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(201),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(108),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 10),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 18),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_index, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [657] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
