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
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
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
  anon_sym_GT_EQ = 45,
  anon_sym_LT_EQ = 46,
  anon_sym_DQUOTE = 47,
  anon_sym_SQUOTE = 48,
  sym_unescaped_double_string_fragment = 49,
  sym_unescaped_single_string_fragment = 50,
  sym_escape_sequence = 51,
  sym__identifier = 52,
  anon_sym_DOT = 53,
  anon_sym_AT = 54,
  anon_sym_children = 55,
  anon_sym_parent = 56,
  anon_sym_root = 57,
  anon_sym_this = 58,
  anon_sym_POUND = 59,
  aux_sym_color_token1 = 60,
  aux_sym_color_token2 = 61,
  sym_int_number = 62,
  sym_float_number = 63,
  anon_sym_px = 64,
  anon_sym_PERCENT = 65,
  anon_sym_ms = 66,
  anon_sym_black = 67,
  anon_sym_blue = 68,
  anon_sym_ease = 69,
  anon_sym_ease_DASHin = 70,
  anon_sym_ease_in = 71,
  anon_sym_ease_in_out = 72,
  anon_sym_ease_DASHin_DASHout = 73,
  anon_sym_ease_out = 74,
  anon_sym_ease_DASHout = 75,
  anon_sym_end = 76,
  anon_sym_green = 77,
  anon_sym_red = 78,
  anon_sym_start = 79,
  anon_sym_yellow = 80,
  anon_sym_true = 81,
  anon_sym_false = 82,
  anon_sym_transparent = 83,
  anon_sym_angle = 84,
  anon_sym_bool = 85,
  anon_sym_brush = 86,
  anon_sym_duration = 87,
  anon_sym_easing = 88,
  anon_sym_float = 89,
  anon_sym_image = 90,
  anon_sym_int = 91,
  anon_sym_length = 92,
  anon_sym_percent = 93,
  anon_sym_physical_DASHlength = 94,
  anon_sym_physical_length = 95,
  anon_sym_string = 96,
  sym_comment = 97,
  sym_source_file = 98,
  sym__definition = 99,
  sym_global_definition = 100,
  sym_import_statement = 101,
  sym_export_statement = 102,
  sym_struct_definition = 103,
  sym_struct_field_declaration_list = 104,
  sym_component_definition = 105,
  sym_field_declaration_list = 106,
  sym_transitions_definition = 107,
  sym_transitions_list_definition = 108,
  sym_states_definition = 109,
  sym_states_list_definition = 110,
  sym_animate_statement = 111,
  sym_animate_declaration_list = 112,
  sym_callback_event = 113,
  sym_callback_call = 114,
  sym_if_statement_definition = 115,
  sym_for_loop_definition = 116,
  sym_property_definition = 117,
  sym_property_expr = 118,
  sym__propterty_kind = 119,
  sym_property_type_list = 120,
  sym_list_definition = 121,
  sym_variable_definition = 122,
  sym_variable_set_equal = 123,
  sym__expression = 124,
  sym_expression_body_paren = 125,
  sym__expression_body = 126,
  sym_unary_expression = 127,
  sym__binary_expression = 128,
  sym_comparison_binary_expression = 129,
  sym_mult_binary_expression = 130,
  sym_ternary_expression = 131,
  sym_add_binary_expression = 132,
  sym_subtraction_operator = 133,
  sym_callback_definition = 134,
  sym_call_signature = 135,
  sym_formal_parameters = 136,
  sym_formal_parameter = 137,
  sym_comparison_operator = 138,
  sym_string = 139,
  sym_visibility_modifier = 140,
  sym_post_identifier = 141,
  sym_user_type_identifier = 142,
  sym__type_identifier = 143,
  sym_var_identifier = 144,
  sym_children_identifier = 145,
  sym_index_operator = 146,
  sym_function_identifier = 147,
  sym_function_call = 148,
  sym_reference_identifier = 149,
  sym_value = 150,
  sym_color = 151,
  sym_value_with_units = 152,
  sym_number = 153,
  sym_unit_type = 154,
  sym_language_constant = 155,
  sym_builtin_type_identifier = 156,
  aux_sym_source_file_repeat1 = 157,
  aux_sym_import_statement_repeat1 = 158,
  aux_sym_struct_field_declaration_list_repeat1 = 159,
  aux_sym_field_declaration_list_repeat1 = 160,
  aux_sym_transitions_list_definition_repeat1 = 161,
  aux_sym_states_list_definition_repeat1 = 162,
  aux_sym_animate_declaration_list_repeat1 = 163,
  aux_sym_list_definition_repeat1 = 164,
  aux_sym_formal_parameters_repeat1 = 165,
  aux_sym_string_repeat1 = 166,
  aux_sym_string_repeat2 = 167,
  aux_sym_var_identifier_repeat1 = 168,
  alias_sym_state_identifier = 169,
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
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
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
  [sym_field_declaration_list] = "field_declaration_list",
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
  [sym_comparison_binary_expression] = "comparison_binary_expression",
  [sym_mult_binary_expression] = "mult_binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_add_binary_expression] = "add_binary_expression",
  [sym_subtraction_operator] = "subtraction_operator",
  [sym_callback_definition] = "callback_definition",
  [sym_call_signature] = "call_signature",
  [sym_formal_parameters] = "formal_parameters",
  [sym_formal_parameter] = "formal_parameter",
  [sym_comparison_operator] = "comparison_operator",
  [sym_string] = "string",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_post_identifier] = "post_identifier",
  [sym_user_type_identifier] = "user_type_identifier",
  [sym__type_identifier] = "_type_identifier",
  [sym_var_identifier] = "var_identifier",
  [sym_children_identifier] = "children_identifier",
  [sym_index_operator] = "index_operator",
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
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_transitions_list_definition_repeat1] = "transitions_list_definition_repeat1",
  [aux_sym_states_list_definition_repeat1] = "states_list_definition_repeat1",
  [aux_sym_animate_declaration_list_repeat1] = "animate_declaration_list_repeat1",
  [aux_sym_list_definition_repeat1] = "list_definition_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_var_identifier_repeat1] = "var_identifier_repeat1",
  [alias_sym_state_identifier] = "state_identifier",
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
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
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
  [sym_field_declaration_list] = sym_field_declaration_list,
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
  [sym_comparison_binary_expression] = sym_comparison_binary_expression,
  [sym_mult_binary_expression] = sym_mult_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_add_binary_expression] = sym_add_binary_expression,
  [sym_subtraction_operator] = sym_subtraction_operator,
  [sym_callback_definition] = sym_callback_definition,
  [sym_call_signature] = sym_call_signature,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_formal_parameter] = sym_formal_parameter,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_string] = sym_string,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_post_identifier] = sym_post_identifier,
  [sym_user_type_identifier] = sym_user_type_identifier,
  [sym__type_identifier] = sym__type_identifier,
  [sym_var_identifier] = sym_var_identifier,
  [sym_children_identifier] = sym_children_identifier,
  [sym_index_operator] = sym_index_operator,
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
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_transitions_list_definition_repeat1] = aux_sym_transitions_list_definition_repeat1,
  [aux_sym_states_list_definition_repeat1] = aux_sym_states_list_definition_repeat1,
  [aux_sym_animate_declaration_list_repeat1] = aux_sym_animate_declaration_list_repeat1,
  [aux_sym_list_definition_repeat1] = aux_sym_list_definition_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_var_identifier_repeat1] = aux_sym_var_identifier_repeat1,
  [alias_sym_state_identifier] = alias_sym_state_identifier,
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [sym_field_declaration_list] = {
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
  [sym_comparison_binary_expression] = {
    .visible = true,
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
  [sym_subtraction_operator] = {
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
  [sym_comparison_operator] = {
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
  [sym_index_operator] = {
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
  [aux_sym_field_declaration_list_repeat1] = {
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
  [alias_sym_state_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_match_all = 1,
  field_name = 2,
  field_parameters = 3,
  field_prev_name = 4,
  field_super_type = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_match_all] = "match_all",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_prev_name] = "prev_name",
  [field_super_type] = "super_type",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 1},
  [18] = {.index = 23, .length = 1},
  [19] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_match_all, 0},
  [1] =
    {field_super_type, 0},
  [2] =
    {field_super_type, 1},
  [3] =
    {field_name, 0},
    {field_super_type, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_super_type, 2},
  [7] =
    {field_name, 1},
    {field_super_type, 2},
  [9] =
    {field_name, 0},
    {field_super_type, 2},
  [11] =
    {field_parameters, 0},
  [12] =
    {field_name, 1},
    {field_super_type, 3},
  [14] =
    {field_name, 2},
  [15] =
    {field_type, 0},
  [16] =
    {field_name, 1, .inherited = true},
  [17] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [19] =
    {field_name, 2},
    {field_super_type, 4},
  [21] =
    {field_name, 0},
  [22] =
    {field_prev_name, 0},
  [23] =
    {field_type, 1},
  [24] =
    {field_name, 4},
    {field_type, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [20] = {
    [0] = alias_sym_state_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_var_identifier, 2,
    sym_var_identifier,
    alias_sym_state_identifier,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 6,
  [10] = 3,
  [11] = 6,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 14,
  [20] = 16,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 22,
  [30] = 27,
  [31] = 31,
  [32] = 16,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 35,
  [39] = 39,
  [40] = 37,
  [41] = 35,
  [42] = 37,
  [43] = 37,
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
  [101] = 101,
  [102] = 102,
  [103] = 60,
  [104] = 56,
  [105] = 57,
  [106] = 62,
  [107] = 58,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 61,
  [114] = 47,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 48,
  [120] = 120,
  [121] = 121,
  [122] = 48,
  [123] = 55,
  [124] = 124,
  [125] = 110,
  [126] = 49,
  [127] = 47,
  [128] = 54,
  [129] = 49,
  [130] = 51,
  [131] = 131,
  [132] = 52,
  [133] = 55,
  [134] = 124,
  [135] = 135,
  [136] = 136,
  [137] = 50,
  [138] = 138,
  [139] = 53,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 97,
  [152] = 89,
  [153] = 153,
  [154] = 154,
  [155] = 91,
  [156] = 156,
  [157] = 153,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 87,
  [163] = 58,
  [164] = 53,
  [165] = 56,
  [166] = 166,
  [167] = 101,
  [168] = 57,
  [169] = 50,
  [170] = 60,
  [171] = 52,
  [172] = 76,
  [173] = 78,
  [174] = 51,
  [175] = 159,
  [176] = 79,
  [177] = 62,
  [178] = 59,
  [179] = 136,
  [180] = 61,
  [181] = 181,
  [182] = 54,
  [183] = 96,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 64,
  [188] = 147,
  [189] = 59,
  [190] = 190,
  [191] = 63,
  [192] = 65,
  [193] = 154,
  [194] = 66,
  [195] = 145,
  [196] = 161,
  [197] = 197,
  [198] = 160,
  [199] = 66,
  [200] = 200,
  [201] = 64,
  [202] = 63,
  [203] = 203,
  [204] = 68,
  [205] = 205,
  [206] = 206,
  [207] = 65,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 208,
  [214] = 210,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 218,
  [220] = 217,
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
  [232] = 228,
  [233] = 231,
  [234] = 234,
  [235] = 228,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 47,
  [252] = 252,
  [253] = 48,
  [254] = 254,
  [255] = 255,
  [256] = 55,
  [257] = 257,
  [258] = 258,
  [259] = 97,
  [260] = 87,
  [261] = 261,
  [262] = 262,
  [263] = 261,
  [264] = 261,
  [265] = 261,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 97,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 282,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 284,
  [292] = 292,
  [293] = 282,
  [294] = 288,
  [295] = 295,
  [296] = 284,
  [297] = 297,
  [298] = 87,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 288,
  [304] = 304,
  [305] = 305,
  [306] = 304,
  [307] = 305,
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
  [320] = 311,
  [321] = 321,
  [322] = 322,
  [323] = 311,
  [324] = 324,
  [325] = 310,
  [326] = 326,
  [327] = 321,
  [328] = 322,
  [329] = 326,
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
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 345,
  [364] = 364,
  [365] = 365,
  [366] = 366,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      if (lookahead == '!') ADVANCE(316);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '/') ADVANCE(322);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(306);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '@') ADVANCE(550);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(261)
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == 'y') ADVANCE(100);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(32)
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
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == 'x') ADVANCE(254);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(26)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(316);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == '@') ADVANCE(550);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'y') ADVANCE(393);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '@') ADVANCE(550);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'm') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 34:
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '@') ADVANCE(550);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 35:
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 36:
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '&') ADVANCE(319);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '=') ADVANCE(306);
      if (lookahead == '@') ADVANCE(550);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '@') ADVANCE(550);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(630);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '_') ADVANCE(151);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'g') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '@') ADVANCE(550);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(307);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(308);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(268);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(328);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(188);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == 'x') ADVANCE(564);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(587);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(591);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(296);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(611);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(627);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(607);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(619);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(623);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(625);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(569);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(326);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(605);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(274);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 243:
      if (lookahead == 'w') ADVANCE(595);
      END_STATE();
    case 244:
      if (lookahead == 'x') ADVANCE(564);
      END_STATE();
    case 245:
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 247:
      if (lookahead == '{') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 248:
      if (lookahead == '|') ADVANCE(320);
      END_STATE();
    case 249:
      if (lookahead == '}') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(630);
      if (lookahead == '\r') ADVANCE(631);
      END_STATE();
    case 260:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 261:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(260)
      END_STATE();
    case 262:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      END_STATE();
    case 263:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      if (lookahead == '\r') SKIP(262)
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(263)
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'g') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(268);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_transitions);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_transitions);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_states);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_states);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_animate);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_animate);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '>') ADVANCE(328);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(328);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(630);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(307);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(335);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'x') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'x') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'p') ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(542);
      if (lookahead == 'r') ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'x') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'r') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'b') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'b') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead == 'o') ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 's') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(618);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 't') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'w') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'y') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == 'y') ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(546);
      if (lookahead == '_') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '_') ADVANCE(128);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '_') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(186);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == '_') ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_physical_length);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_physical_length);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(259);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 264},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 40},
  [79] = {.lex_state = 40},
  [80] = {.lex_state = 40},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 264},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 264},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 40},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 40},
  [99] = {.lex_state = 40},
  [100] = {.lex_state = 40},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 36},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 264},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 34},
  [113] = {.lex_state = 32},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 34},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 34},
  [121] = {.lex_state = 264},
  [122] = {.lex_state = 34},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 264},
  [126] = {.lex_state = 32},
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 32},
  [129] = {.lex_state = 34},
  [130] = {.lex_state = 32},
  [131] = {.lex_state = 46},
  [132] = {.lex_state = 32},
  [133] = {.lex_state = 34},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 46},
  [136] = {.lex_state = 33},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 46},
  [139] = {.lex_state = 32},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 264},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 264},
  [144] = {.lex_state = 264},
  [145] = {.lex_state = 34},
  [146] = {.lex_state = 264},
  [147] = {.lex_state = 34},
  [148] = {.lex_state = 264},
  [149] = {.lex_state = 264},
  [150] = {.lex_state = 264},
  [151] = {.lex_state = 264},
  [152] = {.lex_state = 264},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 34},
  [155] = {.lex_state = 264},
  [156] = {.lex_state = 34},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 264},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 34},
  [161] = {.lex_state = 34},
  [162] = {.lex_state = 264},
  [163] = {.lex_state = 34},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 35},
  [167] = {.lex_state = 264},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 34},
  [172] = {.lex_state = 264},
  [173] = {.lex_state = 264},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 35},
  [176] = {.lex_state = 264},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 32},
  [179] = {.lex_state = 32},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 264},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 264},
  [184] = {.lex_state = 264},
  [185] = {.lex_state = 264},
  [186] = {.lex_state = 264},
  [187] = {.lex_state = 32},
  [188] = {.lex_state = 264},
  [189] = {.lex_state = 34},
  [190] = {.lex_state = 35},
  [191] = {.lex_state = 32},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 264},
  [194] = {.lex_state = 32},
  [195] = {.lex_state = 264},
  [196] = {.lex_state = 264},
  [197] = {.lex_state = 35},
  [198] = {.lex_state = 264},
  [199] = {.lex_state = 34},
  [200] = {.lex_state = 35},
  [201] = {.lex_state = 34},
  [202] = {.lex_state = 34},
  [203] = {.lex_state = 47},
  [204] = {.lex_state = 34},
  [205] = {.lex_state = 35},
  [206] = {.lex_state = 35},
  [207] = {.lex_state = 34},
  [208] = {.lex_state = 35},
  [209] = {.lex_state = 35},
  [210] = {.lex_state = 35},
  [211] = {.lex_state = 35},
  [212] = {.lex_state = 35},
  [213] = {.lex_state = 35},
  [214] = {.lex_state = 35},
  [215] = {.lex_state = 35},
  [216] = {.lex_state = 35},
  [217] = {.lex_state = 35},
  [218] = {.lex_state = 35},
  [219] = {.lex_state = 35},
  [220] = {.lex_state = 35},
  [221] = {.lex_state = 35},
  [222] = {.lex_state = 264},
  [223] = {.lex_state = 49},
  [224] = {.lex_state = 49},
  [225] = {.lex_state = 49},
  [226] = {.lex_state = 264},
  [227] = {.lex_state = 35},
  [228] = {.lex_state = 264},
  [229] = {.lex_state = 264},
  [230] = {.lex_state = 264},
  [231] = {.lex_state = 264},
  [232] = {.lex_state = 264},
  [233] = {.lex_state = 264},
  [234] = {.lex_state = 264},
  [235] = {.lex_state = 264},
  [236] = {.lex_state = 264},
  [237] = {.lex_state = 49},
  [238] = {.lex_state = 264},
  [239] = {.lex_state = 264},
  [240] = {.lex_state = 264},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 34},
  [246] = {.lex_state = 34},
  [247] = {.lex_state = 34},
  [248] = {.lex_state = 34},
  [249] = {.lex_state = 34},
  [250] = {.lex_state = 34},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 34},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 34},
  [255] = {.lex_state = 34},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 34},
  [258] = {.lex_state = 34},
  [259] = {.lex_state = 34},
  [260] = {.lex_state = 34},
  [261] = {.lex_state = 48},
  [262] = {.lex_state = 40},
  [263] = {.lex_state = 48},
  [264] = {.lex_state = 48},
  [265] = {.lex_state = 48},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 31},
  [273] = {.lex_state = 38},
  [274] = {.lex_state = 38},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 38},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 31},
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
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 40},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 48},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 50},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 40},
  [315] = {.lex_state = 51},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 50},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 50},
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
  [356] = {.lex_state = 48},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
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
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(365),
    [sym__definition] = STATE(86),
    [sym_global_definition] = STATE(86),
    [sym_import_statement] = STATE(86),
    [sym_export_statement] = STATE(86),
    [sym_struct_definition] = STATE(86),
    [sym_component_definition] = STATE(86),
    [sym_visibility_modifier] = STATE(142),
    [sym_user_type_identifier] = STATE(175),
    [sym__type_identifier] = STATE(175),
    [sym_builtin_type_identifier] = STATE(175),
    [aux_sym_source_file_repeat1] = STATE(86),
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
    [sym_field_declaration_list] = STATE(88),
    [sym__expression] = STATE(222),
    [sym_expression_body_paren] = STATE(222),
    [sym__expression_body] = STATE(222),
    [sym_unary_expression] = STATE(222),
    [sym__binary_expression] = STATE(222),
    [sym_comparison_binary_expression] = STATE(222),
    [sym_mult_binary_expression] = STATE(222),
    [sym_ternary_expression] = STATE(222),
    [sym_add_binary_expression] = STATE(222),
    [sym_string] = STATE(222),
    [sym_var_identifier] = STATE(222),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(222),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(222),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [3] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(282),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [4] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [5] = {
    [sym_list_definition] = STATE(341),
    [sym__expression] = STATE(238),
    [sym_expression_body_paren] = STATE(238),
    [sym__expression_body] = STATE(238),
    [sym_unary_expression] = STATE(238),
    [sym__binary_expression] = STATE(238),
    [sym_comparison_binary_expression] = STATE(238),
    [sym_mult_binary_expression] = STATE(238),
    [sym_ternary_expression] = STATE(238),
    [sym_add_binary_expression] = STATE(238),
    [sym_string] = STATE(238),
    [sym_var_identifier] = STATE(238),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(238),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(238),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(238),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [6] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(312),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [7] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(312),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [8] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(312),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [9] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(312),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [10] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(286),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [11] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(312),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [12] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(312),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [13] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_formal_parameter] = STATE(312),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(226),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [14] = {
    [sym__expression] = STATE(145),
    [sym_expression_body_paren] = STATE(145),
    [sym__expression_body] = STATE(145),
    [sym_unary_expression] = STATE(145),
    [sym__binary_expression] = STATE(145),
    [sym_comparison_binary_expression] = STATE(145),
    [sym_mult_binary_expression] = STATE(145),
    [sym_ternary_expression] = STATE(145),
    [sym_add_binary_expression] = STATE(145),
    [sym_string] = STATE(145),
    [sym_var_identifier] = STATE(145),
    [sym_children_identifier] = STATE(174),
    [sym_function_identifier] = STATE(288),
    [sym_function_call] = STATE(145),
    [sym_reference_identifier] = STATE(127),
    [sym_value] = STATE(145),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_parent] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_this] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(79),
    [sym_float_number] = ACTIONS(81),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
    [anon_sym_angle] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_brush] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_easing] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_image] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_length] = ACTIONS(83),
    [anon_sym_percent] = ACTIONS(83),
    [anon_sym_physical_DASHlength] = ACTIONS(83),
    [anon_sym_physical_length] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__expression] = STATE(229),
    [sym_expression_body_paren] = STATE(229),
    [sym__expression_body] = STATE(229),
    [sym_unary_expression] = STATE(229),
    [sym__binary_expression] = STATE(229),
    [sym_comparison_binary_expression] = STATE(229),
    [sym_mult_binary_expression] = STATE(229),
    [sym_ternary_expression] = STATE(229),
    [sym_add_binary_expression] = STATE(229),
    [sym_string] = STATE(229),
    [sym_var_identifier] = STATE(229),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(229),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(229),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(229),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [16] = {
    [sym__expression] = STATE(232),
    [sym_expression_body_paren] = STATE(232),
    [sym__expression_body] = STATE(232),
    [sym_unary_expression] = STATE(232),
    [sym__binary_expression] = STATE(232),
    [sym_comparison_binary_expression] = STATE(232),
    [sym_mult_binary_expression] = STATE(232),
    [sym_ternary_expression] = STATE(232),
    [sym_add_binary_expression] = STATE(232),
    [sym_string] = STATE(232),
    [sym_var_identifier] = STATE(232),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(232),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(232),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(232),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [17] = {
    [sym__expression] = STATE(234),
    [sym_expression_body_paren] = STATE(234),
    [sym__expression_body] = STATE(234),
    [sym_unary_expression] = STATE(234),
    [sym__binary_expression] = STATE(234),
    [sym_comparison_binary_expression] = STATE(234),
    [sym_mult_binary_expression] = STATE(234),
    [sym_ternary_expression] = STATE(234),
    [sym_add_binary_expression] = STATE(234),
    [sym_string] = STATE(234),
    [sym_var_identifier] = STATE(234),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(234),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(234),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(234),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [18] = {
    [sym__expression] = STATE(193),
    [sym_expression_body_paren] = STATE(193),
    [sym__expression_body] = STATE(193),
    [sym_unary_expression] = STATE(193),
    [sym__binary_expression] = STATE(193),
    [sym_comparison_binary_expression] = STATE(193),
    [sym_mult_binary_expression] = STATE(193),
    [sym_ternary_expression] = STATE(193),
    [sym_add_binary_expression] = STATE(193),
    [sym_string] = STATE(193),
    [sym_var_identifier] = STATE(193),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(193),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(193),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(193),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [19] = {
    [sym__expression] = STATE(195),
    [sym_expression_body_paren] = STATE(195),
    [sym__expression_body] = STATE(195),
    [sym_unary_expression] = STATE(195),
    [sym__binary_expression] = STATE(195),
    [sym_comparison_binary_expression] = STATE(195),
    [sym_mult_binary_expression] = STATE(195),
    [sym_ternary_expression] = STATE(195),
    [sym_add_binary_expression] = STATE(195),
    [sym_string] = STATE(195),
    [sym_var_identifier] = STATE(195),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(195),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(195),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(195),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [20] = {
    [sym__expression] = STATE(235),
    [sym_expression_body_paren] = STATE(235),
    [sym__expression_body] = STATE(235),
    [sym_unary_expression] = STATE(235),
    [sym__binary_expression] = STATE(235),
    [sym_comparison_binary_expression] = STATE(235),
    [sym_mult_binary_expression] = STATE(235),
    [sym_ternary_expression] = STATE(235),
    [sym_add_binary_expression] = STATE(235),
    [sym_string] = STATE(235),
    [sym_var_identifier] = STATE(235),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(235),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(235),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(235),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [21] = {
    [sym__expression] = STATE(154),
    [sym_expression_body_paren] = STATE(154),
    [sym__expression_body] = STATE(154),
    [sym_unary_expression] = STATE(154),
    [sym__binary_expression] = STATE(154),
    [sym_comparison_binary_expression] = STATE(154),
    [sym_mult_binary_expression] = STATE(154),
    [sym_ternary_expression] = STATE(154),
    [sym_add_binary_expression] = STATE(154),
    [sym_string] = STATE(154),
    [sym_var_identifier] = STATE(154),
    [sym_children_identifier] = STATE(174),
    [sym_function_identifier] = STATE(288),
    [sym_function_call] = STATE(154),
    [sym_reference_identifier] = STATE(127),
    [sym_value] = STATE(154),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(154),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_parent] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_this] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(79),
    [sym_float_number] = ACTIONS(81),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
    [anon_sym_angle] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_brush] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_easing] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_image] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_length] = ACTIONS(83),
    [anon_sym_percent] = ACTIONS(83),
    [anon_sym_physical_DASHlength] = ACTIONS(83),
    [anon_sym_physical_length] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__expression] = STATE(147),
    [sym_expression_body_paren] = STATE(147),
    [sym__expression_body] = STATE(147),
    [sym_unary_expression] = STATE(147),
    [sym__binary_expression] = STATE(147),
    [sym_comparison_binary_expression] = STATE(147),
    [sym_mult_binary_expression] = STATE(147),
    [sym_ternary_expression] = STATE(147),
    [sym_add_binary_expression] = STATE(147),
    [sym_string] = STATE(147),
    [sym_var_identifier] = STATE(147),
    [sym_children_identifier] = STATE(174),
    [sym_function_identifier] = STATE(288),
    [sym_function_call] = STATE(147),
    [sym_reference_identifier] = STATE(127),
    [sym_value] = STATE(147),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_parent] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_this] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(79),
    [sym_float_number] = ACTIONS(81),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
    [anon_sym_angle] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_brush] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_easing] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_image] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_length] = ACTIONS(83),
    [anon_sym_percent] = ACTIONS(83),
    [anon_sym_physical_DASHlength] = ACTIONS(83),
    [anon_sym_physical_length] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__expression] = STATE(160),
    [sym_expression_body_paren] = STATE(160),
    [sym__expression_body] = STATE(160),
    [sym_unary_expression] = STATE(160),
    [sym__binary_expression] = STATE(160),
    [sym_comparison_binary_expression] = STATE(160),
    [sym_mult_binary_expression] = STATE(160),
    [sym_ternary_expression] = STATE(160),
    [sym_add_binary_expression] = STATE(160),
    [sym_string] = STATE(160),
    [sym_var_identifier] = STATE(160),
    [sym_children_identifier] = STATE(174),
    [sym_function_identifier] = STATE(288),
    [sym_function_call] = STATE(160),
    [sym_reference_identifier] = STATE(127),
    [sym_value] = STATE(160),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(160),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_parent] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_this] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(79),
    [sym_float_number] = ACTIONS(81),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
    [anon_sym_angle] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_brush] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_easing] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_image] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_length] = ACTIONS(83),
    [anon_sym_percent] = ACTIONS(83),
    [anon_sym_physical_DASHlength] = ACTIONS(83),
    [anon_sym_physical_length] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__expression] = STATE(161),
    [sym_expression_body_paren] = STATE(161),
    [sym__expression_body] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym__binary_expression] = STATE(161),
    [sym_comparison_binary_expression] = STATE(161),
    [sym_mult_binary_expression] = STATE(161),
    [sym_ternary_expression] = STATE(161),
    [sym_add_binary_expression] = STATE(161),
    [sym_string] = STATE(161),
    [sym_var_identifier] = STATE(161),
    [sym_children_identifier] = STATE(174),
    [sym_function_identifier] = STATE(288),
    [sym_function_call] = STATE(161),
    [sym_reference_identifier] = STATE(127),
    [sym_value] = STATE(161),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_parent] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_this] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(79),
    [sym_float_number] = ACTIONS(81),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
    [anon_sym_angle] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_brush] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_easing] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_image] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_length] = ACTIONS(83),
    [anon_sym_percent] = ACTIONS(83),
    [anon_sym_physical_DASHlength] = ACTIONS(83),
    [anon_sym_physical_length] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__expression] = STATE(196),
    [sym_expression_body_paren] = STATE(196),
    [sym__expression_body] = STATE(196),
    [sym_unary_expression] = STATE(196),
    [sym__binary_expression] = STATE(196),
    [sym_comparison_binary_expression] = STATE(196),
    [sym_mult_binary_expression] = STATE(196),
    [sym_ternary_expression] = STATE(196),
    [sym_add_binary_expression] = STATE(196),
    [sym_string] = STATE(196),
    [sym_var_identifier] = STATE(196),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(196),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(196),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(196),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [26] = {
    [sym__expression] = STATE(198),
    [sym_expression_body_paren] = STATE(198),
    [sym__expression_body] = STATE(198),
    [sym_unary_expression] = STATE(198),
    [sym__binary_expression] = STATE(198),
    [sym_comparison_binary_expression] = STATE(198),
    [sym_mult_binary_expression] = STATE(198),
    [sym_ternary_expression] = STATE(198),
    [sym_add_binary_expression] = STATE(198),
    [sym_string] = STATE(198),
    [sym_var_identifier] = STATE(198),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(198),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(198),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(198),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [27] = {
    [sym__expression] = STATE(231),
    [sym_expression_body_paren] = STATE(231),
    [sym__expression_body] = STATE(231),
    [sym_unary_expression] = STATE(231),
    [sym__binary_expression] = STATE(231),
    [sym_comparison_binary_expression] = STATE(231),
    [sym_mult_binary_expression] = STATE(231),
    [sym_ternary_expression] = STATE(231),
    [sym_add_binary_expression] = STATE(231),
    [sym_string] = STATE(231),
    [sym_var_identifier] = STATE(231),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(231),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(231),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(231),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [28] = {
    [sym__expression] = STATE(239),
    [sym_expression_body_paren] = STATE(239),
    [sym__expression_body] = STATE(240),
    [sym_unary_expression] = STATE(240),
    [sym__binary_expression] = STATE(240),
    [sym_comparison_binary_expression] = STATE(240),
    [sym_mult_binary_expression] = STATE(240),
    [sym_ternary_expression] = STATE(240),
    [sym_add_binary_expression] = STATE(240),
    [sym_string] = STATE(240),
    [sym_var_identifier] = STATE(240),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(240),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(240),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(240),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [29] = {
    [sym__expression] = STATE(188),
    [sym_expression_body_paren] = STATE(188),
    [sym__expression_body] = STATE(188),
    [sym_unary_expression] = STATE(188),
    [sym__binary_expression] = STATE(188),
    [sym_comparison_binary_expression] = STATE(188),
    [sym_mult_binary_expression] = STATE(188),
    [sym_ternary_expression] = STATE(188),
    [sym_add_binary_expression] = STATE(188),
    [sym_string] = STATE(188),
    [sym_var_identifier] = STATE(188),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(188),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(188),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(188),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [30] = {
    [sym__expression] = STATE(233),
    [sym_expression_body_paren] = STATE(233),
    [sym__expression_body] = STATE(233),
    [sym_unary_expression] = STATE(233),
    [sym__binary_expression] = STATE(233),
    [sym_comparison_binary_expression] = STATE(233),
    [sym_mult_binary_expression] = STATE(233),
    [sym_ternary_expression] = STATE(233),
    [sym_add_binary_expression] = STATE(233),
    [sym_string] = STATE(233),
    [sym_var_identifier] = STATE(233),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(233),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(233),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(233),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [31] = {
    [sym__expression] = STATE(230),
    [sym_expression_body_paren] = STATE(230),
    [sym__expression_body] = STATE(230),
    [sym_unary_expression] = STATE(230),
    [sym__binary_expression] = STATE(230),
    [sym_comparison_binary_expression] = STATE(230),
    [sym_mult_binary_expression] = STATE(230),
    [sym_ternary_expression] = STATE(230),
    [sym_add_binary_expression] = STATE(230),
    [sym_string] = STATE(230),
    [sym_var_identifier] = STATE(230),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(230),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(230),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(230),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [32] = {
    [sym__expression] = STATE(228),
    [sym_expression_body_paren] = STATE(228),
    [sym__expression_body] = STATE(228),
    [sym_unary_expression] = STATE(228),
    [sym__binary_expression] = STATE(228),
    [sym_comparison_binary_expression] = STATE(228),
    [sym_mult_binary_expression] = STATE(228),
    [sym_ternary_expression] = STATE(228),
    [sym_add_binary_expression] = STATE(228),
    [sym_string] = STATE(228),
    [sym_var_identifier] = STATE(228),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(228),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(228),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(228),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
  [33] = {
    [sym__expression] = STATE(156),
    [sym_expression_body_paren] = STATE(156),
    [sym__expression_body] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym__binary_expression] = STATE(156),
    [sym_comparison_binary_expression] = STATE(156),
    [sym_mult_binary_expression] = STATE(156),
    [sym_ternary_expression] = STATE(156),
    [sym_add_binary_expression] = STATE(156),
    [sym_string] = STATE(156),
    [sym_var_identifier] = STATE(156),
    [sym_children_identifier] = STATE(174),
    [sym_function_identifier] = STATE(288),
    [sym_function_call] = STATE(156),
    [sym_reference_identifier] = STATE(127),
    [sym_value] = STATE(156),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(156),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_parent] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_this] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(79),
    [sym_float_number] = ACTIONS(81),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
    [anon_sym_angle] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_brush] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_easing] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_image] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_length] = ACTIONS(83),
    [anon_sym_percent] = ACTIONS(83),
    [anon_sym_physical_DASHlength] = ACTIONS(83),
    [anon_sym_physical_length] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__expression] = STATE(236),
    [sym_expression_body_paren] = STATE(236),
    [sym__expression_body] = STATE(236),
    [sym_unary_expression] = STATE(236),
    [sym__binary_expression] = STATE(236),
    [sym_comparison_binary_expression] = STATE(236),
    [sym_mult_binary_expression] = STATE(236),
    [sym_ternary_expression] = STATE(236),
    [sym_add_binary_expression] = STATE(236),
    [sym_string] = STATE(236),
    [sym_var_identifier] = STATE(236),
    [sym_children_identifier] = STATE(130),
    [sym_function_identifier] = STATE(303),
    [sym_function_call] = STATE(236),
    [sym_reference_identifier] = STATE(114),
    [sym_value] = STATE(236),
    [sym_color] = STATE(115),
    [sym_value_with_units] = STATE(115),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(115),
    [sym_builtin_type_identifier] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_parent] = ACTIONS(39),
    [anon_sym_root] = ACTIONS(39),
    [anon_sym_this] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_int_number] = ACTIONS(43),
    [sym_float_number] = ACTIONS(45),
    [anon_sym_black] = ACTIONS(47),
    [anon_sym_blue] = ACTIONS(47),
    [anon_sym_ease] = ACTIONS(47),
    [anon_sym_ease_DASHin] = ACTIONS(47),
    [anon_sym_ease_in] = ACTIONS(47),
    [anon_sym_ease_in_out] = ACTIONS(47),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(47),
    [anon_sym_ease_out] = ACTIONS(47),
    [anon_sym_ease_DASHout] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_green] = ACTIONS(47),
    [anon_sym_red] = ACTIONS(47),
    [anon_sym_start] = ACTIONS(47),
    [anon_sym_yellow] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_transparent] = ACTIONS(47),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
    STATE(40), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [102] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
      aux_sym_field_declaration_list_repeat1,
  [204] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
    STATE(39), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [306] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
    STATE(43), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [408] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COLON_EQ,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_export,
    ACTIONS(129), 1,
      anon_sym_transitions,
    ACTIONS(132), 1,
      anon_sym_states,
    ACTIONS(135), 1,
      anon_sym_animate,
    ACTIONS(141), 1,
      anon_sym_elseif,
    ACTIONS(144), 1,
      anon_sym_for,
    ACTIONS(147), 1,
      anon_sym_property,
    ACTIONS(150), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_callback,
    ACTIONS(156), 1,
      sym__identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(138), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(162), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(165), 13,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(39), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [510] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
    STATE(39), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [612] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
    STATE(42), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [714] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
    STATE(39), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [816] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    ACTIONS(91), 1,
      anon_sym_transitions,
    ACTIONS(93), 1,
      anon_sym_states,
    ACTIONS(95), 1,
      anon_sym_animate,
    ACTIONS(99), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(103), 1,
      anon_sym_property,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_callback,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(51), 1,
      sym_children_identifier,
    STATE(67), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(354), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(159), 3,
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
    STATE(39), 13,
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
      aux_sym_field_declaration_list_repeat1,
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(178), 35,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      sym_int_number,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_DASHin,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_DASHin_DASHout,
      anon_sym_ease_out,
      anon_sym_ease_DASHout,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
      anon_sym_angle,
      anon_sym_bool,
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
  [970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(182), 35,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      sym_int_number,
      anon_sym_black,
      anon_sym_blue,
      anon_sym_ease,
      anon_sym_ease_DASHin,
      anon_sym_ease_in,
      anon_sym_ease_in_out,
      anon_sym_ease_DASHin_DASHout,
      anon_sym_ease_out,
      anon_sym_ease_DASHout,
      anon_sym_end,
      anon_sym_green,
      anon_sym_red,
      anon_sym_start,
      anon_sym_yellow,
      anon_sym_true,
      anon_sym_false,
      anon_sym_transparent,
      anon_sym_angle,
      anon_sym_bool,
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
  [1022] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_EQ_GT,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_var_identifier_repeat1,
    STATE(64), 1,
      sym_index_operator,
    ACTIONS(184), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(186), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(194), 14,
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
    ACTIONS(188), 15,
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
  [1088] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_var_identifier_repeat1,
    STATE(64), 1,
      sym_index_operator,
    ACTIONS(186), 10,
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
    ACTIONS(188), 28,
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
  [1146] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_var_identifier_repeat1,
    STATE(65), 1,
      sym_index_operator,
    ACTIONS(198), 10,
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
    ACTIONS(200), 28,
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
  [1204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(204), 28,
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
  [1256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_index_operator,
    ACTIONS(206), 11,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(208), 28,
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
  [1309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_index_operator,
    ACTIONS(186), 11,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(188), 28,
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
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(212), 28,
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
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(216), 28,
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
  [1460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(204), 28,
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
  [1509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(214), 11,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(216), 28,
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
  [1562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 12,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(223), 28,
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
  [1610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 12,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(227), 28,
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
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 12,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(231), 28,
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
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(235), 28,
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
  [1754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 12,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(239), 28,
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
  [1802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 12,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(243), 28,
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
  [1850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 12,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(247), 28,
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
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 11,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(251), 28,
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
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 11,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(200), 28,
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
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 11,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(255), 28,
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
  [2039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 11,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(259), 28,
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
  [2086] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(261), 4,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_AT,
    ACTIONS(269), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(265), 27,
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
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 15,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(273), 18,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
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
  [2179] = 3,
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
  [2218] = 3,
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
  [2257] = 3,
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
  [2296] = 3,
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
  [2335] = 3,
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
  [2374] = 3,
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
  [2413] = 3,
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
  [2452] = 3,
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
  [2491] = 3,
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
  [2530] = 3,
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
  [2569] = 3,
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
  [2608] = 3,
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
  [2647] = 3,
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
  [2686] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym_global,
    ACTIONS(332), 1,
      anon_sym_COLON_EQ,
    ACTIONS(335), 1,
      anon_sym_import,
    ACTIONS(338), 1,
      anon_sym_export,
    ACTIONS(341), 1,
      anon_sym_struct,
    ACTIONS(344), 1,
      sym__identifier,
    STATE(142), 1,
      sym_visibility_modifier,
    STATE(175), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(82), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(347), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(352), 26,
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
  [2782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(356), 26,
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
  [2821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(360), 26,
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
  [2860] = 12,
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
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_visibility_modifier,
    STATE(175), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(82), 7,
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
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(366), 26,
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
  [2956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(370), 26,
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
  [2995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(374), 26,
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
  [3034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(378), 26,
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
  [3073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(382), 26,
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
  [3112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(386), 26,
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
  [3151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(390), 26,
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
  [3190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(394), 26,
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
  [3229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(398), 26,
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
  [3268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(402), 26,
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
  [3307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(406), 26,
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
  [3346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(410), 26,
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
  [3385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(414), 26,
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
  [3424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(418), 26,
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
  [3463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(422), 26,
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
  [3502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(426), 26,
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
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(237), 19,
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
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(221), 19,
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
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(225), 19,
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
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(245), 19,
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
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(229), 19,
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
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(428), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(434), 18,
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
  [3763] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_var_identifier_repeat1,
    STATE(201), 1,
      sym_index_operator,
    ACTIONS(188), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(186), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(440), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(444), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(241), 19,
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
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3897] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_var_identifier_repeat1,
    STATE(187), 1,
      sym_index_operator,
    ACTIONS(188), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(186), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(452), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(456), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(460), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(464), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4060] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DOT,
    STATE(123), 1,
      aux_sym_var_identifier_repeat1,
    STATE(192), 1,
      sym_index_operator,
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(468), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(474), 18,
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
  [4161] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_var_identifier_repeat1,
    STATE(207), 1,
      sym_index_operator,
    ACTIONS(200), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(198), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DOT,
    STATE(123), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(216), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    STATE(111), 1,
      sym_unit_type,
    ACTIONS(479), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(454), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(452), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4269] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_var_identifier_repeat1,
    STATE(187), 1,
      sym_index_operator,
    ACTIONS(188), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(186), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(202), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [4341] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_var_identifier_repeat1,
    STATE(201), 1,
      sym_index_operator,
    ACTIONS(188), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(186), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(202), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [4408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(202), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(187), 1,
      sym_index_operator,
    ACTIONS(188), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(186), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4472] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    STATE(98), 1,
      sym_component_definition,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(159), 3,
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
  [4511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(210), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [4540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(216), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(214), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(111), 1,
      sym_unit_type,
    ACTIONS(454), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(481), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(452), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4606] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    STATE(77), 1,
      sym_component_definition,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(159), 3,
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
  [4645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 9,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(486), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
      anon_sym_PERCENT,
  [4674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_index_operator,
    ACTIONS(208), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(206), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4707] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(89), 1,
      anon_sym_export,
    STATE(94), 1,
      sym_component_definition,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(159), 3,
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
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [4775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(194), 14,
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
  [4804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(492), 18,
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
  [4832] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(494), 1,
      anon_sym_global,
    ACTIONS(496), 1,
      anon_sym_COLON_EQ,
    ACTIONS(498), 1,
      anon_sym_struct,
    STATE(153), 3,
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
  [4868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(502), 18,
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
  [4896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(506), 18,
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
  [4924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(510), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(508), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(514), 18,
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
  [4984] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_QMARK,
    STATE(23), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(518), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(516), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(524), 18,
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
  [5046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(528), 18,
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
  [5074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(532), 18,
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
  [5102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(406), 18,
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
  [5130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(374), 18,
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
  [5158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(534), 1,
      anon_sym_COLON_EQ,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_field_declaration_list,
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
  [5194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_QMARK,
    STATE(23), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(540), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(538), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(382), 18,
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
  [5256] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_QMARK,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(552), 1,
      anon_sym_SLASH,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(544), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(550), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(558), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5304] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      anon_sym_COLON_EQ,
    STATE(96), 1,
      sym_field_declaration_list,
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
  [5340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(564), 18,
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
  [5368] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_COLON_EQ,
    STATE(91), 1,
      sym_field_declaration_list,
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
  [5404] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_QMARK,
    ACTIONS(552), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(550), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(570), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(568), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5442] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_QMARK,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(552), 1,
      anon_sym_SLASH,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(550), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(572), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
    ACTIONS(574), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(366), 18,
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
  [5512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(229), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [5540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(214), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [5568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(221), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [5596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    STATE(335), 2,
      sym__propterty_kind,
      sym_property_type_list,
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
  [5630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(422), 18,
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
  [5658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(225), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [5686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    STATE(202), 1,
      sym_index_operator,
    ACTIONS(208), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(206), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(237), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [5746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(210), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [5774] = 3,
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
  [5802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(313), 18,
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
  [5830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    STATE(201), 1,
      sym_index_operator,
    ACTIONS(188), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(186), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5862] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(578), 1,
      anon_sym_COLON_EQ,
    STATE(155), 1,
      sym_field_declaration_list,
    STATE(310), 3,
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
  [5898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(317), 18,
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
  [5926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(245), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [5954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(233), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(486), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
  [6010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(241), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [6038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(582), 18,
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
  [6066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(202), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [6094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(402), 18,
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
  [6122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(586), 18,
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
  [6150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(590), 18,
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
  [6178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(594), 18,
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
  [6206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(518), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(516), 13,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(233), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [6293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_struct_field_declaration_list,
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
  [6326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(249), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(253), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(540), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(538), 13,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(510), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(508), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6471] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(574), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(572), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6512] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_struct_field_declaration_list,
    STATE(317), 3,
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
  [6545] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(570), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(568), 10,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(257), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [6608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(606), 1,
      anon_sym_COLON_EQ,
    STATE(157), 3,
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
  [6638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(198), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [6664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(249), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [6690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_EQ,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 16,
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
  [6718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(271), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [6744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(614), 1,
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
  [6774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    STATE(285), 3,
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
  [6804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(253), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [6830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(306), 3,
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
  [6857] = 4,
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
  [6884] = 4,
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
  [6911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(355), 3,
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
  [6938] = 4,
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
  [6965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(304), 3,
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
  [6992] = 4,
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
  [7019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(359), 3,
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
  [7046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(343), 3,
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
  [7073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(307), 3,
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
  [7100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(321), 3,
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
  [7127] = 4,
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
  [7154] = 4,
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
  [7181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(358), 3,
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
  [7208] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(618), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    STATE(94), 1,
      sym_field_declaration_list,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(340), 1,
      sym_builtin_type_identifier,
    ACTIONS(622), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [7280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(340), 1,
      sym_builtin_type_identifier,
    ACTIONS(622), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [7308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(340), 1,
      sym_builtin_type_identifier,
    ACTIONS(628), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [7336] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(631), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_EQ,
    ACTIONS(608), 14,
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
  [7398] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7436] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7474] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(637), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7512] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(639), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7550] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7588] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(643), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7626] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(645), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7664] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7702] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(649), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 14,
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
  [7760] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7798] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(596), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(546), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(600), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(655), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(659), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7855] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    ACTIONS(663), 1,
      sym__identifier,
    ACTIONS(665), 1,
      anon_sym_AT,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(130), 1,
      sym_children_identifier,
    STATE(246), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(350), 1,
      sym_var_identifier,
    ACTIONS(39), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7888] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(663), 1,
      sym__identifier,
    ACTIONS(665), 1,
      anon_sym_AT,
    ACTIONS(667), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(130), 1,
      sym_children_identifier,
    STATE(241), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(350), 1,
      sym_var_identifier,
    ACTIONS(39), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7921] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(245), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(348), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7954] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_STAR,
    ACTIONS(680), 1,
      sym__identifier,
    ACTIONS(683), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(244), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(348), 1,
      sym_var_identifier,
    ACTIONS(686), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7987] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_children_identifier,
    STATE(244), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(348), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8020] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    ACTIONS(693), 1,
      anon_sym_STAR,
    ACTIONS(696), 1,
      sym__identifier,
    ACTIONS(699), 1,
      anon_sym_AT,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(130), 1,
      sym_children_identifier,
    STATE(246), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(350), 1,
      sym_var_identifier,
    ACTIONS(702), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8053] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(332), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8080] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(268), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(663), 1,
      sym__identifier,
    ACTIONS(665), 1,
      anon_sym_AT,
    STATE(114), 1,
      sym_reference_identifier,
    STATE(130), 1,
      sym_children_identifier,
    STATE(336), 1,
      sym_var_identifier,
    ACTIONS(39), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8134] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(360), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8161] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(64), 1,
      sym_index_operator,
    STATE(253), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(186), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [8186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(362), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8213] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(705), 1,
      anon_sym_DOT,
    STATE(65), 1,
      sym_index_operator,
    STATE(256), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(198), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [8238] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(349), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8265] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_children_identifier,
    STATE(251), 1,
      sym_reference_identifier,
    STATE(346), 1,
      sym_var_identifier,
    ACTIONS(113), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8292] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COLON,
    ACTIONS(707), 1,
      anon_sym_DOT,
    STATE(256), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(214), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(712), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(716), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(406), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(366), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__identifier,
    ACTIONS(720), 1,
      anon_sym_AT,
    STATE(164), 1,
      sym_post_identifier,
    STATE(182), 1,
      sym_function_call,
    STATE(288), 1,
      sym_function_identifier,
  [8391] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      anon_sym_DASH_GT,
    STATE(106), 1,
      sym_formal_parameters,
    STATE(314), 1,
      sym_call_signature,
  [8410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_AT,
    ACTIONS(728), 1,
      sym__identifier,
    STATE(53), 1,
      sym_post_identifier,
    STATE(54), 1,
      sym_function_call,
    STATE(294), 1,
      sym_function_identifier,
  [8429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_AT,
    ACTIONS(730), 1,
      sym__identifier,
    STATE(128), 1,
      sym_function_call,
    STATE(139), 1,
      sym_post_identifier,
    STATE(303), 1,
      sym_function_identifier,
  [8448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_AT,
    ACTIONS(728), 1,
      sym__identifier,
    STATE(53), 1,
      sym_post_identifier,
    STATE(54), 1,
      sym_function_call,
    STATE(303), 1,
      sym_function_identifier,
  [8467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(732), 2,
      anon_sym_in,
      anon_sym_out,
  [8481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [8491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      sym_property_expr,
    ACTIONS(740), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(742), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_list_definition_repeat1,
    STATE(280), 1,
      sym_struct_field_declaration_list,
  [8521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_list_definition_repeat1,
    STATE(280), 1,
      sym_struct_field_declaration_list,
  [8537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(749), 2,
      anon_sym_in,
      anon_sym_out,
  [8551] = 4,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(758), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym_string_repeat1,
    ACTIONS(756), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [8565] = 4,
    ACTIONS(754), 1,
      anon_sym_SQUOTE,
    ACTIONS(758), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_string_repeat2,
    ACTIONS(760), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8579] = 4,
    ACTIONS(758), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      aux_sym_string_repeat2,
    ACTIONS(764), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8593] = 4,
    ACTIONS(758), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      aux_sym_string_repeat1,
    ACTIONS(766), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [8607] = 4,
    ACTIONS(758), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      aux_sym_string_repeat2,
    ACTIONS(770), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [8621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(732), 2,
      anon_sym_in,
      anon_sym_out,
  [8635] = 4,
    ACTIONS(758), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      aux_sym_string_repeat1,
    ACTIONS(777), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [8649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_list_definition_repeat1,
    STATE(280), 1,
      sym_struct_field_declaration_list,
  [8665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(782), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_formal_parameters_repeat1,
  [8698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_formal_parameters_repeat1,
  [8711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_formal_parameters_repeat1,
  [8724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      aux_sym_import_statement_repeat1,
  [8737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_formal_parameters_repeat1,
  [8750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
  [8763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_formal_parameters,
    STATE(180), 1,
      sym_call_signature,
  [8776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      aux_sym_import_statement_repeat1,
  [8798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_formal_parameters_repeat1,
  [8811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(344), 1,
      sym_string,
  [8824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_formal_parameters_repeat1,
  [8837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_call_signature,
    STATE(62), 1,
      sym_formal_parameters,
  [8850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [8859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_formal_parameters_repeat1,
  [8872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_AT,
    ACTIONS(826), 1,
      sym__identifier,
    STATE(262), 1,
      sym_function_identifier,
  [8885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      aux_sym_import_statement_repeat1,
  [8907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      aux_sym_import_statement_repeat1,
  [8920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      sym_string,
  [8933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(337), 1,
      sym_string,
  [8946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_formal_parameters,
    STATE(113), 1,
      sym_call_signature,
  [8959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_field_declaration_list,
  [8969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_field_declaration_list,
  [8979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_field_declaration_list,
  [8989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_field_declaration_list,
  [8999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_field_declaration_list,
  [9009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_struct_field_declaration_list,
  [9019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_field_declaration_list,
  [9029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__identifier,
    ACTIONS(834), 1,
      anon_sym_children,
  [9039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [9055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(838), 1,
      anon_sym_DASH_GT,
  [9065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_color_token1,
    ACTIONS(842), 1,
      aux_sym_color_token2,
  [9075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_field_declaration_list,
  [9085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_struct_field_declaration_list,
  [9095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_field_declaration_list,
  [9105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    STATE(289), 1,
      sym_field_declaration_list,
  [9115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__identifier,
    ACTIONS(848), 1,
      anon_sym_children,
  [9125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_field_declaration_list,
  [9135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_field_declaration_list,
  [9145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__identifier,
    ACTIONS(850), 1,
      anon_sym_children,
  [9155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_field_declaration_list,
  [9173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_field_declaration_list,
  [9183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_field_declaration_list,
  [9193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_field_declaration_list,
  [9203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_field_declaration_list,
  [9213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_field_declaration_list,
  [9223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_transitions_list_definition,
  [9233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_animate_declaration_list,
  [9243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_states_list_definition,
  [9253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
  [9260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_GT,
  [9267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_in,
  [9274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [9281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_SEMI,
  [9288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [9295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_COLON,
  [9302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
  [9309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LT,
  [9316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COLON_EQ,
  [9323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_SEMI,
  [9330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_children,
  [9337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_COLON_EQ,
  [9344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_from,
  [9351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_COLON,
  [9358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COLON,
  [9365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_when,
  [9372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_SEMI,
  [9379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_GT,
  [9386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_from,
  [9393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_EQ_GT,
  [9400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [9407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym__identifier,
  [9414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_from,
  [9421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_SEMI,
  [9428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_COLON_EQ,
  [9435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COLON,
  [9442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_SEMI,
  [9449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_COLON_EQ,
  [9456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_children,
  [9463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_GT,
  [9470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
  [9477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 102,
  [SMALL_STATE(37)] = 204,
  [SMALL_STATE(38)] = 306,
  [SMALL_STATE(39)] = 408,
  [SMALL_STATE(40)] = 510,
  [SMALL_STATE(41)] = 612,
  [SMALL_STATE(42)] = 714,
  [SMALL_STATE(43)] = 816,
  [SMALL_STATE(44)] = 918,
  [SMALL_STATE(45)] = 970,
  [SMALL_STATE(46)] = 1022,
  [SMALL_STATE(47)] = 1088,
  [SMALL_STATE(48)] = 1146,
  [SMALL_STATE(49)] = 1204,
  [SMALL_STATE(50)] = 1256,
  [SMALL_STATE(51)] = 1309,
  [SMALL_STATE(52)] = 1362,
  [SMALL_STATE(53)] = 1411,
  [SMALL_STATE(54)] = 1460,
  [SMALL_STATE(55)] = 1509,
  [SMALL_STATE(56)] = 1562,
  [SMALL_STATE(57)] = 1610,
  [SMALL_STATE(58)] = 1658,
  [SMALL_STATE(59)] = 1706,
  [SMALL_STATE(60)] = 1754,
  [SMALL_STATE(61)] = 1802,
  [SMALL_STATE(62)] = 1850,
  [SMALL_STATE(63)] = 1898,
  [SMALL_STATE(64)] = 1945,
  [SMALL_STATE(65)] = 1992,
  [SMALL_STATE(66)] = 2039,
  [SMALL_STATE(67)] = 2086,
  [SMALL_STATE(68)] = 2138,
  [SMALL_STATE(69)] = 2179,
  [SMALL_STATE(70)] = 2218,
  [SMALL_STATE(71)] = 2257,
  [SMALL_STATE(72)] = 2296,
  [SMALL_STATE(73)] = 2335,
  [SMALL_STATE(74)] = 2374,
  [SMALL_STATE(75)] = 2413,
  [SMALL_STATE(76)] = 2452,
  [SMALL_STATE(77)] = 2491,
  [SMALL_STATE(78)] = 2530,
  [SMALL_STATE(79)] = 2569,
  [SMALL_STATE(80)] = 2608,
  [SMALL_STATE(81)] = 2647,
  [SMALL_STATE(82)] = 2686,
  [SMALL_STATE(83)] = 2743,
  [SMALL_STATE(84)] = 2782,
  [SMALL_STATE(85)] = 2821,
  [SMALL_STATE(86)] = 2860,
  [SMALL_STATE(87)] = 2917,
  [SMALL_STATE(88)] = 2956,
  [SMALL_STATE(89)] = 2995,
  [SMALL_STATE(90)] = 3034,
  [SMALL_STATE(91)] = 3073,
  [SMALL_STATE(92)] = 3112,
  [SMALL_STATE(93)] = 3151,
  [SMALL_STATE(94)] = 3190,
  [SMALL_STATE(95)] = 3229,
  [SMALL_STATE(96)] = 3268,
  [SMALL_STATE(97)] = 3307,
  [SMALL_STATE(98)] = 3346,
  [SMALL_STATE(99)] = 3385,
  [SMALL_STATE(100)] = 3424,
  [SMALL_STATE(101)] = 3463,
  [SMALL_STATE(102)] = 3502,
  [SMALL_STATE(103)] = 3541,
  [SMALL_STATE(104)] = 3573,
  [SMALL_STATE(105)] = 3605,
  [SMALL_STATE(106)] = 3637,
  [SMALL_STATE(107)] = 3669,
  [SMALL_STATE(108)] = 3701,
  [SMALL_STATE(109)] = 3732,
  [SMALL_STATE(110)] = 3763,
  [SMALL_STATE(111)] = 3804,
  [SMALL_STATE(112)] = 3835,
  [SMALL_STATE(113)] = 3866,
  [SMALL_STATE(114)] = 3897,
  [SMALL_STATE(115)] = 3936,
  [SMALL_STATE(116)] = 3967,
  [SMALL_STATE(117)] = 3998,
  [SMALL_STATE(118)] = 4029,
  [SMALL_STATE(119)] = 4060,
  [SMALL_STATE(120)] = 4099,
  [SMALL_STATE(121)] = 4130,
  [SMALL_STATE(122)] = 4161,
  [SMALL_STATE(123)] = 4199,
  [SMALL_STATE(124)] = 4233,
  [SMALL_STATE(125)] = 4269,
  [SMALL_STATE(126)] = 4309,
  [SMALL_STATE(127)] = 4341,
  [SMALL_STATE(128)] = 4379,
  [SMALL_STATE(129)] = 4408,
  [SMALL_STATE(130)] = 4439,
  [SMALL_STATE(131)] = 4472,
  [SMALL_STATE(132)] = 4511,
  [SMALL_STATE(133)] = 4540,
  [SMALL_STATE(134)] = 4573,
  [SMALL_STATE(135)] = 4606,
  [SMALL_STATE(136)] = 4645,
  [SMALL_STATE(137)] = 4674,
  [SMALL_STATE(138)] = 4707,
  [SMALL_STATE(139)] = 4746,
  [SMALL_STATE(140)] = 4775,
  [SMALL_STATE(141)] = 4804,
  [SMALL_STATE(142)] = 4832,
  [SMALL_STATE(143)] = 4868,
  [SMALL_STATE(144)] = 4896,
  [SMALL_STATE(145)] = 4924,
  [SMALL_STATE(146)] = 4956,
  [SMALL_STATE(147)] = 4984,
  [SMALL_STATE(148)] = 5018,
  [SMALL_STATE(149)] = 5046,
  [SMALL_STATE(150)] = 5074,
  [SMALL_STATE(151)] = 5102,
  [SMALL_STATE(152)] = 5130,
  [SMALL_STATE(153)] = 5158,
  [SMALL_STATE(154)] = 5194,
  [SMALL_STATE(155)] = 5228,
  [SMALL_STATE(156)] = 5256,
  [SMALL_STATE(157)] = 5304,
  [SMALL_STATE(158)] = 5340,
  [SMALL_STATE(159)] = 5368,
  [SMALL_STATE(160)] = 5404,
  [SMALL_STATE(161)] = 5442,
  [SMALL_STATE(162)] = 5484,
  [SMALL_STATE(163)] = 5512,
  [SMALL_STATE(164)] = 5540,
  [SMALL_STATE(165)] = 5568,
  [SMALL_STATE(166)] = 5596,
  [SMALL_STATE(167)] = 5630,
  [SMALL_STATE(168)] = 5658,
  [SMALL_STATE(169)] = 5686,
  [SMALL_STATE(170)] = 5718,
  [SMALL_STATE(171)] = 5746,
  [SMALL_STATE(172)] = 5774,
  [SMALL_STATE(173)] = 5802,
  [SMALL_STATE(174)] = 5830,
  [SMALL_STATE(175)] = 5862,
  [SMALL_STATE(176)] = 5898,
  [SMALL_STATE(177)] = 5926,
  [SMALL_STATE(178)] = 5954,
  [SMALL_STATE(179)] = 5982,
  [SMALL_STATE(180)] = 6010,
  [SMALL_STATE(181)] = 6038,
  [SMALL_STATE(182)] = 6066,
  [SMALL_STATE(183)] = 6094,
  [SMALL_STATE(184)] = 6122,
  [SMALL_STATE(185)] = 6150,
  [SMALL_STATE(186)] = 6178,
  [SMALL_STATE(187)] = 6206,
  [SMALL_STATE(188)] = 6233,
  [SMALL_STATE(189)] = 6266,
  [SMALL_STATE(190)] = 6293,
  [SMALL_STATE(191)] = 6326,
  [SMALL_STATE(192)] = 6353,
  [SMALL_STATE(193)] = 6380,
  [SMALL_STATE(194)] = 6413,
  [SMALL_STATE(195)] = 6440,
  [SMALL_STATE(196)] = 6471,
  [SMALL_STATE(197)] = 6512,
  [SMALL_STATE(198)] = 6545,
  [SMALL_STATE(199)] = 6582,
  [SMALL_STATE(200)] = 6608,
  [SMALL_STATE(201)] = 6638,
  [SMALL_STATE(202)] = 6664,
  [SMALL_STATE(203)] = 6690,
  [SMALL_STATE(204)] = 6718,
  [SMALL_STATE(205)] = 6744,
  [SMALL_STATE(206)] = 6774,
  [SMALL_STATE(207)] = 6804,
  [SMALL_STATE(208)] = 6830,
  [SMALL_STATE(209)] = 6857,
  [SMALL_STATE(210)] = 6884,
  [SMALL_STATE(211)] = 6911,
  [SMALL_STATE(212)] = 6938,
  [SMALL_STATE(213)] = 6965,
  [SMALL_STATE(214)] = 6992,
  [SMALL_STATE(215)] = 7019,
  [SMALL_STATE(216)] = 7046,
  [SMALL_STATE(217)] = 7073,
  [SMALL_STATE(218)] = 7100,
  [SMALL_STATE(219)] = 7127,
  [SMALL_STATE(220)] = 7154,
  [SMALL_STATE(221)] = 7181,
  [SMALL_STATE(222)] = 7208,
  [SMALL_STATE(223)] = 7252,
  [SMALL_STATE(224)] = 7280,
  [SMALL_STATE(225)] = 7308,
  [SMALL_STATE(226)] = 7336,
  [SMALL_STATE(227)] = 7375,
  [SMALL_STATE(228)] = 7398,
  [SMALL_STATE(229)] = 7436,
  [SMALL_STATE(230)] = 7474,
  [SMALL_STATE(231)] = 7512,
  [SMALL_STATE(232)] = 7550,
  [SMALL_STATE(233)] = 7588,
  [SMALL_STATE(234)] = 7626,
  [SMALL_STATE(235)] = 7664,
  [SMALL_STATE(236)] = 7702,
  [SMALL_STATE(237)] = 7740,
  [SMALL_STATE(238)] = 7760,
  [SMALL_STATE(239)] = 7798,
  [SMALL_STATE(240)] = 7833,
  [SMALL_STATE(241)] = 7855,
  [SMALL_STATE(242)] = 7888,
  [SMALL_STATE(243)] = 7921,
  [SMALL_STATE(244)] = 7954,
  [SMALL_STATE(245)] = 7987,
  [SMALL_STATE(246)] = 8020,
  [SMALL_STATE(247)] = 8053,
  [SMALL_STATE(248)] = 8080,
  [SMALL_STATE(249)] = 8107,
  [SMALL_STATE(250)] = 8134,
  [SMALL_STATE(251)] = 8161,
  [SMALL_STATE(252)] = 8186,
  [SMALL_STATE(253)] = 8213,
  [SMALL_STATE(254)] = 8238,
  [SMALL_STATE(255)] = 8265,
  [SMALL_STATE(256)] = 8292,
  [SMALL_STATE(257)] = 8312,
  [SMALL_STATE(258)] = 8327,
  [SMALL_STATE(259)] = 8342,
  [SMALL_STATE(260)] = 8357,
  [SMALL_STATE(261)] = 8372,
  [SMALL_STATE(262)] = 8391,
  [SMALL_STATE(263)] = 8410,
  [SMALL_STATE(264)] = 8429,
  [SMALL_STATE(265)] = 8448,
  [SMALL_STATE(266)] = 8467,
  [SMALL_STATE(267)] = 8481,
  [SMALL_STATE(268)] = 8491,
  [SMALL_STATE(269)] = 8505,
  [SMALL_STATE(270)] = 8521,
  [SMALL_STATE(271)] = 8537,
  [SMALL_STATE(272)] = 8551,
  [SMALL_STATE(273)] = 8565,
  [SMALL_STATE(274)] = 8579,
  [SMALL_STATE(275)] = 8593,
  [SMALL_STATE(276)] = 8607,
  [SMALL_STATE(277)] = 8621,
  [SMALL_STATE(278)] = 8635,
  [SMALL_STATE(279)] = 8649,
  [SMALL_STATE(280)] = 8665,
  [SMALL_STATE(281)] = 8676,
  [SMALL_STATE(282)] = 8685,
  [SMALL_STATE(283)] = 8698,
  [SMALL_STATE(284)] = 8711,
  [SMALL_STATE(285)] = 8724,
  [SMALL_STATE(286)] = 8737,
  [SMALL_STATE(287)] = 8750,
  [SMALL_STATE(288)] = 8763,
  [SMALL_STATE(289)] = 8776,
  [SMALL_STATE(290)] = 8785,
  [SMALL_STATE(291)] = 8798,
  [SMALL_STATE(292)] = 8811,
  [SMALL_STATE(293)] = 8824,
  [SMALL_STATE(294)] = 8837,
  [SMALL_STATE(295)] = 8850,
  [SMALL_STATE(296)] = 8859,
  [SMALL_STATE(297)] = 8872,
  [SMALL_STATE(298)] = 8885,
  [SMALL_STATE(299)] = 8894,
  [SMALL_STATE(300)] = 8907,
  [SMALL_STATE(301)] = 8920,
  [SMALL_STATE(302)] = 8933,
  [SMALL_STATE(303)] = 8946,
  [SMALL_STATE(304)] = 8959,
  [SMALL_STATE(305)] = 8969,
  [SMALL_STATE(306)] = 8979,
  [SMALL_STATE(307)] = 8989,
  [SMALL_STATE(308)] = 8999,
  [SMALL_STATE(309)] = 9009,
  [SMALL_STATE(310)] = 9019,
  [SMALL_STATE(311)] = 9029,
  [SMALL_STATE(312)] = 9039,
  [SMALL_STATE(313)] = 9047,
  [SMALL_STATE(314)] = 9055,
  [SMALL_STATE(315)] = 9065,
  [SMALL_STATE(316)] = 9075,
  [SMALL_STATE(317)] = 9085,
  [SMALL_STATE(318)] = 9095,
  [SMALL_STATE(319)] = 9105,
  [SMALL_STATE(320)] = 9115,
  [SMALL_STATE(321)] = 9125,
  [SMALL_STATE(322)] = 9135,
  [SMALL_STATE(323)] = 9145,
  [SMALL_STATE(324)] = 9155,
  [SMALL_STATE(325)] = 9163,
  [SMALL_STATE(326)] = 9173,
  [SMALL_STATE(327)] = 9183,
  [SMALL_STATE(328)] = 9193,
  [SMALL_STATE(329)] = 9203,
  [SMALL_STATE(330)] = 9213,
  [SMALL_STATE(331)] = 9223,
  [SMALL_STATE(332)] = 9233,
  [SMALL_STATE(333)] = 9243,
  [SMALL_STATE(334)] = 9253,
  [SMALL_STATE(335)] = 9260,
  [SMALL_STATE(336)] = 9267,
  [SMALL_STATE(337)] = 9274,
  [SMALL_STATE(338)] = 9281,
  [SMALL_STATE(339)] = 9288,
  [SMALL_STATE(340)] = 9295,
  [SMALL_STATE(341)] = 9302,
  [SMALL_STATE(342)] = 9309,
  [SMALL_STATE(343)] = 9316,
  [SMALL_STATE(344)] = 9323,
  [SMALL_STATE(345)] = 9330,
  [SMALL_STATE(346)] = 9337,
  [SMALL_STATE(347)] = 9344,
  [SMALL_STATE(348)] = 9351,
  [SMALL_STATE(349)] = 9358,
  [SMALL_STATE(350)] = 9365,
  [SMALL_STATE(351)] = 9372,
  [SMALL_STATE(352)] = 9379,
  [SMALL_STATE(353)] = 9386,
  [SMALL_STATE(354)] = 9393,
  [SMALL_STATE(355)] = 9400,
  [SMALL_STATE(356)] = 9407,
  [SMALL_STATE(357)] = 9414,
  [SMALL_STATE(358)] = 9421,
  [SMALL_STATE(359)] = 9428,
  [SMALL_STATE(360)] = 9435,
  [SMALL_STATE(361)] = 9442,
  [SMALL_STATE(362)] = 9449,
  [SMALL_STATE(363)] = 9456,
  [SMALL_STATE(364)] = 9463,
  [SMALL_STATE(365)] = 9470,
  [SMALL_STATE(366)] = 9477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(213),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(227),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(331),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(333),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(247),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(249),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(342),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(50),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(297),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(46),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(320),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(52),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(68),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operator, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operator, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type_identifier, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(263),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 9),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_operator, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_operator, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(366),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 10),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 10),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 13),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 13),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(264),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(261),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 10),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 10),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 16),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_binary_expression, 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_binary_expression, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(68),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(50),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(251),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(363),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(52),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(137),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(114),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(345),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(132),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(265),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 16),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 20),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 20),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2), SHIFT_REPEAT(243),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(254),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(276),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(278),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(212),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 12),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 18),
  [918] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
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
