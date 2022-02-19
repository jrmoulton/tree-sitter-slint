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
#define STATE_COUNT 367
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_global = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_import = 3,
  anon_sym_LBRACE = 4,
  anon_sym_COMMA = 5,
  anon_sym_RBRACE = 6,
  anon_sym_from = 7,
  anon_sym_SEMI = 8,
  anon_sym_export = 9,
  anon_sym_struct = 10,
  anon_sym_COLON = 11,
  anon_sym_transitions = 12,
  anon_sym_LBRACK = 13,
  anon_sym_in = 14,
  anon_sym_out = 15,
  anon_sym_RBRACK = 16,
  anon_sym_states = 17,
  anon_sym_when = 18,
  anon_sym_animate = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_if = 21,
  anon_sym_elseif = 22,
  anon_sym_else = 23,
  anon_sym_for = 24,
  anon_sym_property = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_EQ = 28,
  anon_sym_PLUS_EQ = 29,
  anon_sym_DASH_EQ = 30,
  anon_sym_STAR_EQ = 31,
  anon_sym_SLASH_EQ = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_DASH = 35,
  anon_sym_BANG = 36,
  anon_sym_STAR = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_SLASH = 40,
  anon_sym_QMARK = 41,
  anon_sym_PLUS = 42,
  anon_sym_callback = 43,
  anon_sym_DASH_GT = 44,
  anon_sym_DQUOTE = 45,
  anon_sym_SQUOTE = 46,
  sym_unescaped_double_string_fragment = 47,
  sym_unescaped_single_string_fragment = 48,
  sym_escape_sequence = 49,
  sym__identifier = 50,
  anon_sym_DOT = 51,
  anon_sym_AT = 52,
  anon_sym_children = 53,
  anon_sym_parent = 54,
  anon_sym_root = 55,
  anon_sym_this = 56,
  anon_sym_POUND = 57,
  aux_sym_color_token1 = 58,
  aux_sym_color_token2 = 59,
  sym_int_number = 60,
  sym_float_number = 61,
  anon_sym_px = 62,
  anon_sym_PERCENT = 63,
  anon_sym_ms = 64,
  anon_sym_black = 65,
  anon_sym_blue = 66,
  anon_sym_ease = 67,
  anon_sym_ease_DASHin = 68,
  anon_sym_ease_in = 69,
  anon_sym_ease_in_out = 70,
  anon_sym_ease_DASHin_DASHout = 71,
  anon_sym_ease_out = 72,
  anon_sym_ease_DASHout = 73,
  anon_sym_end = 74,
  anon_sym_green = 75,
  anon_sym_red = 76,
  anon_sym_start = 77,
  anon_sym_yellow = 78,
  anon_sym_true = 79,
  anon_sym_false = 80,
  anon_sym_transparent = 81,
  anon_sym_angle = 82,
  anon_sym_bool = 83,
  anon_sym_brush = 84,
  anon_sym_duration = 85,
  anon_sym_easing = 86,
  anon_sym_float = 87,
  anon_sym_image = 88,
  anon_sym_int = 89,
  anon_sym_length = 90,
  anon_sym_percent = 91,
  anon_sym_physical_DASHlength = 92,
  anon_sym_physical_length = 93,
  anon_sym_string = 94,
  sym_comment = 95,
  sym_source_file = 96,
  sym__definition = 97,
  sym_global_definition = 98,
  sym_import_statement = 99,
  sym_export_statement = 100,
  sym_struct_definition = 101,
  sym_struct_field_declaration_list = 102,
  sym_component_definition = 103,
  sym_component_field_declaration_list = 104,
  sym_transitions_definition = 105,
  sym_transitions_list_definition = 106,
  sym_states_definition = 107,
  sym_states_list_definition = 108,
  sym_animate_statement = 109,
  sym_animate_declaration_list = 110,
  sym_callback_event = 111,
  sym_callback_call = 112,
  sym_if_statement_definition = 113,
  sym_for_loop_definition = 114,
  sym_for_loop_index = 115,
  sym_property_definition = 116,
  sym_property_expr = 117,
  sym__propterty_kind = 118,
  sym_property_type_list = 119,
  sym_list_definition = 120,
  sym_variable_definition = 121,
  sym_variable_set_equal = 122,
  sym__expression = 123,
  sym_expression_body_paren = 124,
  sym__expression_body = 125,
  sym_unary_expression = 126,
  sym__binary_expression = 127,
  sym_mult_binary_expression = 128,
  sym_ternary_expression = 129,
  sym_add_binary_expression = 130,
  sym_callback_definition = 131,
  sym_call_signature = 132,
  sym_formal_parameters = 133,
  sym_formal_parameter = 134,
  sym_string = 135,
  sym_visibility_modifier = 136,
  sym_post_identifier = 137,
  sym_user_type_identifier = 138,
  sym__type_identifier = 139,
  sym_var_identifier = 140,
  sym_children_identifier = 141,
  sym_function_identifier = 142,
  sym_function_call = 143,
  sym_reference_identifier = 144,
  sym_value = 145,
  sym_color = 146,
  sym_value_with_units = 147,
  sym_number = 148,
  sym_unit_type = 149,
  sym_language_constant = 150,
  sym_builtin_type_identifier = 151,
  aux_sym_source_file_repeat1 = 152,
  aux_sym_import_statement_repeat1 = 153,
  aux_sym_struct_field_declaration_list_repeat1 = 154,
  aux_sym_component_field_declaration_list_repeat1 = 155,
  aux_sym_transitions_list_definition_repeat1 = 156,
  aux_sym_states_list_definition_repeat1 = 157,
  aux_sym_animate_declaration_list_repeat1 = 158,
  aux_sym_list_definition_repeat1 = 159,
  aux_sym_formal_parameters_repeat1 = 160,
  aux_sym_string_repeat1 = 161,
  aux_sym_string_repeat2 = 162,
  aux_sym_var_identifier_repeat1 = 163,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_global] = "global",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [anon_sym_SEMI] = ";",
  [anon_sym_export] = "export",
  [anon_sym_struct] = "struct",
  [anon_sym_COLON] = ":",
  [anon_sym_transitions] = "transitions",
  [anon_sym_LBRACK] = "[",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_RBRACK] = "]",
  [anon_sym_states] = "states",
  [anon_sym_when] = "when",
  [anon_sym_animate] = "animate",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_property] = "property",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
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
  [sym__identifier] = "_identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_children] = "children",
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
  [anon_sym_ease_DASHin] = "ease-in",
  [anon_sym_ease_in] = "ease_in",
  [anon_sym_ease_in_out] = "ease_in_out",
  [anon_sym_ease_DASHin_DASHout] = "ease-in-out",
  [anon_sym_ease_out] = "ease_out",
  [anon_sym_ease_DASHout] = "ease-out",
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
  [anon_sym_physical_length] = "physical_length",
  [anon_sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_global_definition] = "global_definition",
  [sym_import_statement] = "import_statement",
  [sym_export_statement] = "export_statement",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_field_declaration_list] = "struct_field_declaration_list",
  [sym_component_definition] = "component_definition",
  [sym_component_field_declaration_list] = "component_field_declaration_list",
  [sym_transitions_definition] = "transitions_definition",
  [sym_transitions_list_definition] = "transitions_list_definition",
  [sym_states_definition] = "states_definition",
  [sym_states_list_definition] = "states_list_definition",
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
  [sym__expression_body] = "_expression_body",
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
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_post_identifier] = "post_identifier",
  [sym_user_type_identifier] = "user_type_identifier",
  [sym__type_identifier] = "_type_identifier",
  [sym_var_identifier] = "var_identifier",
  [sym_children_identifier] = "children_identifier",
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
  [aux_sym_transitions_list_definition_repeat1] = "transitions_list_definition_repeat1",
  [aux_sym_states_list_definition_repeat1] = "states_list_definition_repeat1",
  [aux_sym_animate_declaration_list_repeat1] = "animate_declaration_list_repeat1",
  [aux_sym_list_definition_repeat1] = "list_definition_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_var_identifier_repeat1] = "var_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_transitions] = anon_sym_transitions,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_states] = anon_sym_states,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_animate] = anon_sym_animate,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
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
  [sym__identifier] = sym__identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_children] = anon_sym_children,
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
  [anon_sym_ease_DASHin] = anon_sym_ease_DASHin,
  [anon_sym_ease_in] = anon_sym_ease_in,
  [anon_sym_ease_in_out] = anon_sym_ease_in_out,
  [anon_sym_ease_DASHin_DASHout] = anon_sym_ease_DASHin_DASHout,
  [anon_sym_ease_out] = anon_sym_ease_out,
  [anon_sym_ease_DASHout] = anon_sym_ease_DASHout,
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
  [anon_sym_physical_length] = anon_sym_physical_length,
  [anon_sym_string] = anon_sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_global_definition] = sym_global_definition,
  [sym_import_statement] = sym_import_statement,
  [sym_export_statement] = sym_export_statement,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_field_declaration_list] = sym_struct_field_declaration_list,
  [sym_component_definition] = sym_component_definition,
  [sym_component_field_declaration_list] = sym_component_field_declaration_list,
  [sym_transitions_definition] = sym_transitions_definition,
  [sym_transitions_list_definition] = sym_transitions_list_definition,
  [sym_states_definition] = sym_states_definition,
  [sym_states_list_definition] = sym_states_list_definition,
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
  [sym__expression_body] = sym__expression_body,
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
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_post_identifier] = sym_post_identifier,
  [sym_user_type_identifier] = sym_user_type_identifier,
  [sym__type_identifier] = sym__type_identifier,
  [sym_var_identifier] = sym_var_identifier,
  [sym_children_identifier] = sym_children_identifier,
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
  [aux_sym_transitions_list_definition_repeat1] = aux_sym_transitions_list_definition_repeat1,
  [aux_sym_states_list_definition_repeat1] = aux_sym_states_list_definition_repeat1,
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
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
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
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transitions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_states] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
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
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
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
  [anon_sym_children] = {
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
  [anon_sym_ease_DASHin] = {
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
  [anon_sym_ease_DASHin_DASHout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ease_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ease_DASHout] = {
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
  [anon_sym_physical_length] = {
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
  [sym_global_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_export_statement] = {
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
  [sym_transitions_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_transitions_list_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_states_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_states_list_definition] = {
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
  [sym__expression_body] = {
    .visible = false,
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
  [sym_visibility_modifier] = {
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
  [sym_children_identifier] = {
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
  [aux_sym_transitions_list_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_states_list_definition_repeat1] = {
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
  field_match_all = 3,
  field_name = 4,
  field_parameters = 5,
  field_prev_name = 6,
  field_super_type = 7,
  field_type = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_function] = "function",
  [field_match_all] = "match_all",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_prev_name] = "prev_name",
  [field_super_type] = "super_type",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 2},
  [10] = {.index = 20, .length = 1},
  [11] = {.index = 21, .length = 3},
  [12] = {.index = 24, .length = 2},
  [13] = {.index = 26, .length = 1},
  [14] = {.index = 27, .length = 1},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 1},
  [18] = {.index = 34, .length = 1},
  [19] = {.index = 35, .length = 1},
  [20] = {.index = 36, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_match_all, 0},
  [1] =
    {field_body, 1},
    {field_super_type, 0},
  [3] =
    {field_body, 2},
    {field_super_type, 1},
  [5] =
    {field_body, 2},
    {field_name, 0},
    {field_super_type, 1},
  [8] =
    {field_body, 3},
    {field_name, 1},
  [10] =
    {field_body, 3},
    {field_super_type, 2},
  [12] =
    {field_body, 3},
    {field_name, 1},
    {field_super_type, 2},
  [15] =
    {field_body, 3},
    {field_name, 0},
    {field_super_type, 2},
  [18] =
    {field_function, 0},
    {field_function, 1},
  [20] =
    {field_parameters, 0},
  [21] =
    {field_body, 4},
    {field_name, 1},
    {field_super_type, 3},
  [24] =
    {field_body, 4},
    {field_name, 2},
  [26] =
    {field_type, 0},
  [27] =
    {field_name, 1, .inherited = true},
  [28] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [30] =
    {field_body, 5},
    {field_name, 2},
    {field_super_type, 4},
  [33] =
    {field_name, 0},
  [34] =
    {field_prev_name, 0},
  [35] =
    {field_type, 1},
  [36] =
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
  [6] = 6,
  [7] = 3,
  [8] = 5,
  [9] = 3,
  [10] = 5,
  [11] = 6,
  [12] = 6,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 14,
  [30] = 21,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 32,
  [35] = 32,
  [36] = 31,
  [37] = 32,
  [38] = 38,
  [39] = 31,
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
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
  [100] = 100,
  [101] = 52,
  [102] = 102,
  [103] = 51,
  [104] = 104,
  [105] = 62,
  [106] = 106,
  [107] = 63,
  [108] = 108,
  [109] = 65,
  [110] = 58,
  [111] = 111,
  [112] = 68,
  [113] = 60,
  [114] = 111,
  [115] = 115,
  [116] = 69,
  [117] = 117,
  [118] = 118,
  [119] = 54,
  [120] = 120,
  [121] = 121,
  [122] = 56,
  [123] = 123,
  [124] = 67,
  [125] = 117,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 76,
  [131] = 131,
  [132] = 55,
  [133] = 133,
  [134] = 53,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 143,
  [149] = 147,
  [150] = 150,
  [151] = 151,
  [152] = 146,
  [153] = 45,
  [154] = 154,
  [155] = 47,
  [156] = 41,
  [157] = 157,
  [158] = 145,
  [159] = 159,
  [160] = 49,
  [161] = 45,
  [162] = 42,
  [163] = 43,
  [164] = 164,
  [165] = 165,
  [166] = 47,
  [167] = 44,
  [168] = 41,
  [169] = 49,
  [170] = 170,
  [171] = 140,
  [172] = 42,
  [173] = 55,
  [174] = 48,
  [175] = 46,
  [176] = 50,
  [177] = 177,
  [178] = 44,
  [179] = 159,
  [180] = 43,
  [181] = 141,
  [182] = 52,
  [183] = 54,
  [184] = 56,
  [185] = 53,
  [186] = 51,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 95,
  [191] = 48,
  [192] = 192,
  [193] = 50,
  [194] = 46,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 189,
  [206] = 201,
  [207] = 198,
  [208] = 197,
  [209] = 204,
  [210] = 199,
  [211] = 192,
  [212] = 195,
  [213] = 196,
  [214] = 95,
  [215] = 187,
  [216] = 200,
  [217] = 188,
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
  [233] = 233,
  [234] = 234,
  [235] = 47,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 45,
  [240] = 240,
  [241] = 49,
  [242] = 242,
  [243] = 243,
  [244] = 240,
  [245] = 245,
  [246] = 238,
  [247] = 247,
  [248] = 60,
  [249] = 249,
  [250] = 250,
  [251] = 68,
  [252] = 252,
  [253] = 252,
  [254] = 252,
  [255] = 252,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 258,
  [266] = 260,
  [267] = 267,
  [268] = 268,
  [269] = 257,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 261,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 278,
  [284] = 277,
  [285] = 281,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 281,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 277,
  [295] = 295,
  [296] = 296,
  [297] = 68,
  [298] = 278,
  [299] = 60,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 302,
  [307] = 302,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 310,
  [322] = 305,
  [323] = 323,
  [324] = 324,
  [325] = 311,
  [326] = 301,
  [327] = 316,
  [328] = 323,
  [329] = 324,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 337,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '!') ADVANCE(319);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead == '+') ADVANCE(328);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(263)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == 'y') ADVANCE(102);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\r') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(30)
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(319);
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(438);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == 's') ADVANCE(520);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'y') ADVANCE(396);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(332);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 36:
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 37:
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '&') ADVANCE(322);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 41:
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(631);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 48:
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '_') ADVANCE(153);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == 'g') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(551);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(331);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(295);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(565);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(592);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(612);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(628);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(620);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(624);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(626);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(570);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(276);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(579);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(552);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(568);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 245:
      if (lookahead == 'w') ADVANCE(596);
      END_STATE();
    case 246:
      if (lookahead == 'x') ADVANCE(565);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 249:
      if (lookahead == '{') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 250:
      if (lookahead == '|') ADVANCE(323);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(631);
      if (lookahead == '\r') ADVANCE(632);
      END_STATE();
    case 262:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 263:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(262)
      END_STATE();
    case 264:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(266)
      END_STATE();
    case 265:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(266)
      if (lookahead == '\r') SKIP(264)
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') SKIP(265)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == 'g') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_transitions);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_transitions);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_states);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_states);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_animate);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_animate);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(295);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '>') ADVANCE(331);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(331);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(311);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(631);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(345);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '_') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'x') ADVANCE(566);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(357);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(589);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(497);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(353);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(613);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(629);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(384);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(530);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(534);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(535);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(609);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(625);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(627);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(424);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(427);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(571);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(353);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(455);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(478);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(619);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(623);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(489);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(524);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(526);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(527);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(597);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(304);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(510);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead == '_') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(188);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(485);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_physical_length);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_physical_length);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(631);
      if (lookahead == '\\') ADVANCE(261);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 266},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 46},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 46},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 266},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 46},
  [62] = {.lex_state = 46},
  [63] = {.lex_state = 46},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 46},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 46},
  [68] = {.lex_state = 46},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 46},
  [71] = {.lex_state = 46},
  [72] = {.lex_state = 46},
  [73] = {.lex_state = 46},
  [74] = {.lex_state = 46},
  [75] = {.lex_state = 46},
  [76] = {.lex_state = 46},
  [77] = {.lex_state = 46},
  [78] = {.lex_state = 46},
  [79] = {.lex_state = 46},
  [80] = {.lex_state = 46},
  [81] = {.lex_state = 46},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 266},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 266},
  [94] = {.lex_state = 266},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 50},
  [97] = {.lex_state = 48},
  [98] = {.lex_state = 50},
  [99] = {.lex_state = 50},
  [100] = {.lex_state = 50},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 266},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 266},
  [105] = {.lex_state = 266},
  [106] = {.lex_state = 48},
  [107] = {.lex_state = 266},
  [108] = {.lex_state = 266},
  [109] = {.lex_state = 266},
  [110] = {.lex_state = 266},
  [111] = {.lex_state = 48},
  [112] = {.lex_state = 266},
  [113] = {.lex_state = 266},
  [114] = {.lex_state = 48},
  [115] = {.lex_state = 51},
  [116] = {.lex_state = 266},
  [117] = {.lex_state = 48},
  [118] = {.lex_state = 266},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 266},
  [121] = {.lex_state = 266},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 266},
  [124] = {.lex_state = 266},
  [125] = {.lex_state = 48},
  [126] = {.lex_state = 266},
  [127] = {.lex_state = 266},
  [128] = {.lex_state = 266},
  [129] = {.lex_state = 266},
  [130] = {.lex_state = 266},
  [131] = {.lex_state = 266},
  [132] = {.lex_state = 37},
  [133] = {.lex_state = 48},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 48},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 48},
  [138] = {.lex_state = 48},
  [139] = {.lex_state = 48},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 48},
  [143] = {.lex_state = 48},
  [144] = {.lex_state = 48},
  [145] = {.lex_state = 48},
  [146] = {.lex_state = 48},
  [147] = {.lex_state = 48},
  [148] = {.lex_state = 48},
  [149] = {.lex_state = 48},
  [150] = {.lex_state = 48},
  [151] = {.lex_state = 48},
  [152] = {.lex_state = 48},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 48},
  [155] = {.lex_state = 34},
  [156] = {.lex_state = 34},
  [157] = {.lex_state = 48},
  [158] = {.lex_state = 48},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 34},
  [161] = {.lex_state = 36},
  [162] = {.lex_state = 34},
  [163] = {.lex_state = 34},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 36},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 34},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 36},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 34},
  [177] = {.lex_state = 48},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 36},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 36},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 34},
  [206] = {.lex_state = 34},
  [207] = {.lex_state = 34},
  [208] = {.lex_state = 34},
  [209] = {.lex_state = 34},
  [210] = {.lex_state = 34},
  [211] = {.lex_state = 34},
  [212] = {.lex_state = 34},
  [213] = {.lex_state = 34},
  [214] = {.lex_state = 34},
  [215] = {.lex_state = 34},
  [216] = {.lex_state = 34},
  [217] = {.lex_state = 34},
  [218] = {.lex_state = 47},
  [219] = {.lex_state = 47},
  [220] = {.lex_state = 47},
  [221] = {.lex_state = 47},
  [222] = {.lex_state = 47},
  [223] = {.lex_state = 47},
  [224] = {.lex_state = 34},
  [225] = {.lex_state = 47},
  [226] = {.lex_state = 47},
  [227] = {.lex_state = 34},
  [228] = {.lex_state = 47},
  [229] = {.lex_state = 47},
  [230] = {.lex_state = 47},
  [231] = {.lex_state = 47},
  [232] = {.lex_state = 47},
  [233] = {.lex_state = 47},
  [234] = {.lex_state = 47},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 34},
  [237] = {.lex_state = 34},
  [238] = {.lex_state = 34},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 34},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 34},
  [246] = {.lex_state = 34},
  [247] = {.lex_state = 34},
  [248] = {.lex_state = 47},
  [249] = {.lex_state = 47},
  [250] = {.lex_state = 47},
  [251] = {.lex_state = 47},
  [252] = {.lex_state = 52},
  [253] = {.lex_state = 52},
  [254] = {.lex_state = 52},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 39},
  [258] = {.lex_state = 39},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 33},
  [261] = {.lex_state = 33},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 41},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 39},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 39},
  [273] = {.lex_state = 33},
  [274] = {.lex_state = 33},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 52},
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
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 41},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 53},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 41},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 53},
  [307] = {.lex_state = 53},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 54},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 54},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 52},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_transitions] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_states] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_animate] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_children] = ACTIONS(1),
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
    [anon_sym_ease_DASHin] = ACTIONS(1),
    [anon_sym_ease_in] = ACTIONS(1),
    [anon_sym_ease_in_out] = ACTIONS(1),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(1),
    [anon_sym_ease_out] = ACTIONS(1),
    [anon_sym_ease_DASHout] = ACTIONS(1),
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
    [anon_sym_physical_length] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(363),
    [sym__definition] = STATE(59),
    [sym_global_definition] = STATE(59),
    [sym_import_statement] = STATE(59),
    [sym_export_statement] = STATE(59),
    [sym_struct_definition] = STATE(59),
    [sym_component_definition] = STATE(59),
    [sym_visibility_modifier] = STATE(115),
    [sym_user_type_identifier] = STATE(125),
    [sym__type_identifier] = STATE(125),
    [sym_builtin_type_identifier] = STATE(125),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_global] = ACTIONS(7),
    [anon_sym_COLON_EQ] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
    [anon_sym_struct] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_angle] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_brush] = ACTIONS(19),
    [anon_sym_duration] = ACTIONS(19),
    [anon_sym_easing] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_image] = ACTIONS(19),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_length] = ACTIONS(19),
    [anon_sym_percent] = ACTIONS(19),
    [anon_sym_physical_DASHlength] = ACTIONS(19),
    [anon_sym_physical_length] = ACTIONS(19),
    [anon_sym_string] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_component_field_declaration_list] = STATE(90),
    [sym__expression] = STATE(224),
    [sym_expression_body_paren] = STATE(224),
    [sym__expression_body] = STATE(224),
    [sym_unary_expression] = STATE(224),
    [sym__binary_expression] = STATE(224),
    [sym_mult_binary_expression] = STATE(224),
    [sym_ternary_expression] = STATE(224),
    [sym_add_binary_expression] = STATE(224),
    [sym_string] = STATE(224),
    [sym_var_identifier] = STATE(224),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(224),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(224),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(303),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_list_definition] = STATE(341),
    [sym__expression] = STATE(245),
    [sym_expression_body_paren] = STATE(245),
    [sym__expression_body] = STATE(245),
    [sym_unary_expression] = STATE(245),
    [sym__binary_expression] = STATE(245),
    [sym_mult_binary_expression] = STATE(245),
    [sym_ternary_expression] = STATE(245),
    [sym_add_binary_expression] = STATE(245),
    [sym_string] = STATE(245),
    [sym_var_identifier] = STATE(245),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(245),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(245),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(245),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(303),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(278),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(303),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(303),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(303),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(303),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(298),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(283),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_formal_parameter] = STATE(303),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(227),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__expression] = STATE(189),
    [sym_expression_body_paren] = STATE(189),
    [sym__expression_body] = STATE(189),
    [sym_unary_expression] = STATE(189),
    [sym__binary_expression] = STATE(189),
    [sym_mult_binary_expression] = STATE(189),
    [sym_ternary_expression] = STATE(189),
    [sym_add_binary_expression] = STATE(189),
    [sym_string] = STATE(189),
    [sym_var_identifier] = STATE(189),
    [sym_children_identifier] = STATE(193),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(189),
    [sym_reference_identifier] = STATE(161),
    [sym_value] = STATE(189),
    [sym_color] = STATE(198),
    [sym_value_with_units] = STATE(198),
    [sym_number] = STATE(140),
    [sym_language_constant] = STATE(198),
    [sym_builtin_type_identifier] = STATE(189),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym__identifier] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_parent] = ACTIONS(89),
    [anon_sym_root] = ACTIONS(89),
    [anon_sym_this] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [sym_int_number] = ACTIONS(93),
    [sym_float_number] = ACTIONS(95),
    [anon_sym_black] = ACTIONS(97),
    [anon_sym_blue] = ACTIONS(97),
    [anon_sym_ease] = ACTIONS(97),
    [anon_sym_ease_DASHin] = ACTIONS(97),
    [anon_sym_ease_in] = ACTIONS(97),
    [anon_sym_ease_in_out] = ACTIONS(97),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(97),
    [anon_sym_ease_out] = ACTIONS(97),
    [anon_sym_ease_DASHout] = ACTIONS(97),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_green] = ACTIONS(97),
    [anon_sym_red] = ACTIONS(97),
    [anon_sym_start] = ACTIONS(97),
    [anon_sym_yellow] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_transparent] = ACTIONS(97),
    [anon_sym_angle] = ACTIONS(99),
    [anon_sym_bool] = ACTIONS(99),
    [anon_sym_brush] = ACTIONS(99),
    [anon_sym_duration] = ACTIONS(99),
    [anon_sym_easing] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_image] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(99),
    [anon_sym_length] = ACTIONS(99),
    [anon_sym_percent] = ACTIONS(99),
    [anon_sym_physical_DASHlength] = ACTIONS(99),
    [anon_sym_physical_length] = ACTIONS(99),
    [anon_sym_string] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__expression] = STATE(242),
    [sym_expression_body_paren] = STATE(242),
    [sym__expression_body] = STATE(242),
    [sym_unary_expression] = STATE(242),
    [sym__binary_expression] = STATE(242),
    [sym_mult_binary_expression] = STATE(242),
    [sym_ternary_expression] = STATE(242),
    [sym_add_binary_expression] = STATE(242),
    [sym_string] = STATE(242),
    [sym_var_identifier] = STATE(242),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(242),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(242),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(242),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__expression] = STATE(203),
    [sym_expression_body_paren] = STATE(203),
    [sym__expression_body] = STATE(203),
    [sym_unary_expression] = STATE(203),
    [sym__binary_expression] = STATE(203),
    [sym_mult_binary_expression] = STATE(203),
    [sym_ternary_expression] = STATE(203),
    [sym_add_binary_expression] = STATE(203),
    [sym_string] = STATE(203),
    [sym_var_identifier] = STATE(203),
    [sym_children_identifier] = STATE(193),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(203),
    [sym_reference_identifier] = STATE(161),
    [sym_value] = STATE(203),
    [sym_color] = STATE(198),
    [sym_value_with_units] = STATE(198),
    [sym_number] = STATE(140),
    [sym_language_constant] = STATE(198),
    [sym_builtin_type_identifier] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym__identifier] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_parent] = ACTIONS(89),
    [anon_sym_root] = ACTIONS(89),
    [anon_sym_this] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [sym_int_number] = ACTIONS(93),
    [sym_float_number] = ACTIONS(95),
    [anon_sym_black] = ACTIONS(97),
    [anon_sym_blue] = ACTIONS(97),
    [anon_sym_ease] = ACTIONS(97),
    [anon_sym_ease_DASHin] = ACTIONS(97),
    [anon_sym_ease_in] = ACTIONS(97),
    [anon_sym_ease_in_out] = ACTIONS(97),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(97),
    [anon_sym_ease_out] = ACTIONS(97),
    [anon_sym_ease_DASHout] = ACTIONS(97),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_green] = ACTIONS(97),
    [anon_sym_red] = ACTIONS(97),
    [anon_sym_start] = ACTIONS(97),
    [anon_sym_yellow] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_transparent] = ACTIONS(97),
    [anon_sym_angle] = ACTIONS(99),
    [anon_sym_bool] = ACTIONS(99),
    [anon_sym_brush] = ACTIONS(99),
    [anon_sym_duration] = ACTIONS(99),
    [anon_sym_easing] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_image] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(99),
    [anon_sym_length] = ACTIONS(99),
    [anon_sym_percent] = ACTIONS(99),
    [anon_sym_physical_DASHlength] = ACTIONS(99),
    [anon_sym_physical_length] = ACTIONS(99),
    [anon_sym_string] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__expression] = STATE(243),
    [sym_expression_body_paren] = STATE(243),
    [sym__expression_body] = STATE(243),
    [sym_unary_expression] = STATE(243),
    [sym__binary_expression] = STATE(243),
    [sym_mult_binary_expression] = STATE(243),
    [sym_ternary_expression] = STATE(243),
    [sym_add_binary_expression] = STATE(243),
    [sym_string] = STATE(243),
    [sym_var_identifier] = STATE(243),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(243),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(243),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__expression] = STATE(238),
    [sym_expression_body_paren] = STATE(238),
    [sym__expression_body] = STATE(238),
    [sym_unary_expression] = STATE(238),
    [sym__binary_expression] = STATE(238),
    [sym_mult_binary_expression] = STATE(238),
    [sym_ternary_expression] = STATE(238),
    [sym_add_binary_expression] = STATE(238),
    [sym_string] = STATE(238),
    [sym_var_identifier] = STATE(238),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(238),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(238),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(238),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__expression] = STATE(247),
    [sym_expression_body_paren] = STATE(247),
    [sym__expression_body] = STATE(240),
    [sym_unary_expression] = STATE(240),
    [sym__binary_expression] = STATE(240),
    [sym_mult_binary_expression] = STATE(240),
    [sym_ternary_expression] = STATE(240),
    [sym_add_binary_expression] = STATE(240),
    [sym_string] = STATE(240),
    [sym_var_identifier] = STATE(240),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(240),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(240),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(240),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__expression] = STATE(246),
    [sym_expression_body_paren] = STATE(246),
    [sym__expression_body] = STATE(246),
    [sym_unary_expression] = STATE(246),
    [sym__binary_expression] = STATE(246),
    [sym_mult_binary_expression] = STATE(246),
    [sym_ternary_expression] = STATE(246),
    [sym_add_binary_expression] = STATE(246),
    [sym_string] = STATE(246),
    [sym_var_identifier] = STATE(246),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(246),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(246),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(246),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__expression] = STATE(192),
    [sym_expression_body_paren] = STATE(192),
    [sym__expression_body] = STATE(192),
    [sym_unary_expression] = STATE(192),
    [sym__binary_expression] = STATE(192),
    [sym_mult_binary_expression] = STATE(192),
    [sym_ternary_expression] = STATE(192),
    [sym_add_binary_expression] = STATE(192),
    [sym_string] = STATE(192),
    [sym_var_identifier] = STATE(192),
    [sym_children_identifier] = STATE(193),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(192),
    [sym_reference_identifier] = STATE(161),
    [sym_value] = STATE(192),
    [sym_color] = STATE(198),
    [sym_value_with_units] = STATE(198),
    [sym_number] = STATE(140),
    [sym_language_constant] = STATE(198),
    [sym_builtin_type_identifier] = STATE(192),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym__identifier] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_parent] = ACTIONS(89),
    [anon_sym_root] = ACTIONS(89),
    [anon_sym_this] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [sym_int_number] = ACTIONS(93),
    [sym_float_number] = ACTIONS(95),
    [anon_sym_black] = ACTIONS(97),
    [anon_sym_blue] = ACTIONS(97),
    [anon_sym_ease] = ACTIONS(97),
    [anon_sym_ease_DASHin] = ACTIONS(97),
    [anon_sym_ease_in] = ACTIONS(97),
    [anon_sym_ease_in_out] = ACTIONS(97),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(97),
    [anon_sym_ease_out] = ACTIONS(97),
    [anon_sym_ease_DASHout] = ACTIONS(97),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_green] = ACTIONS(97),
    [anon_sym_red] = ACTIONS(97),
    [anon_sym_start] = ACTIONS(97),
    [anon_sym_yellow] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_transparent] = ACTIONS(97),
    [anon_sym_angle] = ACTIONS(99),
    [anon_sym_bool] = ACTIONS(99),
    [anon_sym_brush] = ACTIONS(99),
    [anon_sym_duration] = ACTIONS(99),
    [anon_sym_easing] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_image] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(99),
    [anon_sym_length] = ACTIONS(99),
    [anon_sym_percent] = ACTIONS(99),
    [anon_sym_physical_DASHlength] = ACTIONS(99),
    [anon_sym_physical_length] = ACTIONS(99),
    [anon_sym_string] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__expression] = STATE(199),
    [sym_expression_body_paren] = STATE(199),
    [sym__expression_body] = STATE(199),
    [sym_unary_expression] = STATE(199),
    [sym__binary_expression] = STATE(199),
    [sym_mult_binary_expression] = STATE(199),
    [sym_ternary_expression] = STATE(199),
    [sym_add_binary_expression] = STATE(199),
    [sym_string] = STATE(199),
    [sym_var_identifier] = STATE(199),
    [sym_children_identifier] = STATE(193),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(199),
    [sym_reference_identifier] = STATE(161),
    [sym_value] = STATE(199),
    [sym_color] = STATE(198),
    [sym_value_with_units] = STATE(198),
    [sym_number] = STATE(140),
    [sym_language_constant] = STATE(198),
    [sym_builtin_type_identifier] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym__identifier] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_parent] = ACTIONS(89),
    [anon_sym_root] = ACTIONS(89),
    [anon_sym_this] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [sym_int_number] = ACTIONS(93),
    [sym_float_number] = ACTIONS(95),
    [anon_sym_black] = ACTIONS(97),
    [anon_sym_blue] = ACTIONS(97),
    [anon_sym_ease] = ACTIONS(97),
    [anon_sym_ease_DASHin] = ACTIONS(97),
    [anon_sym_ease_in] = ACTIONS(97),
    [anon_sym_ease_in_out] = ACTIONS(97),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(97),
    [anon_sym_ease_out] = ACTIONS(97),
    [anon_sym_ease_DASHout] = ACTIONS(97),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_green] = ACTIONS(97),
    [anon_sym_red] = ACTIONS(97),
    [anon_sym_start] = ACTIONS(97),
    [anon_sym_yellow] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_transparent] = ACTIONS(97),
    [anon_sym_angle] = ACTIONS(99),
    [anon_sym_bool] = ACTIONS(99),
    [anon_sym_brush] = ACTIONS(99),
    [anon_sym_duration] = ACTIONS(99),
    [anon_sym_easing] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_image] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(99),
    [anon_sym_length] = ACTIONS(99),
    [anon_sym_percent] = ACTIONS(99),
    [anon_sym_physical_DASHlength] = ACTIONS(99),
    [anon_sym_physical_length] = ACTIONS(99),
    [anon_sym_string] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__expression] = STATE(210),
    [sym_expression_body_paren] = STATE(210),
    [sym__expression_body] = STATE(210),
    [sym_unary_expression] = STATE(210),
    [sym__binary_expression] = STATE(210),
    [sym_mult_binary_expression] = STATE(210),
    [sym_ternary_expression] = STATE(210),
    [sym_add_binary_expression] = STATE(210),
    [sym_string] = STATE(210),
    [sym_var_identifier] = STATE(210),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(210),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(210),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__expression] = STATE(236),
    [sym_expression_body_paren] = STATE(236),
    [sym__expression_body] = STATE(236),
    [sym_unary_expression] = STATE(236),
    [sym__binary_expression] = STATE(236),
    [sym_mult_binary_expression] = STATE(236),
    [sym_ternary_expression] = STATE(236),
    [sym_add_binary_expression] = STATE(236),
    [sym_string] = STATE(236),
    [sym_var_identifier] = STATE(236),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(236),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(236),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__expression] = STATE(247),
    [sym_expression_body_paren] = STATE(247),
    [sym__expression_body] = STATE(244),
    [sym_unary_expression] = STATE(244),
    [sym__binary_expression] = STATE(244),
    [sym_mult_binary_expression] = STATE(244),
    [sym_ternary_expression] = STATE(244),
    [sym_add_binary_expression] = STATE(244),
    [sym_string] = STATE(244),
    [sym_var_identifier] = STATE(244),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(244),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(244),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(244),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__expression] = STATE(206),
    [sym_expression_body_paren] = STATE(206),
    [sym__expression_body] = STATE(206),
    [sym_unary_expression] = STATE(206),
    [sym__binary_expression] = STATE(206),
    [sym_mult_binary_expression] = STATE(206),
    [sym_ternary_expression] = STATE(206),
    [sym_add_binary_expression] = STATE(206),
    [sym_string] = STATE(206),
    [sym_var_identifier] = STATE(206),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(206),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(206),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__expression] = STATE(237),
    [sym_expression_body_paren] = STATE(237),
    [sym__expression_body] = STATE(237),
    [sym_unary_expression] = STATE(237),
    [sym__binary_expression] = STATE(237),
    [sym_mult_binary_expression] = STATE(237),
    [sym_ternary_expression] = STATE(237),
    [sym_add_binary_expression] = STATE(237),
    [sym_string] = STATE(237),
    [sym_var_identifier] = STATE(237),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(237),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(237),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(237),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(193),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(161),
    [sym_value] = STATE(201),
    [sym_color] = STATE(198),
    [sym_value_with_units] = STATE(198),
    [sym_number] = STATE(140),
    [sym_language_constant] = STATE(198),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym__identifier] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_parent] = ACTIONS(89),
    [anon_sym_root] = ACTIONS(89),
    [anon_sym_this] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [sym_int_number] = ACTIONS(93),
    [sym_float_number] = ACTIONS(95),
    [anon_sym_black] = ACTIONS(97),
    [anon_sym_blue] = ACTIONS(97),
    [anon_sym_ease] = ACTIONS(97),
    [anon_sym_ease_DASHin] = ACTIONS(97),
    [anon_sym_ease_in] = ACTIONS(97),
    [anon_sym_ease_in_out] = ACTIONS(97),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(97),
    [anon_sym_ease_out] = ACTIONS(97),
    [anon_sym_ease_DASHout] = ACTIONS(97),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_green] = ACTIONS(97),
    [anon_sym_red] = ACTIONS(97),
    [anon_sym_start] = ACTIONS(97),
    [anon_sym_yellow] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_transparent] = ACTIONS(97),
    [anon_sym_angle] = ACTIONS(99),
    [anon_sym_bool] = ACTIONS(99),
    [anon_sym_brush] = ACTIONS(99),
    [anon_sym_duration] = ACTIONS(99),
    [anon_sym_easing] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_image] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(99),
    [anon_sym_length] = ACTIONS(99),
    [anon_sym_percent] = ACTIONS(99),
    [anon_sym_physical_DASHlength] = ACTIONS(99),
    [anon_sym_physical_length] = ACTIONS(99),
    [anon_sym_string] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__expression] = STATE(205),
    [sym_expression_body_paren] = STATE(205),
    [sym__expression_body] = STATE(205),
    [sym_unary_expression] = STATE(205),
    [sym__binary_expression] = STATE(205),
    [sym_mult_binary_expression] = STATE(205),
    [sym_ternary_expression] = STATE(205),
    [sym_add_binary_expression] = STATE(205),
    [sym_string] = STATE(205),
    [sym_var_identifier] = STATE(205),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(205),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(205),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(205),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__expression] = STATE(211),
    [sym_expression_body_paren] = STATE(211),
    [sym__expression_body] = STATE(211),
    [sym_unary_expression] = STATE(211),
    [sym__binary_expression] = STATE(211),
    [sym_mult_binary_expression] = STATE(211),
    [sym_ternary_expression] = STATE(211),
    [sym_add_binary_expression] = STATE(211),
    [sym_string] = STATE(211),
    [sym_var_identifier] = STATE(211),
    [sym_children_identifier] = STATE(176),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(211),
    [sym_reference_identifier] = STATE(153),
    [sym_value] = STATE(211),
    [sym_color] = STATE(207),
    [sym_value_with_units] = STATE(207),
    [sym_number] = STATE(171),
    [sym_language_constant] = STATE(207),
    [sym_builtin_type_identifier] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(41),
    [anon_sym_root] = ACTIONS(41),
    [anon_sym_this] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [sym_int_number] = ACTIONS(45),
    [sym_float_number] = ACTIONS(47),
    [anon_sym_black] = ACTIONS(49),
    [anon_sym_blue] = ACTIONS(49),
    [anon_sym_ease] = ACTIONS(49),
    [anon_sym_ease_DASHin] = ACTIONS(49),
    [anon_sym_ease_in] = ACTIONS(49),
    [anon_sym_ease_in_out] = ACTIONS(49),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(49),
    [anon_sym_ease_out] = ACTIONS(49),
    [anon_sym_ease_DASHout] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_green] = ACTIONS(49),
    [anon_sym_red] = ACTIONS(49),
    [anon_sym_start] = ACTIONS(49),
    [anon_sym_yellow] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_transparent] = ACTIONS(49),
    [anon_sym_angle] = ACTIONS(51),
    [anon_sym_bool] = ACTIONS(51),
    [anon_sym_brush] = ACTIONS(51),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_easing] = ACTIONS(51),
    [anon_sym_float] = ACTIONS(51),
    [anon_sym_image] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_percent] = ACTIONS(51),
    [anon_sym_physical_DASHlength] = ACTIONS(51),
    [anon_sym_physical_length] = ACTIONS(51),
    [anon_sym_string] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(32), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [102] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(38), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [204] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(34), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [306] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(38), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [408] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(38), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [510] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(35), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [612] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(38), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [714] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COLON_EQ,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_export,
    ACTIONS(151), 1,
      anon_sym_transitions,
    ACTIONS(154), 1,
      anon_sym_states,
    ACTIONS(157), 1,
      anon_sym_animate,
    ACTIONS(163), 1,
      anon_sym_elseif,
    ACTIONS(166), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_property,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_callback,
    ACTIONS(178), 1,
      sym__identifier,
    ACTIONS(181), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(160), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(184), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(187), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(38), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [816] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    ACTIONS(107), 1,
      anon_sym_transitions,
    ACTIONS(109), 1,
      anon_sym_states,
    ACTIONS(111), 1,
      anon_sym_animate,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_property,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_callback,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(50), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(353), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
    STATE(37), 13,
      sym_component_definition,
      sym_transitions_definition,
      sym_states_definition,
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
  [918] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_EQ_GT,
    ACTIONS(202), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(192), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(194), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(200), 14,
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
      anon_sym_physical_length,
      anon_sym_string,
    ACTIONS(196), 15,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_callback,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(206), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(206), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(210), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(214), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(194), 10,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(196), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(218), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(220), 10,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(222), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(226), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(208), 10,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(210), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(196), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 11,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(233), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 11,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(237), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 11,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(241), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 11,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(245), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 11,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(249), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 11,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(253), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(255), 4,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_AT,
    ACTIONS(263), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(259), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_STAR,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(267), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1850] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_global,
    ACTIONS(9), 1,
      anon_sym_COLON_EQ,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_visibility_modifier,
    STATE(125), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(88), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(273), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(277), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [1985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(281), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(285), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(289), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(293), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(297), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(301), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(305), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(309), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(313), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(317), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(321), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(325), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(329), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(333), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(337), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(341), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(345), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(349), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(353), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(357), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(361), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(365), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(369), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(373), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(377), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(381), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [2999] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 1,
      anon_sym_global,
    ACTIONS(388), 1,
      anon_sym_COLON_EQ,
    ACTIONS(391), 1,
      anon_sym_import,
    ACTIONS(394), 1,
      anon_sym_export,
    ACTIONS(397), 1,
      anon_sym_struct,
    ACTIONS(400), 1,
      sym__identifier,
    STATE(115), 1,
      sym_visibility_modifier,
    STATE(125), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(88), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(403), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(408), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(412), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(416), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(420), 26,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(424), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(428), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(432), 15,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3304] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(73), 1,
      sym_component_definition,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(200), 14,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3372] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(86), 1,
      sym_component_definition,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3411] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(82), 1,
      sym_component_definition,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3450] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(66), 1,
      sym_component_definition,
    STATE(139), 1,
      sym_visibility_modifier,
    STATE(117), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(235), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(436), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(231), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(440), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(281), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(442), 1,
      anon_sym_LBRACK,
    STATE(364), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(331), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(285), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(446), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(293), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(267), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(448), 1,
      anon_sym_COLON_EQ,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_component_field_declaration_list,
    STATE(323), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(305), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(273), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3867] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      anon_sym_COLON_EQ,
    STATE(69), 1,
      sym_component_field_declaration_list,
    STATE(328), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3903] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(454), 1,
      anon_sym_global,
    ACTIONS(456), 1,
      anon_sym_COLON_EQ,
    ACTIONS(458), 1,
      anon_sym_struct,
    STATE(111), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(309), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [3967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(460), 1,
      anon_sym_COLON_EQ,
    STATE(58), 1,
      sym_component_field_declaration_list,
    STATE(325), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(464), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(243), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [4059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(468), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(472), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(251), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [4143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(476), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(301), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4199] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(478), 1,
      anon_sym_COLON_EQ,
    STATE(110), 1,
      sym_component_field_declaration_list,
    STATE(311), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(482), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(486), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(490), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(494), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(337), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(498), 18,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(247), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [4431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_struct_field_declaration_list,
    STATE(318), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
    ACTIONS(239), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4491] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_struct_field_declaration_list,
    STATE(308), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON_EQ,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 16,
      anon_sym_global,
      anon_sym_struct,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(287), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(276), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(512), 1,
      anon_sym_COLON_EQ,
    STATE(114), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_PERCENT,
    STATE(200), 1,
      sym_unit_type,
    ACTIONS(518), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(516), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(514), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [4674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(522), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
  [4699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(339), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(305), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(352), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(326), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(329), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(327), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(322), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(316), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(340), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(362), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(324), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [4996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(526), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(194), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(309), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [5052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    ACTIONS(526), 1,
      anon_sym_DOT,
    STATE(160), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(220), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(338), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [5135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(301), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [5162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(166), 1,
      aux_sym_var_identifier_repeat1,
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
      anon_sym_AT,
  [5193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_DOT,
    STATE(160), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(208), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(166), 1,
      aux_sym_var_identifier_repeat1,
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
      anon_sym_AT,
  [5250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(208), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(345), 1,
      sym_builtin_type_identifier,
    ACTIONS(535), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [5326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(345), 1,
      sym_builtin_type_identifier,
    ACTIONS(535), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [5354] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(169), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(222), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(220), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [5382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    ACTIONS(212), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(204), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_DOT,
    STATE(169), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(210), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(208), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [5460] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(345), 1,
      sym_builtin_type_identifier,
    ACTIONS(544), 13,
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
      anon_sym_physical_length,
      anon_sym_string,
  [5488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    STATE(216), 1,
      sym_unit_type,
    ACTIONS(547), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(514), 11,
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
  [5516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(204), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(247), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_SLASH,
    ACTIONS(224), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(216), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(194), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [5631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON_EQ,
    ACTIONS(502), 14,
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
      anon_sym_physical_length,
      anon_sym_string,
  [5654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(212), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5677] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(194), 11,
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
  [5706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(208), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_SLASH,
    ACTIONS(522), 14,
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
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
  [5752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(235), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(243), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(251), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(239), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(231), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [5867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(549), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [5889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(553), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [5911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(557), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [5933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(430), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [5955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(224), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [5977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH,
    ACTIONS(569), 1,
      anon_sym_QMARK,
    ACTIONS(565), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(561), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_AT,
    ACTIONS(563), 5,
      anon_sym_DASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6005] = 3,
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
      anon_sym_AT,
  [6027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(216), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [6049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(571), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [6071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(575), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [6093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(579), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [6115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(514), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [6137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_QMARK,
    ACTIONS(585), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(583), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_AT,
  [6161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(587), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [6183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_QMARK,
    ACTIONS(593), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(591), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_AT,
  [6207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 14,
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
      anon_sym_physical_length,
      anon_sym_string,
  [6227] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH,
    ACTIONS(569), 1,
      anon_sym_QMARK,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_DASH,
    ACTIONS(603), 1,
      anon_sym_PLUS,
    ACTIONS(599), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(565), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(605), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(607), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [6283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH,
    ACTIONS(557), 11,
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
  [6303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SLASH,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(591), 10,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [6325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(514), 11,
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
  [6345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SLASH,
    ACTIONS(579), 11,
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
  [6365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH,
    ACTIONS(607), 11,
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
  [6385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SLASH,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(583), 10,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
  [6407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(561), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
  [6431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH,
    ACTIONS(571), 11,
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
  [6451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SLASH,
    ACTIONS(575), 11,
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
  [6471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(430), 11,
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
  [6491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_SLASH,
    ACTIONS(549), 11,
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
  [6511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SLASH,
    ACTIONS(587), 11,
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
  [6531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SLASH,
    ACTIONS(553), 11,
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
  [6551] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    ACTIONS(619), 1,
      sym__identifier,
    ACTIONS(621), 1,
      anon_sym_AT,
    STATE(153), 1,
      sym_reference_identifier,
    STATE(176), 1,
      sym_children_identifier,
    STATE(223), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(357), 1,
      sym_var_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6584] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      anon_sym_STAR,
    ACTIONS(628), 1,
      sym__identifier,
    ACTIONS(631), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(219), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(361), 1,
      sym_var_identifier,
    ACTIONS(634), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6617] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(222), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(361), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6650] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(619), 1,
      sym__identifier,
    ACTIONS(621), 1,
      anon_sym_AT,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      sym_reference_identifier,
    STATE(176), 1,
      sym_children_identifier,
    STATE(218), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(357), 1,
      sym_var_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6683] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_children_identifier,
    STATE(219), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(361), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6716] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      anon_sym_STAR,
    ACTIONS(652), 1,
      sym__identifier,
    ACTIONS(655), 1,
      anon_sym_AT,
    STATE(153), 1,
      sym_reference_identifier,
    STATE(176), 1,
      sym_children_identifier,
    STATE(223), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(357), 1,
      sym_var_identifier,
    ACTIONS(658), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6749] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(661), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym_component_field_declaration_list,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6777] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(268), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6804] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(350), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6854] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(359), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6881] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(348), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6908] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(619), 1,
      sym__identifier,
    ACTIONS(621), 1,
      anon_sym_AT,
    STATE(153), 1,
      sym_reference_identifier,
    STATE(176), 1,
      sym_children_identifier,
    STATE(293), 1,
      sym_var_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(334), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6962] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(317), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6989] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(355), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_children_identifier,
    STATE(239), 1,
      sym_reference_identifier,
    STATE(333), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(667), 1,
      anon_sym_DOT,
    STATE(241), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(220), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [7063] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(669), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(673), 1,
      anon_sym_COLON,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(667), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(194), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [7149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      anon_sym_SLASH,
    ACTIONS(677), 6,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COLON,
    ACTIONS(681), 1,
      anon_sym_DOT,
    STATE(241), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(208), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [7187] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(684), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(686), 1,
      anon_sym_COLON,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_SLASH,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(677), 6,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [7249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(273), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(696), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(700), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(305), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__identifier,
    ACTIONS(704), 1,
      anon_sym_AT,
    STATE(172), 1,
      sym_function_call,
    STATE(180), 1,
      sym_post_identifier,
    STATE(281), 1,
      sym_function_identifier,
  [7391] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(706), 1,
      sym__identifier,
    STATE(162), 1,
      sym_function_call,
    STATE(163), 1,
      sym_post_identifier,
    STATE(289), 1,
      sym_function_identifier,
  [7410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(708), 1,
      sym__identifier,
    STATE(42), 1,
      sym_function_call,
    STATE(43), 1,
      sym_post_identifier,
    STATE(289), 1,
      sym_function_identifier,
  [7429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(708), 1,
      sym__identifier,
    STATE(42), 1,
      sym_function_call,
    STATE(43), 1,
      sym_post_identifier,
    STATE(285), 1,
      sym_function_identifier,
  [7448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    ACTIONS(714), 1,
      anon_sym_DASH_GT,
    STATE(101), 1,
      sym_formal_parameters,
    STATE(304), 1,
      sym_call_signature,
  [7467] = 4,
    ACTIONS(716), 1,
      anon_sym_SQUOTE,
    ACTIONS(720), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_string_repeat2,
    ACTIONS(718), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7481] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SQUOTE,
    STATE(272), 1,
      aux_sym_string_repeat2,
    ACTIONS(724), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_list_definition_repeat1,
    STATE(286), 1,
      sym_struct_field_declaration_list,
  [7511] = 4,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(720), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_string_repeat1,
    ACTIONS(728), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7525] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DQUOTE,
    STATE(274), 1,
      aux_sym_string_repeat1,
    ACTIONS(732), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_list_definition_repeat1,
    STATE(286), 1,
      sym_struct_field_declaration_list,
  [7555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(741), 2,
      anon_sym_in,
      anon_sym_out,
  [7579] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SQUOTE,
    STATE(272), 1,
      aux_sym_string_repeat2,
    ACTIONS(724), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7593] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    STATE(273), 1,
      aux_sym_string_repeat1,
    ACTIONS(747), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(741), 2,
      anon_sym_in,
      anon_sym_out,
  [7621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      sym_property_expr,
    ACTIONS(753), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [7635] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      aux_sym_string_repeat2,
    ACTIONS(755), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      aux_sym_list_definition_repeat1,
    STATE(286), 1,
      sym_struct_field_declaration_list,
  [7665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(759), 2,
      anon_sym_in,
      anon_sym_out,
  [7679] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(272), 1,
      aux_sym_string_repeat2,
    ACTIONS(766), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7693] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_DQUOTE,
    STATE(274), 1,
      aux_sym_string_repeat1,
    ACTIONS(732), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7707] = 4,
    ACTIONS(720), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    STATE(274), 1,
      aux_sym_string_repeat1,
    ACTIONS(771), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [7734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
  [7747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_formal_parameters_repeat1,
  [7760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_formal_parameters_repeat1,
  [7773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      sym_string,
  [7786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(256), 1,
      sym_function_identifier,
  [7799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_formal_parameters,
    STATE(185), 1,
      sym_call_signature,
  [7812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [7825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_formal_parameters_repeat1,
  [7838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_formal_parameters_repeat1,
  [7851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_formal_parameters,
    STATE(53), 1,
      sym_call_signature,
  [7864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(803), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
  [7888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      sym_string,
  [7901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_formal_parameters,
    STATE(134), 1,
      sym_call_signature,
  [7914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      sym_string,
  [7927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [7936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 1,
      anon_sym_in,
    STATE(354), 1,
      sym_for_loop_index,
  [7958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_formal_parameters_repeat1,
  [7971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [7984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_formal_parameters_repeat1,
  [7997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_formal_parameters_repeat1,
  [8019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_component_field_declaration_list,
  [8038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_component_field_declaration_list,
  [8048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__identifier,
    ACTIONS(830), 1,
      anon_sym_children,
  [8058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_SEMI,
    ACTIONS(834), 1,
      anon_sym_DASH_GT,
  [8076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_component_field_declaration_list,
  [8086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__identifier,
    ACTIONS(836), 1,
      anon_sym_children,
  [8096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__identifier,
    ACTIONS(838), 1,
      anon_sym_children,
  [8106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_struct_field_declaration_list,
  [8116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_color_token1,
    ACTIONS(842), 1,
      aux_sym_color_token2,
  [8134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_component_field_declaration_list,
  [8144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      sym_component_field_declaration_list,
  [8154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_states_list_definition,
  [8164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_transitions_list_definition,
  [8182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_component_field_declaration_list,
  [8192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_animate_declaration_list,
  [8202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_struct_field_declaration_list,
  [8212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_component_field_declaration_list,
  [8222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(249), 1,
      sym_component_field_declaration_list,
  [8232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym_color_token1,
    ACTIONS(856), 1,
      aux_sym_color_token2,
  [8242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_component_field_declaration_list,
  [8252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_component_field_declaration_list,
  [8262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_component_field_declaration_list,
  [8272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_component_field_declaration_list,
  [8282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_component_field_declaration_list,
  [8292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_component_field_declaration_list,
  [8302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_component_field_declaration_list,
  [8312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_component_field_declaration_list,
  [8322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_component_field_declaration_list,
  [8332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_GT,
  [8339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [8346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
  [8353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COLON_EQ,
  [8360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_SEMI,
  [8367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_from,
  [8374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_children,
  [8381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACK,
  [8388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_SEMI,
  [8395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COLON_EQ,
  [8402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SEMI,
  [8409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_from,
  [8416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
  [8423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_LT,
  [8430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_COLON,
  [8437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_SEMI,
  [8444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_in,
  [8451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COLON,
  [8458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_SEMI,
  [8465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_COLON,
  [8472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_GT,
  [8479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_COLON_EQ,
  [8486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_EQ_GT,
  [8493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_in,
  [8500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COLON_EQ,
  [8507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_children,
  [8514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_when,
  [8521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_from,
  [8528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_COLON,
  [8535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym__identifier,
  [8542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_COLON,
  [8549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_SEMI,
  [8556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
  [8563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_GT,
  [8570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
  [8577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 102,
  [SMALL_STATE(33)] = 204,
  [SMALL_STATE(34)] = 306,
  [SMALL_STATE(35)] = 408,
  [SMALL_STATE(36)] = 510,
  [SMALL_STATE(37)] = 612,
  [SMALL_STATE(38)] = 714,
  [SMALL_STATE(39)] = 816,
  [SMALL_STATE(40)] = 918,
  [SMALL_STATE(41)] = 978,
  [SMALL_STATE(42)] = 1030,
  [SMALL_STATE(43)] = 1079,
  [SMALL_STATE(44)] = 1128,
  [SMALL_STATE(45)] = 1177,
  [SMALL_STATE(46)] = 1229,
  [SMALL_STATE(47)] = 1277,
  [SMALL_STATE(48)] = 1329,
  [SMALL_STATE(49)] = 1377,
  [SMALL_STATE(50)] = 1429,
  [SMALL_STATE(51)] = 1477,
  [SMALL_STATE(52)] = 1524,
  [SMALL_STATE(53)] = 1571,
  [SMALL_STATE(54)] = 1618,
  [SMALL_STATE(55)] = 1665,
  [SMALL_STATE(56)] = 1712,
  [SMALL_STATE(57)] = 1759,
  [SMALL_STATE(58)] = 1811,
  [SMALL_STATE(59)] = 1850,
  [SMALL_STATE(60)] = 1907,
  [SMALL_STATE(61)] = 1946,
  [SMALL_STATE(62)] = 1985,
  [SMALL_STATE(63)] = 2024,
  [SMALL_STATE(64)] = 2063,
  [SMALL_STATE(65)] = 2102,
  [SMALL_STATE(66)] = 2141,
  [SMALL_STATE(67)] = 2180,
  [SMALL_STATE(68)] = 2219,
  [SMALL_STATE(69)] = 2258,
  [SMALL_STATE(70)] = 2297,
  [SMALL_STATE(71)] = 2336,
  [SMALL_STATE(72)] = 2375,
  [SMALL_STATE(73)] = 2414,
  [SMALL_STATE(74)] = 2453,
  [SMALL_STATE(75)] = 2492,
  [SMALL_STATE(76)] = 2531,
  [SMALL_STATE(77)] = 2570,
  [SMALL_STATE(78)] = 2609,
  [SMALL_STATE(79)] = 2648,
  [SMALL_STATE(80)] = 2687,
  [SMALL_STATE(81)] = 2726,
  [SMALL_STATE(82)] = 2765,
  [SMALL_STATE(83)] = 2804,
  [SMALL_STATE(84)] = 2843,
  [SMALL_STATE(85)] = 2882,
  [SMALL_STATE(86)] = 2921,
  [SMALL_STATE(87)] = 2960,
  [SMALL_STATE(88)] = 2999,
  [SMALL_STATE(89)] = 3056,
  [SMALL_STATE(90)] = 3095,
  [SMALL_STATE(91)] = 3134,
  [SMALL_STATE(92)] = 3173,
  [SMALL_STATE(93)] = 3212,
  [SMALL_STATE(94)] = 3243,
  [SMALL_STATE(95)] = 3274,
  [SMALL_STATE(96)] = 3304,
  [SMALL_STATE(97)] = 3343,
  [SMALL_STATE(98)] = 3372,
  [SMALL_STATE(99)] = 3411,
  [SMALL_STATE(100)] = 3450,
  [SMALL_STATE(101)] = 3489,
  [SMALL_STATE(102)] = 3517,
  [SMALL_STATE(103)] = 3545,
  [SMALL_STATE(104)] = 3573,
  [SMALL_STATE(105)] = 3601,
  [SMALL_STATE(106)] = 3629,
  [SMALL_STATE(107)] = 3663,
  [SMALL_STATE(108)] = 3691,
  [SMALL_STATE(109)] = 3719,
  [SMALL_STATE(110)] = 3747,
  [SMALL_STATE(111)] = 3775,
  [SMALL_STATE(112)] = 3811,
  [SMALL_STATE(113)] = 3839,
  [SMALL_STATE(114)] = 3867,
  [SMALL_STATE(115)] = 3903,
  [SMALL_STATE(116)] = 3939,
  [SMALL_STATE(117)] = 3967,
  [SMALL_STATE(118)] = 4003,
  [SMALL_STATE(119)] = 4031,
  [SMALL_STATE(120)] = 4059,
  [SMALL_STATE(121)] = 4087,
  [SMALL_STATE(122)] = 4115,
  [SMALL_STATE(123)] = 4143,
  [SMALL_STATE(124)] = 4171,
  [SMALL_STATE(125)] = 4199,
  [SMALL_STATE(126)] = 4235,
  [SMALL_STATE(127)] = 4263,
  [SMALL_STATE(128)] = 4291,
  [SMALL_STATE(129)] = 4319,
  [SMALL_STATE(130)] = 4347,
  [SMALL_STATE(131)] = 4375,
  [SMALL_STATE(132)] = 4403,
  [SMALL_STATE(133)] = 4431,
  [SMALL_STATE(134)] = 4464,
  [SMALL_STATE(135)] = 4491,
  [SMALL_STATE(136)] = 4524,
  [SMALL_STATE(137)] = 4552,
  [SMALL_STATE(138)] = 4582,
  [SMALL_STATE(139)] = 4612,
  [SMALL_STATE(140)] = 4642,
  [SMALL_STATE(141)] = 4674,
  [SMALL_STATE(142)] = 4699,
  [SMALL_STATE(143)] = 4726,
  [SMALL_STATE(144)] = 4753,
  [SMALL_STATE(145)] = 4780,
  [SMALL_STATE(146)] = 4807,
  [SMALL_STATE(147)] = 4834,
  [SMALL_STATE(148)] = 4861,
  [SMALL_STATE(149)] = 4888,
  [SMALL_STATE(150)] = 4915,
  [SMALL_STATE(151)] = 4942,
  [SMALL_STATE(152)] = 4969,
  [SMALL_STATE(153)] = 4996,
  [SMALL_STATE(154)] = 5025,
  [SMALL_STATE(155)] = 5052,
  [SMALL_STATE(156)] = 5081,
  [SMALL_STATE(157)] = 5108,
  [SMALL_STATE(158)] = 5135,
  [SMALL_STATE(159)] = 5162,
  [SMALL_STATE(160)] = 5193,
  [SMALL_STATE(161)] = 5222,
  [SMALL_STATE(162)] = 5250,
  [SMALL_STATE(163)] = 5274,
  [SMALL_STATE(164)] = 5298,
  [SMALL_STATE(165)] = 5326,
  [SMALL_STATE(166)] = 5354,
  [SMALL_STATE(167)] = 5382,
  [SMALL_STATE(168)] = 5406,
  [SMALL_STATE(169)] = 5432,
  [SMALL_STATE(170)] = 5460,
  [SMALL_STATE(171)] = 5488,
  [SMALL_STATE(172)] = 5516,
  [SMALL_STATE(173)] = 5539,
  [SMALL_STATE(174)] = 5562,
  [SMALL_STATE(175)] = 5585,
  [SMALL_STATE(176)] = 5608,
  [SMALL_STATE(177)] = 5631,
  [SMALL_STATE(178)] = 5654,
  [SMALL_STATE(179)] = 5677,
  [SMALL_STATE(180)] = 5706,
  [SMALL_STATE(181)] = 5729,
  [SMALL_STATE(182)] = 5752,
  [SMALL_STATE(183)] = 5775,
  [SMALL_STATE(184)] = 5798,
  [SMALL_STATE(185)] = 5821,
  [SMALL_STATE(186)] = 5844,
  [SMALL_STATE(187)] = 5867,
  [SMALL_STATE(188)] = 5889,
  [SMALL_STATE(189)] = 5911,
  [SMALL_STATE(190)] = 5933,
  [SMALL_STATE(191)] = 5955,
  [SMALL_STATE(192)] = 5977,
  [SMALL_STATE(193)] = 6005,
  [SMALL_STATE(194)] = 6027,
  [SMALL_STATE(195)] = 6049,
  [SMALL_STATE(196)] = 6071,
  [SMALL_STATE(197)] = 6093,
  [SMALL_STATE(198)] = 6115,
  [SMALL_STATE(199)] = 6137,
  [SMALL_STATE(200)] = 6161,
  [SMALL_STATE(201)] = 6183,
  [SMALL_STATE(202)] = 6207,
  [SMALL_STATE(203)] = 6227,
  [SMALL_STATE(204)] = 6261,
  [SMALL_STATE(205)] = 6283,
  [SMALL_STATE(206)] = 6303,
  [SMALL_STATE(207)] = 6325,
  [SMALL_STATE(208)] = 6345,
  [SMALL_STATE(209)] = 6365,
  [SMALL_STATE(210)] = 6385,
  [SMALL_STATE(211)] = 6407,
  [SMALL_STATE(212)] = 6431,
  [SMALL_STATE(213)] = 6451,
  [SMALL_STATE(214)] = 6471,
  [SMALL_STATE(215)] = 6491,
  [SMALL_STATE(216)] = 6511,
  [SMALL_STATE(217)] = 6531,
  [SMALL_STATE(218)] = 6551,
  [SMALL_STATE(219)] = 6584,
  [SMALL_STATE(220)] = 6617,
  [SMALL_STATE(221)] = 6650,
  [SMALL_STATE(222)] = 6683,
  [SMALL_STATE(223)] = 6716,
  [SMALL_STATE(224)] = 6749,
  [SMALL_STATE(225)] = 6777,
  [SMALL_STATE(226)] = 6804,
  [SMALL_STATE(227)] = 6831,
  [SMALL_STATE(228)] = 6854,
  [SMALL_STATE(229)] = 6881,
  [SMALL_STATE(230)] = 6908,
  [SMALL_STATE(231)] = 6935,
  [SMALL_STATE(232)] = 6962,
  [SMALL_STATE(233)] = 6989,
  [SMALL_STATE(234)] = 7016,
  [SMALL_STATE(235)] = 7043,
  [SMALL_STATE(236)] = 7063,
  [SMALL_STATE(237)] = 7085,
  [SMALL_STATE(238)] = 7107,
  [SMALL_STATE(239)] = 7129,
  [SMALL_STATE(240)] = 7149,
  [SMALL_STATE(241)] = 7167,
  [SMALL_STATE(242)] = 7187,
  [SMALL_STATE(243)] = 7209,
  [SMALL_STATE(244)] = 7231,
  [SMALL_STATE(245)] = 7249,
  [SMALL_STATE(246)] = 7271,
  [SMALL_STATE(247)] = 7293,
  [SMALL_STATE(248)] = 7312,
  [SMALL_STATE(249)] = 7327,
  [SMALL_STATE(250)] = 7342,
  [SMALL_STATE(251)] = 7357,
  [SMALL_STATE(252)] = 7372,
  [SMALL_STATE(253)] = 7391,
  [SMALL_STATE(254)] = 7410,
  [SMALL_STATE(255)] = 7429,
  [SMALL_STATE(256)] = 7448,
  [SMALL_STATE(257)] = 7467,
  [SMALL_STATE(258)] = 7481,
  [SMALL_STATE(259)] = 7495,
  [SMALL_STATE(260)] = 7511,
  [SMALL_STATE(261)] = 7525,
  [SMALL_STATE(262)] = 7539,
  [SMALL_STATE(263)] = 7555,
  [SMALL_STATE(264)] = 7565,
  [SMALL_STATE(265)] = 7579,
  [SMALL_STATE(266)] = 7593,
  [SMALL_STATE(267)] = 7607,
  [SMALL_STATE(268)] = 7621,
  [SMALL_STATE(269)] = 7635,
  [SMALL_STATE(270)] = 7649,
  [SMALL_STATE(271)] = 7665,
  [SMALL_STATE(272)] = 7679,
  [SMALL_STATE(273)] = 7693,
  [SMALL_STATE(274)] = 7707,
  [SMALL_STATE(275)] = 7721,
  [SMALL_STATE(276)] = 7734,
  [SMALL_STATE(277)] = 7747,
  [SMALL_STATE(278)] = 7760,
  [SMALL_STATE(279)] = 7773,
  [SMALL_STATE(280)] = 7786,
  [SMALL_STATE(281)] = 7799,
  [SMALL_STATE(282)] = 7812,
  [SMALL_STATE(283)] = 7825,
  [SMALL_STATE(284)] = 7838,
  [SMALL_STATE(285)] = 7851,
  [SMALL_STATE(286)] = 7864,
  [SMALL_STATE(287)] = 7875,
  [SMALL_STATE(288)] = 7888,
  [SMALL_STATE(289)] = 7901,
  [SMALL_STATE(290)] = 7914,
  [SMALL_STATE(291)] = 7927,
  [SMALL_STATE(292)] = 7936,
  [SMALL_STATE(293)] = 7945,
  [SMALL_STATE(294)] = 7958,
  [SMALL_STATE(295)] = 7971,
  [SMALL_STATE(296)] = 7984,
  [SMALL_STATE(297)] = 7997,
  [SMALL_STATE(298)] = 8006,
  [SMALL_STATE(299)] = 8019,
  [SMALL_STATE(300)] = 8028,
  [SMALL_STATE(301)] = 8038,
  [SMALL_STATE(302)] = 8048,
  [SMALL_STATE(303)] = 8058,
  [SMALL_STATE(304)] = 8066,
  [SMALL_STATE(305)] = 8076,
  [SMALL_STATE(306)] = 8086,
  [SMALL_STATE(307)] = 8096,
  [SMALL_STATE(308)] = 8106,
  [SMALL_STATE(309)] = 8116,
  [SMALL_STATE(310)] = 8124,
  [SMALL_STATE(311)] = 8134,
  [SMALL_STATE(312)] = 8144,
  [SMALL_STATE(313)] = 8154,
  [SMALL_STATE(314)] = 8164,
  [SMALL_STATE(315)] = 8172,
  [SMALL_STATE(316)] = 8182,
  [SMALL_STATE(317)] = 8192,
  [SMALL_STATE(318)] = 8202,
  [SMALL_STATE(319)] = 8212,
  [SMALL_STATE(320)] = 8222,
  [SMALL_STATE(321)] = 8232,
  [SMALL_STATE(322)] = 8242,
  [SMALL_STATE(323)] = 8252,
  [SMALL_STATE(324)] = 8262,
  [SMALL_STATE(325)] = 8272,
  [SMALL_STATE(326)] = 8282,
  [SMALL_STATE(327)] = 8292,
  [SMALL_STATE(328)] = 8302,
  [SMALL_STATE(329)] = 8312,
  [SMALL_STATE(330)] = 8322,
  [SMALL_STATE(331)] = 8332,
  [SMALL_STATE(332)] = 8339,
  [SMALL_STATE(333)] = 8346,
  [SMALL_STATE(334)] = 8353,
  [SMALL_STATE(335)] = 8360,
  [SMALL_STATE(336)] = 8367,
  [SMALL_STATE(337)] = 8374,
  [SMALL_STATE(338)] = 8381,
  [SMALL_STATE(339)] = 8388,
  [SMALL_STATE(340)] = 8395,
  [SMALL_STATE(341)] = 8402,
  [SMALL_STATE(342)] = 8409,
  [SMALL_STATE(343)] = 8416,
  [SMALL_STATE(344)] = 8423,
  [SMALL_STATE(345)] = 8430,
  [SMALL_STATE(346)] = 8437,
  [SMALL_STATE(347)] = 8444,
  [SMALL_STATE(348)] = 8451,
  [SMALL_STATE(349)] = 8458,
  [SMALL_STATE(350)] = 8465,
  [SMALL_STATE(351)] = 8472,
  [SMALL_STATE(352)] = 8479,
  [SMALL_STATE(353)] = 8486,
  [SMALL_STATE(354)] = 8493,
  [SMALL_STATE(355)] = 8500,
  [SMALL_STATE(356)] = 8507,
  [SMALL_STATE(357)] = 8514,
  [SMALL_STATE(358)] = 8521,
  [SMALL_STATE(359)] = 8528,
  [SMALL_STATE(360)] = 8535,
  [SMALL_STATE(361)] = 8542,
  [SMALL_STATE(362)] = 8549,
  [SMALL_STATE(363)] = 8556,
  [SMALL_STATE(364)] = 8563,
  [SMALL_STATE(365)] = 8570,
  [SMALL_STATE(366)] = 8577,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(148),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(177),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(315),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(313),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(232),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(230),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(344),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(48),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(280),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(40),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(306),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(44),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(95),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type_identifier, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(255),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 10),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 10),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 9),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 9),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 20),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 20),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 7),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 7),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 11),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 11),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 20),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 20),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 17),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 17),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 18),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 18),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 14),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 14),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 16),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 16),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 12),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 12),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(253),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(252),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(95),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 17),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 17),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(48),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(239),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(356),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(44),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(174),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(153),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(337),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(167),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(254),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 17),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 17),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2), SHIFT_REPEAT(220),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(228),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(272),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(274),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(154),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 13),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_index, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 19),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [920] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 3),
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
