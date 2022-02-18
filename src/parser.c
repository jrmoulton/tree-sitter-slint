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
#define STATE_COUNT 233
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 19

enum {
  anon_sym_struct = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_RBRACE = 6,
  anon_sym_EQ_GT = 7,
  anon_sym_SEMI = 8,
  anon_sym_if = 9,
  anon_sym_for = 10,
  anon_sym_in = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_property = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_EQ = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_DASH = 20,
  anon_sym_BANG = 21,
  anon_sym_STAR = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_SLASH = 25,
  anon_sym_PLUS = 26,
  anon_sym_callback = 27,
  sym_string_literal = 28,
  sym_visibility_modifier = 29,
  sym__identifier = 30,
  anon_sym_DOT = 31,
  anon_sym_AT = 32,
  anon_sym_parent = 33,
  anon_sym_root = 34,
  anon_sym_this = 35,
  sym_number = 36,
  anon_sym_px = 37,
  anon_sym_black = 38,
  anon_sym_blue = 39,
  anon_sym_ease = 40,
  anon_sym_ease_in = 41,
  anon_sym_ease_in_out = 42,
  anon_sym_ease_out = 43,
  anon_sym_end = 44,
  anon_sym_green = 45,
  anon_sym_red = 46,
  anon_sym_start = 47,
  anon_sym_yellow = 48,
  anon_sym_true = 49,
  anon_sym_false = 50,
  anon_sym_angle = 51,
  anon_sym_bool = 52,
  anon_sym_brush = 53,
  anon_sym_color = 54,
  anon_sym_duration = 55,
  anon_sym_easing = 56,
  anon_sym_float = 57,
  anon_sym_image = 58,
  anon_sym_int = 59,
  anon_sym_length = 60,
  anon_sym_percent = 61,
  anon_sym_physical_DASHlength = 62,
  anon_sym_string = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym__definition = 66,
  sym_struct_definition = 67,
  sym_struct_field_declaration_list = 68,
  sym_component_definition = 69,
  sym_component_field_declaration_list = 70,
  sym_callback_event = 71,
  sym_callback_call = 72,
  sym_if_statement_definition = 73,
  sym_for_loop_definition = 74,
  sym_for_loop_index = 75,
  sym_property_definition = 76,
  sym_property_expr = 77,
  sym__propterty_kind = 78,
  sym_property_type_list = 79,
  sym_list_definition = 80,
  sym_variable_definition = 81,
  sym__expression = 82,
  sym_expression_body_paren = 83,
  sym_expression_body = 84,
  sym_unary_expression = 85,
  sym__binary_expression = 86,
  sym_mult_binary_expression = 87,
  sym_add_binary_expression = 88,
  sym_callback_definition = 89,
  sym_call_signature = 90,
  sym_formal_parameters = 91,
  sym_formal_parameter = 92,
  sym_post_identifier = 93,
  sym_user_type_identifier = 94,
  sym__type_identifier = 95,
  sym_var_identifier = 96,
  sym_function_identifier = 97,
  sym_function_call = 98,
  sym_reference_identifier = 99,
  sym_value = 100,
  sym_value_with_units = 101,
  sym_unit_type = 102,
  sym_language_constant = 103,
  sym_builtin_type_identifier = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_struct_field_declaration_list_repeat1 = 106,
  aux_sym_component_field_declaration_list_repeat1 = 107,
  aux_sym_list_definition_repeat1 = 108,
  aux_sym_formal_parameters_repeat1 = 109,
  aux_sym_var_identifier_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_struct] = "struct",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_SEMI] = ";",
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
  [sym_string_literal] = "string_literal",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym__identifier] = "_identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_parent] = "parent",
  [anon_sym_root] = "root",
  [anon_sym_this] = "this",
  [sym_number] = "number",
  [anon_sym_px] = "px",
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
  [anon_sym_angle] = "angle",
  [anon_sym_bool] = "bool",
  [anon_sym_brush] = "brush",
  [anon_sym_color] = "color",
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
  [sym_post_identifier] = "post_identifier",
  [sym_user_type_identifier] = "user_type_identifier",
  [sym__type_identifier] = "_type_identifier",
  [sym_var_identifier] = "var_identifier",
  [sym_function_identifier] = "function_identifier",
  [sym_function_call] = "function_call",
  [sym_reference_identifier] = "reference_identifier",
  [sym_value] = "value",
  [sym_value_with_units] = "value_with_units",
  [sym_unit_type] = "unit_type",
  [sym_language_constant] = "language_constant",
  [sym_builtin_type_identifier] = "builtin_type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_field_declaration_list_repeat1] = "struct_field_declaration_list_repeat1",
  [aux_sym_component_field_declaration_list_repeat1] = "component_field_declaration_list_repeat1",
  [aux_sym_list_definition_repeat1] = "list_definition_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_var_identifier_repeat1] = "var_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_string_literal] = sym_string_literal,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym__identifier] = sym__identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_parent] = anon_sym_parent,
  [anon_sym_root] = anon_sym_root,
  [anon_sym_this] = anon_sym_this,
  [sym_number] = sym_number,
  [anon_sym_px] = anon_sym_px,
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
  [anon_sym_angle] = anon_sym_angle,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_brush] = anon_sym_brush,
  [anon_sym_color] = anon_sym_color,
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
  [sym_post_identifier] = sym_post_identifier,
  [sym_user_type_identifier] = sym_user_type_identifier,
  [sym__type_identifier] = sym__type_identifier,
  [sym_var_identifier] = sym_var_identifier,
  [sym_function_identifier] = sym_function_identifier,
  [sym_function_call] = sym_function_call,
  [sym_reference_identifier] = sym_reference_identifier,
  [sym_value] = sym_value,
  [sym_value_with_units] = sym_value_with_units,
  [sym_unit_type] = sym_unit_type,
  [sym_language_constant] = sym_language_constant,
  [sym_builtin_type_identifier] = sym_builtin_type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_field_declaration_list_repeat1] = aux_sym_struct_field_declaration_list_repeat1,
  [aux_sym_component_field_declaration_list_repeat1] = aux_sym_component_field_declaration_list_repeat1,
  [aux_sym_list_definition_repeat1] = aux_sym_list_definition_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
  [aux_sym_var_identifier_repeat1] = aux_sym_var_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_string_literal] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_px] = {
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
  [anon_sym_color] = {
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
  [sym_value_with_units] = {
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
  field_super_type = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_function] = "function",
  [field_name] = "name",
  [field_parameters] = "parameters",
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
  [18] = {.index = 34, .length = 2},
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
    {field_type, 1},
  [34] =
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
  [5] = 5,
  [6] = 4,
  [7] = 2,
  [8] = 5,
  [9] = 4,
  [10] = 2,
  [11] = 5,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 19,
  [27] = 25,
  [28] = 28,
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
  [68] = 66,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 45,
  [75] = 75,
  [76] = 62,
  [77] = 46,
  [78] = 59,
  [79] = 79,
  [80] = 57,
  [81] = 52,
  [82] = 82,
  [83] = 53,
  [84] = 84,
  [85] = 85,
  [86] = 48,
  [87] = 51,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 90,
  [100] = 100,
  [101] = 94,
  [102] = 102,
  [103] = 38,
  [104] = 37,
  [105] = 40,
  [106] = 39,
  [107] = 41,
  [108] = 36,
  [109] = 32,
  [110] = 28,
  [111] = 34,
  [112] = 112,
  [113] = 33,
  [114] = 33,
  [115] = 37,
  [116] = 30,
  [117] = 31,
  [118] = 32,
  [119] = 38,
  [120] = 35,
  [121] = 36,
  [122] = 39,
  [123] = 40,
  [124] = 28,
  [125] = 41,
  [126] = 34,
  [127] = 127,
  [128] = 128,
  [129] = 35,
  [130] = 102,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 31,
  [138] = 30,
  [139] = 139,
  [140] = 140,
  [141] = 112,
  [142] = 134,
  [143] = 139,
  [144] = 136,
  [145] = 127,
  [146] = 132,
  [147] = 135,
  [148] = 128,
  [149] = 140,
  [150] = 133,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 155,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 32,
  [164] = 33,
  [165] = 165,
  [166] = 34,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 168,
  [171] = 168,
  [172] = 168,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 178,
  [180] = 178,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 181,
  [185] = 185,
  [186] = 181,
  [187] = 187,
  [188] = 183,
  [189] = 183,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 193,
  [200] = 200,
  [201] = 201,
  [202] = 194,
  [203] = 195,
  [204] = 196,
  [205] = 197,
  [206] = 206,
  [207] = 201,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(190);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') SKIP(155)
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(62);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'b') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(190);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 20:
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(190);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 21:
      if (lookahead == '&') ADVANCE(187);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(401);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(400);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(347);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(385);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(392);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(396);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(349);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 149:
      if (lookahead == 'w') ADVANCE(369);
      END_STATE();
    case 150:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 151:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 152:
      if (lookahead == '|') ADVANCE(188);
      END_STATE();
    case 153:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(401);
      if (lookahead == '\r') ADVANCE(402);
      END_STATE();
    case 154:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 155:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(154)
      END_STATE();
    case 156:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') SKIP(158)
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      if (lookahead == '\n') SKIP(158)
      if (lookahead == '\r') SKIP(156)
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '\\') SKIP(157)
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(401);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_visibility_modifier);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_visibility_modifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'x') ADVANCE(294);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'x') ADVANCE(348);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(386);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(263);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(323);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(380);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(397);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(384);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(299);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(320);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(370);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(177);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(309);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(153);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 158},
  [44] = {.lex_state = 158},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 158},
  [64] = {.lex_state = 158},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 158},
  [74] = {.lex_state = 158},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 158},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 158},
  [82] = {.lex_state = 158},
  [83] = {.lex_state = 158},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 158},
  [87] = {.lex_state = 158},
  [88] = {.lex_state = 158},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 30},
  [153] = {.lex_state = 30},
  [154] = {.lex_state = 30},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 30},
  [162] = {.lex_state = 30},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 30},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 30},
  [168] = {.lex_state = 29},
  [169] = {.lex_state = 30},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 29},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
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
  [225] = {.lex_state = 29},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_string_literal] = ACTIONS(1),
    [sym_visibility_modifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_root] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_px] = ACTIONS(1),
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
    [anon_sym_angle] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_brush] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
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
    [sym_source_file] = STATE(215),
    [sym__definition] = STATE(43),
    [sym_struct_definition] = STATE(43),
    [sym_component_definition] = STATE(43),
    [sym_user_type_identifier] = STATE(69),
    [sym__type_identifier] = STATE(69),
    [sym_builtin_type_identifier] = STATE(69),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_COLON_EQ] = ACTIONS(9),
    [sym_visibility_modifier] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [anon_sym_angle] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(15),
    [anon_sym_brush] = ACTIONS(15),
    [anon_sym_color] = ACTIONS(15),
    [anon_sym_duration] = ACTIONS(15),
    [anon_sym_easing] = ACTIONS(15),
    [anon_sym_float] = ACTIONS(15),
    [anon_sym_image] = ACTIONS(15),
    [anon_sym_int] = ACTIONS(15),
    [anon_sym_length] = ACTIONS(15),
    [anon_sym_percent] = ACTIONS(15),
    [anon_sym_physical_DASHlength] = ACTIONS(15),
    [anon_sym_string] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(198), 1,
      sym_formal_parameter,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [75] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(222), 1,
      sym_list_definition,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(156), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [150] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(198), 1,
      sym_formal_parameter,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [225] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(180), 1,
      sym_formal_parameter,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [300] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(198), 1,
      sym_formal_parameter,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [375] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(198), 1,
      sym_formal_parameter,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [450] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(178), 1,
      sym_formal_parameter,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [525] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(198), 1,
      sym_formal_parameter,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [600] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(198), 1,
      sym_formal_parameter,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [675] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(179), 1,
      sym_formal_parameter,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [750] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_EQ,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_property,
    ACTIONS(65), 1,
      anon_sym_callback,
    ACTIONS(67), 1,
      sym_visibility_modifier,
    ACTIONS(69), 1,
      sym__identifier,
    STATE(33), 1,
      sym_reference_identifier,
    STATE(42), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(15), 9,
      sym_component_definition,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [820] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(198), 1,
      sym_formal_parameter,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(151), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [892] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_EQ,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_property,
    ACTIONS(65), 1,
      anon_sym_callback,
    ACTIONS(67), 1,
      sym_visibility_modifier,
    ACTIONS(69), 1,
      sym__identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_reference_identifier,
    STATE(42), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(17), 9,
      sym_component_definition,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [962] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON_EQ,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(83), 1,
      anon_sym_for,
    ACTIONS(86), 1,
      anon_sym_property,
    ACTIONS(89), 1,
      anon_sym_callback,
    ACTIONS(92), 1,
      sym_visibility_modifier,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(33), 1,
      sym_reference_identifier,
    STATE(42), 1,
      sym_var_identifier,
    ACTIONS(98), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(15), 9,
      sym_component_definition,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(101), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [1032] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_EQ,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_property,
    ACTIONS(65), 1,
      anon_sym_callback,
    ACTIONS(67), 1,
      sym_visibility_modifier,
    ACTIONS(69), 1,
      sym__identifier,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_reference_identifier,
    STATE(42), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(12), 9,
      sym_component_definition,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [1102] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_EQ,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_property,
    ACTIONS(65), 1,
      anon_sym_callback,
    ACTIONS(67), 1,
      sym_visibility_modifier,
    ACTIONS(69), 1,
      sym__identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_reference_identifier,
    STATE(42), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(67), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(15), 9,
      sym_component_definition,
      sym_callback_event,
      sym_callback_call,
      sym_if_statement_definition,
      sym_for_loop_definition,
      sym_property_definition,
      sym_variable_definition,
      sym_callback_definition,
      aux_sym_component_field_declaration_list_repeat1,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [1172] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_BANG,
    ACTIONS(114), 1,
      sym_string_literal,
    ACTIONS(116), 1,
      sym__identifier,
    ACTIONS(120), 1,
      sym_number,
    STATE(113), 1,
      sym_reference_identifier,
    STATE(184), 1,
      sym_function_identifier,
    STATE(139), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(118), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(131), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(128), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(122), 13,
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
  [1241] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(144), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [1310] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_BANG,
    ACTIONS(114), 1,
      sym_string_literal,
    ACTIONS(116), 1,
      sym__identifier,
    ACTIONS(120), 1,
      sym_number,
    STATE(113), 1,
      sym_reference_identifier,
    STATE(184), 1,
      sym_function_identifier,
    STATE(139), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(118), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(132), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(128), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(122), 13,
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
  [1379] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(157), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [1448] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(146), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [1517] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_BANG,
    ACTIONS(114), 1,
      sym_string_literal,
    ACTIONS(116), 1,
      sym__identifier,
    ACTIONS(120), 1,
      sym_number,
    STATE(113), 1,
      sym_reference_identifier,
    STATE(184), 1,
      sym_function_identifier,
    STATE(139), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(118), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(133), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(128), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(122), 13,
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
  [1586] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(150), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [1655] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(155), 1,
      sym_expression_body,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    STATE(160), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [1726] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_BANG,
    ACTIONS(114), 1,
      sym_string_literal,
    ACTIONS(116), 1,
      sym__identifier,
    ACTIONS(120), 1,
      sym_number,
    STATE(113), 1,
      sym_reference_identifier,
    STATE(184), 1,
      sym_function_identifier,
    STATE(139), 2,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(118), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(136), 3,
      sym__expression,
      sym_expression_body_paren,
      sym_expression_body,
    STATE(128), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(122), 13,
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
  [1795] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      sym_string_literal,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_number,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(158), 1,
      sym_expression_body,
    STATE(186), 1,
      sym_function_identifier,
    STATE(143), 2,
      sym_value_with_units,
      sym_language_constant,
    STATE(160), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(148), 7,
      sym_unary_expression,
      sym__binary_expression,
      sym_mult_binary_expression,
      sym_add_binary_expression,
      sym_var_identifier,
      sym_function_call,
      sym_value,
    ACTIONS(35), 13,
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
  [1866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 6,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(126), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [1907] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(130), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
    ACTIONS(132), 10,
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
    ACTIONS(136), 14,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [1954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(142), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 6,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(126), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(140), 4,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
    ACTIONS(142), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(134), 4,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
    ACTIONS(132), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(147), 4,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
    ACTIONS(149), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(153), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(157), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(161), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(165), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(169), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(173), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(177), 24,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_EQ_GT,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(179), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(181), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(187), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2458] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(9), 1,
      anon_sym_COLON_EQ,
    ACTIONS(11), 1,
      sym_visibility_modifier,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(69), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(44), 4,
      sym__definition,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2503] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      anon_sym_struct,
    ACTIONS(196), 1,
      anon_sym_COLON_EQ,
    ACTIONS(199), 1,
      sym_visibility_modifier,
    ACTIONS(202), 1,
      sym__identifier,
    STATE(69), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(44), 4,
      sym__definition,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(205), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(210), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(214), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(218), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(222), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(226), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(230), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(234), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(238), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(242), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(246), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(250), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(254), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(258), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(262), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(266), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(270), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(274), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(278), 22,
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
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(282), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(286), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
    STATE(221), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(214), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(290), 1,
      anon_sym_COLON_EQ,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_component_field_declaration_list,
    STATE(196), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3252] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(294), 1,
      anon_sym_COLON_EQ,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_component_field_declaration_list,
    STATE(202), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3288] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      anon_sym_COLON_EQ,
    STATE(59), 1,
      sym_component_field_declaration_list,
    STATE(204), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_COLON_EQ,
    STATE(80), 1,
      sym_component_field_declaration_list,
    STATE(194), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_struct_field_declaration_list,
    STATE(206), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_struct_field_declaration_list,
    STATE(192), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(304), 1,
      anon_sym_struct,
    ACTIONS(306), 1,
      anon_sym_COLON_EQ,
    STATE(66), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(310), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(210), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(312), 1,
      anon_sym_COLON_EQ,
    STATE(68), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(278), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(214), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(266), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(316), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(258), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(238), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(320), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(242), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(324), 14,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(136), 14,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(222), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(234), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(328), 16,
      anon_sym_struct,
      sym_visibility_modifier,
      sym__identifier,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(227), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(203), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(228), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(205), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [3987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(197), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(193), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(207), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(201), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(210), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(208), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(195), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(232), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__identifier,
    STATE(199), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(15), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_color,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_string,
  [4230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(132), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(134), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [4259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(163), 14,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(159), 14,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(171), 14,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    ACTIONS(167), 14,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(175), 14,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(155), 14,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(140), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(142), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(124), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(147), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(149), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_px,
    STATE(135), 1,
      sym_unit_type,
    ACTIONS(335), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(337), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(132), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(134), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [4525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(126), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(134), 10,
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
  [4550] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(140), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(124), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_DOT,
    STATE(118), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(140), 10,
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
  [4638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(163), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(151), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(155), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(167), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4722] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      anon_sym_PLUS,
      anon_sym_DOT,
  [4743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 11,
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
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(175), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(118), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(147), 10,
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
  [4812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(348), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(352), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(151), 11,
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
  [4872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(126), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(134), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [4898] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PLUS,
    ACTIONS(360), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(366), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(370), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(360), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(372), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS,
    ACTIONS(374), 5,
      anon_sym_DASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(378), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(382), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(386), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(124), 11,
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
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    ACTIONS(140), 11,
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
  [5072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(337), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
    ACTIONS(390), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(392), 1,
      anon_sym_px,
    STATE(147), 1,
      sym_unit_type,
    ACTIONS(335), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SLASH,
    ACTIONS(376), 9,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(335), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SLASH,
    ACTIONS(384), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(346), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SLASH,
    ACTIONS(368), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SLASH,
    ACTIONS(380), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SLASH,
    ACTIONS(350), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(388), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(372), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5311] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      sym__identifier,
    STATE(154), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(164), 1,
      sym_reference_identifier,
    STATE(230), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__identifier,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(164), 1,
      sym_reference_identifier,
    STATE(230), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    ACTIONS(410), 1,
      sym__identifier,
    STATE(154), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(164), 1,
      sym_reference_identifier,
    STATE(230), 1,
      sym_var_identifier,
    ACTIONS(413), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(418), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(418), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [5455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__identifier,
    STATE(164), 1,
      sym_reference_identifier,
    STATE(226), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym__identifier,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(185), 1,
      sym_var_identifier,
    ACTIONS(31), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__identifier,
    STATE(164), 1,
      sym_reference_identifier,
    STATE(217), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(140), 4,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [5541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DOT,
    STATE(166), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(134), 4,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [5557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__identifier,
    STATE(164), 1,
      sym_reference_identifier,
    STATE(177), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(147), 4,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [5591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__identifier,
    STATE(164), 1,
      sym_reference_identifier,
    STATE(223), 1,
      sym_var_identifier,
    ACTIONS(71), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5609] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(435), 1,
      sym__identifier,
    STATE(30), 1,
      sym_post_identifier,
    STATE(31), 1,
      sym_function_call,
    STATE(181), 1,
      sym_function_identifier,
  [5628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(435), 1,
      sym__identifier,
    STATE(30), 1,
      sym_post_identifier,
    STATE(31), 1,
      sym_function_call,
    STATE(186), 1,
      sym_function_identifier,
  [5660] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      sym__identifier,
    STATE(116), 1,
      sym_post_identifier,
    STATE(117), 1,
      sym_function_call,
    STATE(184), 1,
      sym_function_identifier,
  [5679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      sym__identifier,
    STATE(137), 1,
      sym_function_call,
    STATE(138), 1,
      sym_post_identifier,
    STATE(186), 1,
      sym_function_identifier,
  [5698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_list_definition_repeat1,
    STATE(187), 1,
      sym_struct_field_declaration_list,
  [5714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_list_definition_repeat1,
    STATE(187), 1,
      sym_struct_field_declaration_list,
  [5730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_list_definition_repeat1,
    STATE(187), 1,
      sym_struct_field_declaration_list,
  [5746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(454), 1,
      sym__identifier,
    STATE(186), 1,
      sym_function_identifier,
    STATE(229), 1,
      sym_function_call,
  [5762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      sym_property_expr,
    ACTIONS(456), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [5776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_formal_parameters_repeat1,
  [5789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_formal_parameters_repeat1,
  [5802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_formal_parameters_repeat1,
  [5815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_signature,
    STATE(37), 1,
      sym_formal_parameters,
  [5828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_formal_parameters_repeat1,
  [5841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_formal_parameters_repeat1,
  [5854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_formal_parameters,
    STATE(121), 1,
      sym_call_signature,
  [5867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_in,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_for_loop_index,
  [5880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_formal_parameters,
    STATE(108), 1,
      sym_call_signature,
  [5893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(489), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [5904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_formal_parameters_repeat1,
  [5917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_formal_parameters_repeat1,
  [5930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_component_field_declaration_list,
  [5940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym_expression_body_paren,
  [5950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_struct_field_declaration_list,
  [5960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_component_field_declaration_list,
  [5970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_component_field_declaration_list,
  [5980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_component_field_declaration_list,
  [5990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_component_field_declaration_list,
  [6000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_component_field_declaration_list,
  [6010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_component_field_declaration_list,
  [6028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_component_field_declaration_list,
  [6038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_component_field_declaration_list,
  [6048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_component_field_declaration_list,
  [6058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_component_field_declaration_list,
  [6068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_component_field_declaration_list,
  [6078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_component_field_declaration_list,
  [6088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_struct_field_declaration_list,
  [6098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_component_field_declaration_list,
  [6108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_component_field_declaration_list,
  [6118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_component_field_declaration_list,
  [6136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_SEMI,
  [6143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LT,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_in,
  [6157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_GT,
  [6164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [6171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_GT,
  [6178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COLON,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
  [6192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_in,
  [6199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_SEMI,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_GT,
  [6213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SEMI,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
  [6227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SEMI,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__identifier,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COLON,
  [6248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
  [6255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COLON_EQ,
  [6262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_SEMI,
  [6269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_COLON,
  [6276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
  [6283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 300,
  [SMALL_STATE(7)] = 375,
  [SMALL_STATE(8)] = 450,
  [SMALL_STATE(9)] = 525,
  [SMALL_STATE(10)] = 600,
  [SMALL_STATE(11)] = 675,
  [SMALL_STATE(12)] = 750,
  [SMALL_STATE(13)] = 820,
  [SMALL_STATE(14)] = 892,
  [SMALL_STATE(15)] = 962,
  [SMALL_STATE(16)] = 1032,
  [SMALL_STATE(17)] = 1102,
  [SMALL_STATE(18)] = 1172,
  [SMALL_STATE(19)] = 1241,
  [SMALL_STATE(20)] = 1310,
  [SMALL_STATE(21)] = 1379,
  [SMALL_STATE(22)] = 1448,
  [SMALL_STATE(23)] = 1517,
  [SMALL_STATE(24)] = 1586,
  [SMALL_STATE(25)] = 1655,
  [SMALL_STATE(26)] = 1726,
  [SMALL_STATE(27)] = 1795,
  [SMALL_STATE(28)] = 1866,
  [SMALL_STATE(29)] = 1907,
  [SMALL_STATE(30)] = 1954,
  [SMALL_STATE(31)] = 1992,
  [SMALL_STATE(32)] = 2030,
  [SMALL_STATE(33)] = 2072,
  [SMALL_STATE(34)] = 2114,
  [SMALL_STATE(35)] = 2156,
  [SMALL_STATE(36)] = 2194,
  [SMALL_STATE(37)] = 2231,
  [SMALL_STATE(38)] = 2268,
  [SMALL_STATE(39)] = 2305,
  [SMALL_STATE(40)] = 2342,
  [SMALL_STATE(41)] = 2379,
  [SMALL_STATE(42)] = 2416,
  [SMALL_STATE(43)] = 2458,
  [SMALL_STATE(44)] = 2503,
  [SMALL_STATE(45)] = 2548,
  [SMALL_STATE(46)] = 2580,
  [SMALL_STATE(47)] = 2612,
  [SMALL_STATE(48)] = 2644,
  [SMALL_STATE(49)] = 2676,
  [SMALL_STATE(50)] = 2708,
  [SMALL_STATE(51)] = 2740,
  [SMALL_STATE(52)] = 2772,
  [SMALL_STATE(53)] = 2804,
  [SMALL_STATE(54)] = 2836,
  [SMALL_STATE(55)] = 2868,
  [SMALL_STATE(56)] = 2900,
  [SMALL_STATE(57)] = 2932,
  [SMALL_STATE(58)] = 2964,
  [SMALL_STATE(59)] = 2996,
  [SMALL_STATE(60)] = 3028,
  [SMALL_STATE(61)] = 3060,
  [SMALL_STATE(62)] = 3092,
  [SMALL_STATE(63)] = 3124,
  [SMALL_STATE(64)] = 3153,
  [SMALL_STATE(65)] = 3182,
  [SMALL_STATE(66)] = 3216,
  [SMALL_STATE(67)] = 3252,
  [SMALL_STATE(68)] = 3288,
  [SMALL_STATE(69)] = 3324,
  [SMALL_STATE(70)] = 3360,
  [SMALL_STATE(71)] = 3393,
  [SMALL_STATE(72)] = 3426,
  [SMALL_STATE(73)] = 3459,
  [SMALL_STATE(74)] = 3485,
  [SMALL_STATE(75)] = 3511,
  [SMALL_STATE(76)] = 3541,
  [SMALL_STATE(77)] = 3567,
  [SMALL_STATE(78)] = 3593,
  [SMALL_STATE(79)] = 3619,
  [SMALL_STATE(80)] = 3645,
  [SMALL_STATE(81)] = 3671,
  [SMALL_STATE(82)] = 3697,
  [SMALL_STATE(83)] = 3723,
  [SMALL_STATE(84)] = 3749,
  [SMALL_STATE(85)] = 3775,
  [SMALL_STATE(86)] = 3801,
  [SMALL_STATE(87)] = 3827,
  [SMALL_STATE(88)] = 3853,
  [SMALL_STATE(89)] = 3879,
  [SMALL_STATE(90)] = 3906,
  [SMALL_STATE(91)] = 3933,
  [SMALL_STATE(92)] = 3960,
  [SMALL_STATE(93)] = 3987,
  [SMALL_STATE(94)] = 4014,
  [SMALL_STATE(95)] = 4041,
  [SMALL_STATE(96)] = 4068,
  [SMALL_STATE(97)] = 4095,
  [SMALL_STATE(98)] = 4122,
  [SMALL_STATE(99)] = 4149,
  [SMALL_STATE(100)] = 4176,
  [SMALL_STATE(101)] = 4203,
  [SMALL_STATE(102)] = 4230,
  [SMALL_STATE(103)] = 4259,
  [SMALL_STATE(104)] = 4282,
  [SMALL_STATE(105)] = 4305,
  [SMALL_STATE(106)] = 4328,
  [SMALL_STATE(107)] = 4351,
  [SMALL_STATE(108)] = 4374,
  [SMALL_STATE(109)] = 4397,
  [SMALL_STATE(110)] = 4423,
  [SMALL_STATE(111)] = 4447,
  [SMALL_STATE(112)] = 4473,
  [SMALL_STATE(113)] = 4499,
  [SMALL_STATE(114)] = 4525,
  [SMALL_STATE(115)] = 4550,
  [SMALL_STATE(116)] = 4571,
  [SMALL_STATE(117)] = 4592,
  [SMALL_STATE(118)] = 4613,
  [SMALL_STATE(119)] = 4638,
  [SMALL_STATE(120)] = 4659,
  [SMALL_STATE(121)] = 4680,
  [SMALL_STATE(122)] = 4701,
  [SMALL_STATE(123)] = 4722,
  [SMALL_STATE(124)] = 4743,
  [SMALL_STATE(125)] = 4766,
  [SMALL_STATE(126)] = 4787,
  [SMALL_STATE(127)] = 4812,
  [SMALL_STATE(128)] = 4832,
  [SMALL_STATE(129)] = 4852,
  [SMALL_STATE(130)] = 4872,
  [SMALL_STATE(131)] = 4898,
  [SMALL_STATE(132)] = 4928,
  [SMALL_STATE(133)] = 4948,
  [SMALL_STATE(134)] = 4972,
  [SMALL_STATE(135)] = 4992,
  [SMALL_STATE(136)] = 5012,
  [SMALL_STATE(137)] = 5032,
  [SMALL_STATE(138)] = 5052,
  [SMALL_STATE(139)] = 5072,
  [SMALL_STATE(140)] = 5092,
  [SMALL_STATE(141)] = 5112,
  [SMALL_STATE(142)] = 5135,
  [SMALL_STATE(143)] = 5153,
  [SMALL_STATE(144)] = 5170,
  [SMALL_STATE(145)] = 5187,
  [SMALL_STATE(146)] = 5204,
  [SMALL_STATE(147)] = 5221,
  [SMALL_STATE(148)] = 5238,
  [SMALL_STATE(149)] = 5255,
  [SMALL_STATE(150)] = 5272,
  [SMALL_STATE(151)] = 5291,
  [SMALL_STATE(152)] = 5311,
  [SMALL_STATE(153)] = 5335,
  [SMALL_STATE(154)] = 5359,
  [SMALL_STATE(155)] = 5383,
  [SMALL_STATE(156)] = 5400,
  [SMALL_STATE(157)] = 5419,
  [SMALL_STATE(158)] = 5438,
  [SMALL_STATE(159)] = 5455,
  [SMALL_STATE(160)] = 5473,
  [SMALL_STATE(161)] = 5489,
  [SMALL_STATE(162)] = 5507,
  [SMALL_STATE(163)] = 5525,
  [SMALL_STATE(164)] = 5541,
  [SMALL_STATE(165)] = 5557,
  [SMALL_STATE(166)] = 5575,
  [SMALL_STATE(167)] = 5591,
  [SMALL_STATE(168)] = 5609,
  [SMALL_STATE(169)] = 5628,
  [SMALL_STATE(170)] = 5641,
  [SMALL_STATE(171)] = 5660,
  [SMALL_STATE(172)] = 5679,
  [SMALL_STATE(173)] = 5698,
  [SMALL_STATE(174)] = 5714,
  [SMALL_STATE(175)] = 5730,
  [SMALL_STATE(176)] = 5746,
  [SMALL_STATE(177)] = 5762,
  [SMALL_STATE(178)] = 5776,
  [SMALL_STATE(179)] = 5789,
  [SMALL_STATE(180)] = 5802,
  [SMALL_STATE(181)] = 5815,
  [SMALL_STATE(182)] = 5828,
  [SMALL_STATE(183)] = 5841,
  [SMALL_STATE(184)] = 5854,
  [SMALL_STATE(185)] = 5867,
  [SMALL_STATE(186)] = 5880,
  [SMALL_STATE(187)] = 5893,
  [SMALL_STATE(188)] = 5904,
  [SMALL_STATE(189)] = 5917,
  [SMALL_STATE(190)] = 5930,
  [SMALL_STATE(191)] = 5940,
  [SMALL_STATE(192)] = 5950,
  [SMALL_STATE(193)] = 5960,
  [SMALL_STATE(194)] = 5970,
  [SMALL_STATE(195)] = 5980,
  [SMALL_STATE(196)] = 5990,
  [SMALL_STATE(197)] = 6000,
  [SMALL_STATE(198)] = 6010,
  [SMALL_STATE(199)] = 6018,
  [SMALL_STATE(200)] = 6028,
  [SMALL_STATE(201)] = 6038,
  [SMALL_STATE(202)] = 6048,
  [SMALL_STATE(203)] = 6058,
  [SMALL_STATE(204)] = 6068,
  [SMALL_STATE(205)] = 6078,
  [SMALL_STATE(206)] = 6088,
  [SMALL_STATE(207)] = 6098,
  [SMALL_STATE(208)] = 6108,
  [SMALL_STATE(209)] = 6118,
  [SMALL_STATE(210)] = 6126,
  [SMALL_STATE(211)] = 6136,
  [SMALL_STATE(212)] = 6143,
  [SMALL_STATE(213)] = 6150,
  [SMALL_STATE(214)] = 6157,
  [SMALL_STATE(215)] = 6164,
  [SMALL_STATE(216)] = 6171,
  [SMALL_STATE(217)] = 6178,
  [SMALL_STATE(218)] = 6185,
  [SMALL_STATE(219)] = 6192,
  [SMALL_STATE(220)] = 6199,
  [SMALL_STATE(221)] = 6206,
  [SMALL_STATE(222)] = 6213,
  [SMALL_STATE(223)] = 6220,
  [SMALL_STATE(224)] = 6227,
  [SMALL_STATE(225)] = 6234,
  [SMALL_STATE(226)] = 6241,
  [SMALL_STATE(227)] = 6248,
  [SMALL_STATE(228)] = 6255,
  [SMALL_STATE(229)] = 6262,
  [SMALL_STATE(230)] = 6269,
  [SMALL_STATE(231)] = 6276,
  [SMALL_STATE(232)] = 6283,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(101),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(191),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(161),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(212),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(176),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(75),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(29),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(35),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(84),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type_identifier, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(168),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 11),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 11),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 12),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 12),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 18),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 18),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 8),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 8),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 18),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 18),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 13),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 13),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(171),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(172),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(164),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(35),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(170),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2), SHIFT_REPEAT(153),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 10),
  [505] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 17),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_index, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
