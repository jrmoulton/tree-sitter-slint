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
#define STATE_COUNT 342
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 18

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
  sym_struct_field_declaration_list_body = 105,
  sym_component_definition = 106,
  sym_field_declaration_list = 107,
  sym_field_declaration_list_body = 108,
  sym_transitions_definition = 109,
  sym_transitions_list_definition = 110,
  sym_states_definition = 111,
  sym_states_list_definition = 112,
  sym_animate_statement = 113,
  sym_animate_declaration_list = 114,
  sym_callback_event = 115,
  sym_callback_call = 116,
  sym_if_statement_definition = 117,
  sym_for_loop_definition = 118,
  sym_property_definition = 119,
  sym_property_expr = 120,
  sym__propterty_kind = 121,
  sym_property_type_list = 122,
  sym_list_definition = 123,
  sym_list_definition_body = 124,
  sym_variable_definition = 125,
  sym_variable_set_equal = 126,
  sym__expression = 127,
  sym_expression_body_paren = 128,
  sym__expression_body = 129,
  sym_unary_expression = 130,
  sym__binary_expression = 131,
  sym_comparison_binary_expression = 132,
  sym_mult_binary_expression = 133,
  sym_ternary_expression = 134,
  sym_add_binary_expression = 135,
  sym_subtraction_operator = 136,
  sym_callback_definition = 137,
  sym_call_signature = 138,
  sym_formal_parameters = 139,
  sym_formal_parameter = 140,
  sym_comparison_operator = 141,
  sym_string = 142,
  sym_visibility_modifier = 143,
  sym_post_identifier = 144,
  sym_user_type_identifier = 145,
  sym__type_identifier = 146,
  sym_var_identifier = 147,
  sym_children_identifier = 148,
  sym_index_operator = 149,
  sym_function_identifier = 150,
  sym_function_call = 151,
  sym_reference_identifier = 152,
  sym_value = 153,
  sym_color = 154,
  sym_value_with_units = 155,
  sym_number = 156,
  sym_unit_type = 157,
  sym_language_constant = 158,
  sym_builtin_type_identifier = 159,
  aux_sym_source_file_repeat1 = 160,
  aux_sym_import_statement_repeat1 = 161,
  aux_sym_struct_field_declaration_list_body_repeat1 = 162,
  aux_sym_field_declaration_list_body_repeat1 = 163,
  aux_sym_transitions_list_definition_repeat1 = 164,
  aux_sym_states_list_definition_repeat1 = 165,
  aux_sym_animate_declaration_list_repeat1 = 166,
  aux_sym_list_definition_body_repeat1 = 167,
  aux_sym_formal_parameters_repeat1 = 168,
  aux_sym_string_repeat1 = 169,
  aux_sym_string_repeat2 = 170,
  aux_sym_var_identifier_repeat1 = 171,
  alias_sym_state_identifier = 172,
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
  [sym_struct_field_declaration_list_body] = "struct_field_declaration_list_body",
  [sym_component_definition] = "component_definition",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration_list_body] = "field_declaration_list_body",
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
  [sym_list_definition_body] = "list_definition_body",
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
  [aux_sym_struct_field_declaration_list_body_repeat1] = "struct_field_declaration_list_body_repeat1",
  [aux_sym_field_declaration_list_body_repeat1] = "field_declaration_list_body_repeat1",
  [aux_sym_transitions_list_definition_repeat1] = "transitions_list_definition_repeat1",
  [aux_sym_states_list_definition_repeat1] = "states_list_definition_repeat1",
  [aux_sym_animate_declaration_list_repeat1] = "animate_declaration_list_repeat1",
  [aux_sym_list_definition_body_repeat1] = "list_definition_body_repeat1",
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
  [sym_struct_field_declaration_list_body] = sym_struct_field_declaration_list_body,
  [sym_component_definition] = sym_component_definition,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration_list_body] = sym_field_declaration_list_body,
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
  [sym_list_definition_body] = sym_list_definition_body,
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
  [aux_sym_struct_field_declaration_list_body_repeat1] = aux_sym_struct_field_declaration_list_body_repeat1,
  [aux_sym_field_declaration_list_body_repeat1] = aux_sym_field_declaration_list_body_repeat1,
  [aux_sym_transitions_list_definition_repeat1] = aux_sym_transitions_list_definition_repeat1,
  [aux_sym_states_list_definition_repeat1] = aux_sym_states_list_definition_repeat1,
  [aux_sym_animate_declaration_list_repeat1] = aux_sym_animate_declaration_list_repeat1,
  [aux_sym_list_definition_body_repeat1] = aux_sym_list_definition_body_repeat1,
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
  [sym_struct_field_declaration_list_body] = {
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
  [sym_field_declaration_list_body] = {
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
  [sym_list_definition_body] = {
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
  [aux_sym_struct_field_declaration_list_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_body_repeat1] = {
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
  [aux_sym_list_definition_body_repeat1] = {
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_match_all, 0},
  [1] =
    {field_super_type, 0},
  [2] =
    {field_super_type, 1},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 0},
    {field_super_type, 2},
  [6] =
    {field_parameters, 0},
  [7] =
    {field_name, 1, .inherited = true},
  [8] =
    {field_name, 1},
    {field_super_type, 3},
  [10] =
    {field_name, 2},
  [11] =
    {field_type, 0},
  [12] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [14] =
    {field_name, 2},
    {field_super_type, 4},
  [16] =
    {field_name, 0},
  [17] =
    {field_prev_name, 0},
  [18] =
    {field_type, 1},
  [19] =
    {field_name, 4},
    {field_type, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [17] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 5,
  [10] = 8,
  [11] = 8,
  [12] = 4,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 16,
  [28] = 28,
  [29] = 18,
  [30] = 26,
  [31] = 31,
  [32] = 20,
  [33] = 33,
  [34] = 31,
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
  [92] = 59,
  [93] = 57,
  [94] = 55,
  [95] = 95,
  [96] = 60,
  [97] = 58,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 47,
  [105] = 105,
  [106] = 56,
  [107] = 43,
  [108] = 108,
  [109] = 109,
  [110] = 99,
  [111] = 50,
  [112] = 41,
  [113] = 47,
  [114] = 114,
  [115] = 115,
  [116] = 43,
  [117] = 41,
  [118] = 118,
  [119] = 50,
  [120] = 48,
  [121] = 114,
  [122] = 42,
  [123] = 46,
  [124] = 44,
  [125] = 45,
  [126] = 46,
  [127] = 127,
  [128] = 49,
  [129] = 45,
  [130] = 58,
  [131] = 59,
  [132] = 57,
  [133] = 133,
  [134] = 42,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 60,
  [141] = 141,
  [142] = 142,
  [143] = 48,
  [144] = 55,
  [145] = 145,
  [146] = 118,
  [147] = 56,
  [148] = 148,
  [149] = 149,
  [150] = 44,
  [151] = 148,
  [152] = 54,
  [153] = 153,
  [154] = 154,
  [155] = 70,
  [156] = 145,
  [157] = 135,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 53,
  [162] = 162,
  [163] = 163,
  [164] = 51,
  [165] = 52,
  [166] = 166,
  [167] = 82,
  [168] = 83,
  [169] = 141,
  [170] = 49,
  [171] = 171,
  [172] = 149,
  [173] = 173,
  [174] = 68,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 86,
  [179] = 54,
  [180] = 51,
  [181] = 52,
  [182] = 182,
  [183] = 183,
  [184] = 53,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 187,
  [195] = 195,
  [196] = 192,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 203,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 203,
  [211] = 211,
  [212] = 212,
  [213] = 205,
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
  [226] = 47,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 43,
  [231] = 50,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 82,
  [236] = 236,
  [237] = 236,
  [238] = 238,
  [239] = 239,
  [240] = 236,
  [241] = 236,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 244,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 251,
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
  [264] = 260,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 268,
  [270] = 270,
  [271] = 271,
  [272] = 260,
  [273] = 273,
  [274] = 267,
  [275] = 267,
  [276] = 276,
  [277] = 277,
  [278] = 268,
  [279] = 279,
  [280] = 280,
  [281] = 279,
  [282] = 277,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 82,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 294,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 305,
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
  [321] = 321,
  [322] = 322,
  [323] = 305,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 308,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 305,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(264);
      if (lookahead == '!') ADVANCE(315);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '%') ADVANCE(565);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '@') ADVANCE(549);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(260)
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'g') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(99);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(38)
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
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(48)
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
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(344);
      if (lookahead == '\r') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == 'x') ADVANCE(253);
      if (lookahead != 0) ADVANCE(344);
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
      if (lookahead == '!') ADVANCE(315);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '@') ADVANCE(549);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'b') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'y') ADVANCE(392);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(565);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(304);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(565);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '@') ADVANCE(549);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 34:
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '@') ADVANCE(549);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 35:
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(304);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '&') ADVANCE(318);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 38:
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '@') ADVANCE(549);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(549);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(629);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '_') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(549);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'g') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(307);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(327);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(187);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 'x') ADVANCE(563);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(586);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(295);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(610);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(626);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(606);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(618);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(622);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(624);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(568);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(221);
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
      if (lookahead == 'w') ADVANCE(594);
      END_STATE();
    case 243:
      if (lookahead == 'x') ADVANCE(563);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 245:
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 246:
      if (lookahead == '{') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 247:
      if (lookahead == '|') ADVANCE(319);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(629);
      if (lookahead == '\r') ADVANCE(630);
      END_STATE();
    case 259:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 260:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(259)
      END_STATE();
    case 261:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(263)
      END_STATE();
    case 262:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(263)
      if (lookahead == '\r') SKIP(261)
      END_STATE();
    case 263:
      if (eof) ADVANCE(264);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') SKIP(262)
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'g') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_transitions);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_transitions);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_states);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_states);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_animate);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_animate);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '>') ADVANCE(327);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(327);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(308);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(629);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(335);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '/') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == 'x') ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'x') ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'n') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(541);
      if (lookahead == 'r') ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 'x') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead == 'r') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'a') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'b') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'b') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'd') ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'd') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'd') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 'i') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'k') ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'k') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(502);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 's') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 't') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'w') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'y') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == 'y') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '_') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '_') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == '_') ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(186);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_physical_length);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_physical_length);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(629);
      if (lookahead == '\\') ADVANCE(258);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 263},
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
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 38},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 38},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 39},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 39},
  [84] = {.lex_state = 263},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 263},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 39},
  [91] = {.lex_state = 39},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 34},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 34},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 32},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 34},
  [110] = {.lex_state = 263},
  [111] = {.lex_state = 32},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 34},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 263},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 32},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 46},
  [128] = {.lex_state = 32},
  [129] = {.lex_state = 34},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 46},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 34},
  [136] = {.lex_state = 47},
  [137] = {.lex_state = 46},
  [138] = {.lex_state = 47},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 34},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 34},
  [145] = {.lex_state = 34},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 34},
  [148] = {.lex_state = 34},
  [149] = {.lex_state = 34},
  [150] = {.lex_state = 34},
  [151] = {.lex_state = 263},
  [152] = {.lex_state = 32},
  [153] = {.lex_state = 263},
  [154] = {.lex_state = 263},
  [155] = {.lex_state = 263},
  [156] = {.lex_state = 263},
  [157] = {.lex_state = 263},
  [158] = {.lex_state = 48},
  [159] = {.lex_state = 263},
  [160] = {.lex_state = 263},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 263},
  [163] = {.lex_state = 263},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 32},
  [166] = {.lex_state = 263},
  [167] = {.lex_state = 263},
  [168] = {.lex_state = 263},
  [169] = {.lex_state = 263},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 263},
  [172] = {.lex_state = 263},
  [173] = {.lex_state = 263},
  [174] = {.lex_state = 263},
  [175] = {.lex_state = 263},
  [176] = {.lex_state = 263},
  [177] = {.lex_state = 263},
  [178] = {.lex_state = 263},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 46},
  [183] = {.lex_state = 46},
  [184] = {.lex_state = 34},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 46},
  [189] = {.lex_state = 48},
  [190] = {.lex_state = 46},
  [191] = {.lex_state = 46},
  [192] = {.lex_state = 46},
  [193] = {.lex_state = 46},
  [194] = {.lex_state = 46},
  [195] = {.lex_state = 46},
  [196] = {.lex_state = 46},
  [197] = {.lex_state = 263},
  [198] = {.lex_state = 49},
  [199] = {.lex_state = 49},
  [200] = {.lex_state = 49},
  [201] = {.lex_state = 263},
  [202] = {.lex_state = 263},
  [203] = {.lex_state = 263},
  [204] = {.lex_state = 46},
  [205] = {.lex_state = 263},
  [206] = {.lex_state = 263},
  [207] = {.lex_state = 49},
  [208] = {.lex_state = 263},
  [209] = {.lex_state = 263},
  [210] = {.lex_state = 263},
  [211] = {.lex_state = 263},
  [212] = {.lex_state = 263},
  [213] = {.lex_state = 263},
  [214] = {.lex_state = 263},
  [215] = {.lex_state = 263},
  [216] = {.lex_state = 34},
  [217] = {.lex_state = 34},
  [218] = {.lex_state = 34},
  [219] = {.lex_state = 34},
  [220] = {.lex_state = 34},
  [221] = {.lex_state = 34},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 34},
  [225] = {.lex_state = 34},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 34},
  [228] = {.lex_state = 34},
  [229] = {.lex_state = 34},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 45},
  [237] = {.lex_state = 45},
  [238] = {.lex_state = 39},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 45},
  [241] = {.lex_state = 45},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 37},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 31},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 31},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 37},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 37},
  [257] = {.lex_state = 31},
  [258] = {.lex_state = 39},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 45},
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
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 50},
  [295] = {.lex_state = 50},
  [296] = {.lex_state = 39},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 51},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 50},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
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
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 45},
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
    [sym_source_file] = STATE(336),
    [sym__definition] = STATE(84),
    [sym_global_definition] = STATE(84),
    [sym_import_statement] = STATE(84),
    [sym_export_statement] = STATE(84),
    [sym_struct_definition] = STATE(84),
    [sym_component_definition] = STATE(84),
    [sym_visibility_modifier] = STATE(158),
    [sym_user_type_identifier] = STATE(253),
    [sym__type_identifier] = STATE(253),
    [sym_builtin_type_identifier] = STATE(253),
    [aux_sym_source_file_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_global] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_field_declaration_list] = STATE(85),
    [sym_field_declaration_list_body] = STATE(310),
    [sym__expression] = STATE(197),
    [sym_expression_body_paren] = STATE(197),
    [sym__expression_body] = STATE(197),
    [sym_unary_expression] = STATE(197),
    [sym__binary_expression] = STATE(197),
    [sym_comparison_binary_expression] = STATE(197),
    [sym_mult_binary_expression] = STATE(197),
    [sym_ternary_expression] = STATE(197),
    [sym_add_binary_expression] = STATE(197),
    [sym_string] = STATE(197),
    [sym_var_identifier] = STATE(197),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(197),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(197),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_list_definition] = STATE(311),
    [sym_list_definition_body] = STATE(309),
    [sym__expression] = STATE(212),
    [sym_expression_body_paren] = STATE(212),
    [sym__expression_body] = STATE(212),
    [sym_unary_expression] = STATE(212),
    [sym__binary_expression] = STATE(212),
    [sym_comparison_binary_expression] = STATE(212),
    [sym_mult_binary_expression] = STATE(212),
    [sym_ternary_expression] = STATE(212),
    [sym_add_binary_expression] = STATE(212),
    [sym_string] = STATE(212),
    [sym_var_identifier] = STATE(212),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(212),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(212),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(212),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(274),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(297),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(297),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(275),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(297),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(297),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(297),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(297),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(267),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_formal_parameter] = STATE(297),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(201),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__expression] = STATE(211),
    [sym_expression_body_paren] = STATE(211),
    [sym__expression_body] = STATE(211),
    [sym_unary_expression] = STATE(211),
    [sym__binary_expression] = STATE(211),
    [sym_comparison_binary_expression] = STATE(211),
    [sym_mult_binary_expression] = STATE(211),
    [sym_ternary_expression] = STATE(211),
    [sym_add_binary_expression] = STATE(211),
    [sym_string] = STATE(211),
    [sym_var_identifier] = STATE(211),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(211),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(211),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__expression] = STATE(209),
    [sym_expression_body_paren] = STATE(209),
    [sym__expression_body] = STATE(209),
    [sym_unary_expression] = STATE(209),
    [sym__binary_expression] = STATE(209),
    [sym_comparison_binary_expression] = STATE(209),
    [sym_mult_binary_expression] = STATE(209),
    [sym_ternary_expression] = STATE(209),
    [sym_add_binary_expression] = STATE(209),
    [sym_string] = STATE(209),
    [sym_var_identifier] = STATE(209),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(209),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(209),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__expression] = STATE(205),
    [sym_expression_body_paren] = STATE(205),
    [sym__expression_body] = STATE(205),
    [sym_unary_expression] = STATE(205),
    [sym__binary_expression] = STATE(205),
    [sym_comparison_binary_expression] = STATE(205),
    [sym_mult_binary_expression] = STATE(205),
    [sym_ternary_expression] = STATE(205),
    [sym_add_binary_expression] = STATE(205),
    [sym_string] = STATE(205),
    [sym_var_identifier] = STATE(205),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(205),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(205),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(205),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__expression] = STATE(169),
    [sym_expression_body_paren] = STATE(169),
    [sym__expression_body] = STATE(169),
    [sym_unary_expression] = STATE(169),
    [sym__binary_expression] = STATE(169),
    [sym_comparison_binary_expression] = STATE(169),
    [sym_mult_binary_expression] = STATE(169),
    [sym_ternary_expression] = STATE(169),
    [sym_add_binary_expression] = STATE(169),
    [sym_string] = STATE(169),
    [sym_var_identifier] = STATE(169),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(169),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(169),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(169),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__expression] = STATE(206),
    [sym_expression_body_paren] = STATE(206),
    [sym__expression_body] = STATE(206),
    [sym_unary_expression] = STATE(206),
    [sym__binary_expression] = STATE(206),
    [sym_comparison_binary_expression] = STATE(206),
    [sym_mult_binary_expression] = STATE(206),
    [sym_ternary_expression] = STATE(206),
    [sym_add_binary_expression] = STATE(206),
    [sym_string] = STATE(206),
    [sym_var_identifier] = STATE(206),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(206),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(206),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__expression] = STATE(135),
    [sym_expression_body_paren] = STATE(135),
    [sym__expression_body] = STATE(135),
    [sym_unary_expression] = STATE(135),
    [sym__binary_expression] = STATE(135),
    [sym_comparison_binary_expression] = STATE(135),
    [sym_mult_binary_expression] = STATE(135),
    [sym_ternary_expression] = STATE(135),
    [sym_add_binary_expression] = STATE(135),
    [sym_string] = STATE(135),
    [sym_var_identifier] = STATE(135),
    [sym_children_identifier] = STATE(126),
    [sym_function_identifier] = STATE(268),
    [sym_function_call] = STATE(135),
    [sym_reference_identifier] = STATE(113),
    [sym_value] = STATE(135),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(135),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_parent] = ACTIONS(75),
    [anon_sym_root] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(77),
    [sym_float_number] = ACTIONS(79),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__expression] = STATE(149),
    [sym_expression_body_paren] = STATE(149),
    [sym__expression_body] = STATE(149),
    [sym_unary_expression] = STATE(149),
    [sym__binary_expression] = STATE(149),
    [sym_comparison_binary_expression] = STATE(149),
    [sym_mult_binary_expression] = STATE(149),
    [sym_ternary_expression] = STATE(149),
    [sym_add_binary_expression] = STATE(149),
    [sym_string] = STATE(149),
    [sym_var_identifier] = STATE(149),
    [sym_children_identifier] = STATE(126),
    [sym_function_identifier] = STATE(268),
    [sym_function_call] = STATE(149),
    [sym_reference_identifier] = STATE(113),
    [sym_value] = STATE(149),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_parent] = ACTIONS(75),
    [anon_sym_root] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(77),
    [sym_float_number] = ACTIONS(79),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__expression] = STATE(157),
    [sym_expression_body_paren] = STATE(157),
    [sym__expression_body] = STATE(157),
    [sym_unary_expression] = STATE(157),
    [sym__binary_expression] = STATE(157),
    [sym_comparison_binary_expression] = STATE(157),
    [sym_mult_binary_expression] = STATE(157),
    [sym_ternary_expression] = STATE(157),
    [sym_add_binary_expression] = STATE(157),
    [sym_string] = STATE(157),
    [sym_var_identifier] = STATE(157),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(157),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(157),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__expression] = STATE(203),
    [sym_expression_body_paren] = STATE(203),
    [sym__expression_body] = STATE(203),
    [sym_unary_expression] = STATE(203),
    [sym__binary_expression] = STATE(203),
    [sym_comparison_binary_expression] = STATE(203),
    [sym_mult_binary_expression] = STATE(203),
    [sym_ternary_expression] = STATE(203),
    [sym_add_binary_expression] = STATE(203),
    [sym_string] = STATE(203),
    [sym_var_identifier] = STATE(203),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(203),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(203),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__expression] = STATE(208),
    [sym_expression_body_paren] = STATE(208),
    [sym__expression_body] = STATE(208),
    [sym_unary_expression] = STATE(208),
    [sym__binary_expression] = STATE(208),
    [sym_comparison_binary_expression] = STATE(208),
    [sym_mult_binary_expression] = STATE(208),
    [sym_ternary_expression] = STATE(208),
    [sym_add_binary_expression] = STATE(208),
    [sym_string] = STATE(208),
    [sym_var_identifier] = STATE(208),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(208),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(208),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(208),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__expression] = STATE(139),
    [sym_expression_body_paren] = STATE(139),
    [sym__expression_body] = STATE(139),
    [sym_unary_expression] = STATE(139),
    [sym__binary_expression] = STATE(139),
    [sym_comparison_binary_expression] = STATE(139),
    [sym_mult_binary_expression] = STATE(139),
    [sym_ternary_expression] = STATE(139),
    [sym_add_binary_expression] = STATE(139),
    [sym_string] = STATE(139),
    [sym_var_identifier] = STATE(139),
    [sym_children_identifier] = STATE(126),
    [sym_function_identifier] = STATE(268),
    [sym_function_call] = STATE(139),
    [sym_reference_identifier] = STATE(113),
    [sym_value] = STATE(139),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_parent] = ACTIONS(75),
    [anon_sym_root] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(77),
    [sym_float_number] = ACTIONS(79),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__expression] = STATE(141),
    [sym_expression_body_paren] = STATE(141),
    [sym__expression_body] = STATE(141),
    [sym_unary_expression] = STATE(141),
    [sym__binary_expression] = STATE(141),
    [sym_comparison_binary_expression] = STATE(141),
    [sym_mult_binary_expression] = STATE(141),
    [sym_ternary_expression] = STATE(141),
    [sym_add_binary_expression] = STATE(141),
    [sym_string] = STATE(141),
    [sym_var_identifier] = STATE(141),
    [sym_children_identifier] = STATE(126),
    [sym_function_identifier] = STATE(268),
    [sym_function_call] = STATE(141),
    [sym_reference_identifier] = STATE(113),
    [sym_value] = STATE(141),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_parent] = ACTIONS(75),
    [anon_sym_root] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(77),
    [sym_float_number] = ACTIONS(79),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__expression] = STATE(148),
    [sym_expression_body_paren] = STATE(148),
    [sym__expression_body] = STATE(148),
    [sym_unary_expression] = STATE(148),
    [sym__binary_expression] = STATE(148),
    [sym_comparison_binary_expression] = STATE(148),
    [sym_mult_binary_expression] = STATE(148),
    [sym_ternary_expression] = STATE(148),
    [sym_add_binary_expression] = STATE(148),
    [sym_string] = STATE(148),
    [sym_var_identifier] = STATE(148),
    [sym_children_identifier] = STATE(126),
    [sym_function_identifier] = STATE(268),
    [sym_function_call] = STATE(148),
    [sym_reference_identifier] = STATE(113),
    [sym_value] = STATE(148),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(148),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_parent] = ACTIONS(75),
    [anon_sym_root] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(77),
    [sym_float_number] = ACTIONS(79),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__expression] = STATE(213),
    [sym_expression_body_paren] = STATE(213),
    [sym__expression_body] = STATE(213),
    [sym_unary_expression] = STATE(213),
    [sym__binary_expression] = STATE(213),
    [sym_comparison_binary_expression] = STATE(213),
    [sym_mult_binary_expression] = STATE(213),
    [sym_ternary_expression] = STATE(213),
    [sym_add_binary_expression] = STATE(213),
    [sym_string] = STATE(213),
    [sym_var_identifier] = STATE(213),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(213),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(213),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(213),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(202),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__expression] = STATE(210),
    [sym_expression_body_paren] = STATE(210),
    [sym__expression_body] = STATE(210),
    [sym_unary_expression] = STATE(210),
    [sym__binary_expression] = STATE(210),
    [sym_comparison_binary_expression] = STATE(210),
    [sym_mult_binary_expression] = STATE(210),
    [sym_ternary_expression] = STATE(210),
    [sym_add_binary_expression] = STATE(210),
    [sym_string] = STATE(210),
    [sym_var_identifier] = STATE(210),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(210),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(210),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__expression] = STATE(151),
    [sym_expression_body_paren] = STATE(151),
    [sym__expression_body] = STATE(151),
    [sym_unary_expression] = STATE(151),
    [sym__binary_expression] = STATE(151),
    [sym_comparison_binary_expression] = STATE(151),
    [sym_mult_binary_expression] = STATE(151),
    [sym_ternary_expression] = STATE(151),
    [sym_add_binary_expression] = STATE(151),
    [sym_string] = STATE(151),
    [sym_var_identifier] = STATE(151),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(151),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(151),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(151),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
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
    [sym_children_identifier] = STATE(126),
    [sym_function_identifier] = STATE(268),
    [sym_function_call] = STATE(145),
    [sym_reference_identifier] = STATE(113),
    [sym_value] = STATE(145),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_parent] = ACTIONS(75),
    [anon_sym_root] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(77),
    [sym_float_number] = ACTIONS(79),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__expression] = STATE(172),
    [sym_expression_body_paren] = STATE(172),
    [sym__expression_body] = STATE(172),
    [sym_unary_expression] = STATE(172),
    [sym__binary_expression] = STATE(172),
    [sym_comparison_binary_expression] = STATE(172),
    [sym_mult_binary_expression] = STATE(172),
    [sym_ternary_expression] = STATE(172),
    [sym_add_binary_expression] = STATE(172),
    [sym_string] = STATE(172),
    [sym_var_identifier] = STATE(172),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(172),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(172),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(172),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__expression] = STATE(214),
    [sym_expression_body_paren] = STATE(214),
    [sym__expression_body] = STATE(215),
    [sym_unary_expression] = STATE(215),
    [sym__binary_expression] = STATE(215),
    [sym_comparison_binary_expression] = STATE(215),
    [sym_mult_binary_expression] = STATE(215),
    [sym_ternary_expression] = STATE(215),
    [sym_add_binary_expression] = STATE(215),
    [sym_string] = STATE(215),
    [sym_var_identifier] = STATE(215),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(215),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(215),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
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
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(269),
    [sym_function_call] = STATE(156),
    [sym_reference_identifier] = STATE(104),
    [sym_value] = STATE(156),
    [sym_color] = STATE(103),
    [sym_value_with_units] = STATE(103),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(103),
    [sym_builtin_type_identifier] = STATE(156),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_parent] = ACTIONS(37),
    [anon_sym_root] = ACTIONS(37),
    [anon_sym_this] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(41),
    [sym_float_number] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(45),
    [anon_sym_blue] = ACTIONS(45),
    [anon_sym_ease] = ACTIONS(45),
    [anon_sym_ease_DASHin] = ACTIONS(45),
    [anon_sym_ease_in] = ACTIONS(45),
    [anon_sym_ease_in_out] = ACTIONS(45),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(45),
    [anon_sym_ease_out] = ACTIONS(45),
    [anon_sym_ease_DASHout] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_green] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_start] = ACTIONS(45),
    [anon_sym_yellow] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
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
    [anon_sym_physical_length] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      anon_sym_export,
    ACTIONS(86), 1,
      anon_sym_transitions,
    ACTIONS(89), 1,
      anon_sym_states,
    ACTIONS(92), 1,
      anon_sym_animate,
    ACTIONS(98), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_for,
    ACTIONS(104), 1,
      anon_sym_property,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_callback,
    ACTIONS(113), 1,
      sym__identifier,
    ACTIONS(116), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(61), 1,
      sym_var_identifier,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(319), 1,
      sym_function_identifier,
    ACTIONS(95), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(119), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(122), 13,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_field_declaration_list_body_repeat1,
  [99] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(129), 1,
      anon_sym_transitions,
    ACTIONS(131), 1,
      anon_sym_states,
    ACTIONS(133), 1,
      anon_sym_animate,
    ACTIONS(137), 1,
      anon_sym_elseif,
    ACTIONS(139), 1,
      anon_sym_for,
    ACTIONS(141), 1,
      anon_sym_property,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_callback,
    ACTIONS(147), 1,
      sym__identifier,
    ACTIONS(149), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(61), 1,
      sym_var_identifier,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(319), 1,
      sym_function_identifier,
    ACTIONS(135), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_field_declaration_list_body_repeat1,
  [198] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_export,
    ACTIONS(129), 1,
      anon_sym_transitions,
    ACTIONS(131), 1,
      anon_sym_states,
    ACTIONS(133), 1,
      anon_sym_animate,
    ACTIONS(137), 1,
      anon_sym_elseif,
    ACTIONS(139), 1,
      anon_sym_for,
    ACTIONS(141), 1,
      anon_sym_property,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_callback,
    ACTIONS(147), 1,
      sym__identifier,
    ACTIONS(149), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_children_identifier,
    STATE(47), 1,
      sym_reference_identifier,
    STATE(61), 1,
      sym_var_identifier,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(319), 1,
      sym_function_identifier,
    ACTIONS(135), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_field_declaration_list_body_repeat1,
  [297] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_EQ_GT,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_var_identifier_repeat1,
    STATE(54), 1,
      sym_index_operator,
    ACTIONS(155), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(157), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(159), 29,
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
  [361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(169), 35,
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
  [413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(173), 35,
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
  [465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 13,
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
    ACTIONS(177), 28,
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
  [517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 13,
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
    ACTIONS(181), 28,
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
  [566] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_var_identifier_repeat1,
    STATE(51), 1,
      sym_index_operator,
    ACTIONS(183), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(185), 27,
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
  [623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_index_operator,
    ACTIONS(187), 11,
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
    ACTIONS(189), 28,
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
  [676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 13,
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
    ACTIONS(193), 28,
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
  [725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_index_operator,
    ACTIONS(157), 11,
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
    ACTIONS(159), 28,
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
  [778] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_var_identifier_repeat1,
    STATE(54), 1,
      sym_index_operator,
    ACTIONS(157), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(159), 27,
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
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 13,
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
    ACTIONS(177), 28,
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
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 12,
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
    ACTIONS(197), 28,
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
  [932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(179), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(181), 27,
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
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 11,
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
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 11,
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
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 11,
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
    ACTIONS(185), 28,
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
  [1172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(216), 27,
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
  [1219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(220), 27,
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
  [1266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(224), 27,
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
  [1313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(228), 27,
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
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(232), 27,
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
  [1407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(236), 27,
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
  [1454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      anon_sym_COLON,
    ACTIONS(238), 3,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_AT,
    ACTIONS(246), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(242), 27,
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
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(250), 26,
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
  [1543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(254), 26,
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
  [1581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(258), 26,
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
  [1619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(262), 26,
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
  [1657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(266), 26,
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
  [1695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(270), 26,
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
  [1733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(274), 26,
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
  [1771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(278), 26,
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
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(282), 26,
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
  [1847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(286), 26,
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
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(290), 26,
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
  [1923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(294), 26,
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
  [1961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(298), 26,
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
  [1999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(302), 26,
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
  [2037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(306), 26,
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
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(310), 26,
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
  [2113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(314), 26,
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
  [2151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(318), 26,
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
  [2189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(322), 26,
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
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(326), 26,
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
  [2265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(330), 26,
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
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(334), 26,
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
  [2341] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_global,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_visibility_modifier,
    STATE(253), 3,
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
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [2395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(340), 26,
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
  [2433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(344), 26,
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
  [2471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(348), 26,
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
  [2509] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      anon_sym_global,
    ACTIONS(355), 1,
      anon_sym_import,
    ACTIONS(358), 1,
      anon_sym_export,
    ACTIONS(361), 1,
      anon_sym_struct,
    ACTIONS(364), 1,
      sym__identifier,
    STATE(158), 1,
      sym_visibility_modifier,
    STATE(253), 3,
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
    ACTIONS(367), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [2563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(372), 26,
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
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(376), 26,
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
  [2639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(380), 26,
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
  [2677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(230), 19,
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
  [2709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(222), 19,
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
  [2741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(214), 19,
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
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 8,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(382), 16,
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
      anon_sym_AT,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(234), 19,
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
  [2837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(226), 19,
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
  [2869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(386), 16,
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
  [2900] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym_var_identifier_repeat1,
    STATE(179), 1,
      sym_index_operator,
    ACTIONS(159), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(157), 11,
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
  [2941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(394), 16,
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
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(398), 16,
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
  [3003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(402), 16,
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
  [3034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(406), 16,
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
  [3065] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      anon_sym_DOT,
    STATE(107), 1,
      aux_sym_var_identifier_repeat1,
    STATE(152), 1,
      sym_index_operator,
    ACTIONS(159), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(157), 16,
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
  [3104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(414), 16,
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
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(218), 19,
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
  [3166] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_var_identifier_repeat1,
    STATE(164), 1,
      sym_index_operator,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(183), 16,
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
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(418), 16,
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
  [3236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(422), 16,
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
  [3267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      anon_sym_DOT,
    STATE(107), 1,
      aux_sym_var_identifier_repeat1,
    STATE(152), 1,
      sym_index_operator,
    ACTIONS(159), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(157), 14,
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
  [3307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 17,
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
  [3341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(175), 18,
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
  [3373] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym_var_identifier_repeat1,
    STATE(179), 1,
      sym_index_operator,
    ACTIONS(159), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(157), 11,
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
  [3411] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_PERCENT,
    STATE(105), 1,
      sym_unit_type,
    ACTIONS(429), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(408), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(406), 11,
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
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(435), 18,
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
  [3477] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_var_identifier_repeat1,
    STATE(180), 1,
      sym_index_operator,
    ACTIONS(185), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(183), 11,
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
  [3515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(175), 13,
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
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 9,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(437), 12,
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
  [3575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(181), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(179), 12,
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
  [3608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(175), 18,
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
  [3637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(105), 1,
      sym_unit_type,
    ACTIONS(408), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(431), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(406), 14,
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
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 18,
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
  [3699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      sym_index_operator,
    ACTIONS(159), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(157), 16,
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
  [3732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    STATE(161), 1,
      sym_index_operator,
    ACTIONS(189), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(187), 16,
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
  [3765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(191), 18,
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
  [3794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    STATE(179), 1,
      sym_index_operator,
    ACTIONS(159), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(157), 11,
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
  [3826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    STATE(339), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(337), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [3860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(195), 17,
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
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(191), 13,
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
  [3916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(226), 13,
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
  [3944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(230), 13,
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
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(222), 13,
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
  [4000] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_struct_field_declaration_list,
    STATE(333), 1,
      sym_struct_field_declaration_list_body,
    STATE(286), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [4036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(179), 13,
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
  [4064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(450), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(448), 11,
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
  [4096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_export,
    STATE(66), 1,
      sym_component_definition,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [4132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_struct_field_declaration_list,
    STATE(333), 1,
      sym_struct_field_declaration_list_body,
    STATE(292), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [4168] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_export,
    STATE(72), 1,
      sym_component_definition,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [4204] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_QMARK,
    ACTIONS(466), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(454), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(460), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(470), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(234), 13,
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
  [4280] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_QMARK,
    STATE(20), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(474), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(472), 10,
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
  [4314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_export,
    STATE(76), 1,
      sym_component_definition,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [4350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(175), 13,
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
  [4378] = 3,
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
  [4406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_QMARK,
    STATE(20), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(478), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(476), 10,
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
  [4440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(437), 17,
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
  [4468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(218), 13,
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
  [4496] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_QMARK,
    STATE(20), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(460), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(482), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(480), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4534] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_QMARK,
    ACTIONS(466), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      sym_comparison_operator,
    STATE(26), 1,
      sym_subtraction_operator,
    ACTIONS(460), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(484), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
    ACTIONS(486), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_index_operator,
    ACTIONS(189), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(187), 11,
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
  [4608] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(482), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(480), 10,
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
  [4645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(183), 16,
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
  [4672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    ACTIONS(496), 18,
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
  [4699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(500), 18,
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
  [4726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 18,
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
  [4753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(478), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(476), 13,
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
  [4786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(450), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(448), 14,
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
  [4817] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(502), 1,
      anon_sym_global,
    ACTIONS(504), 1,
      anon_sym_struct,
    STATE(244), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [4850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    ACTIONS(508), 18,
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
  [4877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 18,
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
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(210), 16,
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
  [4931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 18,
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
  [4958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(520), 18,
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
  [4985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(202), 16,
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
  [5012] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [5039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
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
  [5066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 18,
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
  [5093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 18,
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
  [5120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(474), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(472), 13,
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
  [5153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(195), 12,
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
  [5180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
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
  [5207] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(484), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 18,
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
  [5275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 18,
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
  [5302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(538), 18,
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
  [5329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 18,
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
  [5356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 18,
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
  [5383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 18,
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
  [5410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(183), 11,
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
  [5436] = 3,
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
    ACTIONS(202), 11,
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
  [5462] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [5488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    STATE(290), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(291), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5548] = 3,
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
    ACTIONS(210), 11,
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
  [5574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(335), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(325), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(282), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(306), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 16,
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
  [5707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(245), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(316), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(281), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(320), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(277), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(302), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(279), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(17), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5896] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    STATE(76), 1,
      sym_field_declaration_list,
    STATE(310), 1,
      sym_field_declaration_list_body,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(307), 1,
      sym_builtin_type_identifier,
    ACTIONS(560), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(307), 1,
      sym_builtin_type_identifier,
    ACTIONS(564), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [5999] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(307), 1,
      sym_builtin_type_identifier,
    ACTIONS(560), 13,
      anon_sym_angle,
      anon_sym_bool,
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
  [6027] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6066] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6104] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 14,
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
  [6162] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6200] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 14,
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
  [6258] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(581), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6296] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6334] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6372] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6410] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6448] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(591), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6486] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    STATE(30), 1,
      sym_subtraction_operator,
    STATE(32), 1,
      sym_comparison_operator,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(597), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6543] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    ACTIONS(601), 1,
      sym__identifier,
    ACTIONS(603), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(219), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6576] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(218), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(334), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6609] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_children_identifier,
    STATE(220), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(334), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6642] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      anon_sym_STAR,
    ACTIONS(618), 1,
      sym__identifier,
    ACTIONS(621), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(219), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(624), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6675] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(629), 1,
      anon_sym_STAR,
    ACTIONS(632), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(220), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(334), 1,
      sym_var_identifier,
    ACTIONS(638), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6708] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(601), 1,
      sym__identifier,
    ACTIONS(603), 1,
      anon_sym_AT,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(216), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6741] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(318), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6768] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(301), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(322), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6822] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(255), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_index_operator,
    STATE(230), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(157), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6874] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(601), 1,
      sym__identifier,
    ACTIONS(603), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(304), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6901] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(317), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6928] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(226), 1,
      sym_reference_identifier,
    STATE(324), 1,
      sym_var_identifier,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6955] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(643), 1,
      anon_sym_DOT,
    STATE(51), 1,
      sym_index_operator,
    STATE(231), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(183), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6980] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(645), 1,
      anon_sym_DOT,
    STATE(231), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(179), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [7000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(650), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
  [7028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(654), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(330), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7058] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__identifier,
    ACTIONS(658), 1,
      anon_sym_AT,
    STATE(134), 1,
      sym_post_identifier,
    STATE(143), 1,
      sym_function_call,
    STATE(268), 1,
      sym_function_identifier,
  [7077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_AT,
    ACTIONS(660), 1,
      sym__identifier,
    STATE(120), 1,
      sym_function_call,
    STATE(122), 1,
      sym_post_identifier,
    STATE(269), 1,
      sym_function_identifier,
  [7096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      anon_sym_DASH_GT,
    STATE(94), 1,
      sym_formal_parameters,
    STATE(296), 1,
      sym_call_signature,
  [7115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(285), 1,
      sym_struct_field_declaration_list,
    STATE(333), 1,
      sym_struct_field_declaration_list_body,
  [7134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_AT,
    ACTIONS(670), 1,
      sym__identifier,
    STATE(42), 1,
      sym_post_identifier,
    STATE(48), 1,
      sym_function_call,
    STATE(278), 1,
      sym_function_identifier,
  [7153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_AT,
    ACTIONS(670), 1,
      sym__identifier,
    STATE(42), 1,
      sym_post_identifier,
    STATE(48), 1,
      sym_function_call,
    STATE(269), 1,
      sym_function_identifier,
  [7172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(285), 1,
      sym_struct_field_declaration_list,
    STATE(333), 1,
      sym_struct_field_declaration_list_body,
  [7191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(285), 1,
      sym_struct_field_declaration_list,
    STATE(333), 1,
      sym_struct_field_declaration_list_body,
  [7210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(679), 1,
      anon_sym_COLON_EQ,
    STATE(168), 1,
      sym_field_declaration_list,
    STATE(323), 1,
      sym_field_declaration_list_body,
  [7226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(681), 1,
      anon_sym_COLON_EQ,
    STATE(83), 1,
      sym_field_declaration_list,
    STATE(310), 1,
      sym_field_declaration_list_body,
  [7242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(683), 2,
      anon_sym_in,
      anon_sym_out,
  [7256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(688), 2,
      anon_sym_in,
      anon_sym_out,
  [7270] = 4,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    ACTIONS(697), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym_string_repeat2,
    ACTIONS(694), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(688), 2,
      anon_sym_in,
      anon_sym_out,
  [7298] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      aux_sym_string_repeat1,
    ACTIONS(703), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7312] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      anon_sym_COLON_EQ,
    STATE(86), 1,
      sym_field_declaration_list,
    STATE(310), 1,
      sym_field_declaration_list_body,
  [7328] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      aux_sym_string_repeat1,
    ACTIONS(710), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      anon_sym_COLON_EQ,
    STATE(178), 1,
      sym_field_declaration_list,
    STATE(323), 1,
      sym_field_declaration_list_body,
  [7358] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      aux_sym_string_repeat2,
    ACTIONS(714), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SEMI,
    STATE(313), 1,
      sym_property_expr,
    ACTIONS(718), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [7386] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SQUOTE,
    STATE(254), 1,
      aux_sym_string_repeat2,
    ACTIONS(722), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7400] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      aux_sym_string_repeat1,
    ACTIONS(724), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(312), 1,
      sym_string,
  [7437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_formal_parameters_repeat1,
  [7450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_import_statement_repeat1,
  [7463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_import_statement_repeat1,
  [7476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_field_declaration_list,
    STATE(310), 1,
      sym_field_declaration_list_body,
  [7489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_formal_parameters_repeat1,
  [7502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      sym_string,
  [7515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_formal_parameters_repeat1,
  [7537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_formal_parameters,
    STATE(147), 1,
      sym_call_signature,
  [7550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_formal_parameters,
    STATE(106), 1,
      sym_call_signature,
  [7563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_formal_parameters_repeat1,
  [7576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [7585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_formal_parameters_repeat1,
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_field_declaration_list,
    STATE(332), 1,
      sym_field_declaration_list_body,
  [7611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_formal_parameters_repeat1,
  [7624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_formal_parameters_repeat1,
  [7637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_AT,
    ACTIONS(761), 1,
      sym__identifier,
    STATE(238), 1,
      sym_function_identifier,
  [7650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_field_declaration_list,
    STATE(310), 1,
      sym_field_declaration_list_body,
  [7663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_formal_parameters,
    STATE(56), 1,
      sym_call_signature,
  [7676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_field_declaration_list,
    STATE(310), 1,
      sym_field_declaration_list_body,
  [7689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_string,
  [7702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_field_declaration_list,
    STATE(323), 1,
      sym_field_declaration_list_body,
  [7715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_field_declaration_list,
    STATE(323), 1,
      sym_field_declaration_list_body,
  [7728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_field_declaration_list,
    STATE(305), 1,
      sym_field_declaration_list_body,
  [7741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_import_statement_repeat1,
  [7754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(770), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_struct_field_declaration_list,
    STATE(333), 1,
      sym_struct_field_declaration_list_body,
  [7778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_field_declaration_list,
    STATE(323), 1,
      sym_field_declaration_list_body,
  [7791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_field_declaration_list,
    STATE(323), 1,
      sym_field_declaration_list_body,
  [7804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [7813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_import_statement_repeat1,
  [7826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      aux_sym_import_statement_repeat1,
  [7839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_struct_field_declaration_list,
    STATE(333), 1,
      sym_struct_field_declaration_list_body,
  [7852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_transitions_list_definition,
  [7862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(782), 1,
      anon_sym_children,
  [7872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(784), 1,
      anon_sym_children,
  [7882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    ACTIONS(788), 1,
      anon_sym_DASH_GT,
  [7892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      aux_sym_color_token1,
    ACTIONS(792), 1,
      aux_sym_color_token2,
  [7918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_states_list_definition,
  [7928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_animate_declaration_list,
  [7938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(798), 1,
      anon_sym_children,
  [7956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_in,
  [7963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
  [7970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_COLON_EQ,
  [7977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_COLON,
  [7984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_children,
  [7991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
  [7998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
  [8005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SEMI,
  [8012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SEMI,
  [8019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_SEMI,
  [8026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [8033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_LT,
  [8040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_COLON_EQ,
  [8047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COLON,
  [8054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_COLON,
  [8061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_EQ_GT,
  [8068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
  [8075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_SEMI,
  [8082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COLON_EQ,
  [8089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
  [8096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_COLON_EQ,
  [8103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_SEMI,
  [8110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_when,
  [8117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_children,
  [8124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__identifier,
  [8131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_from,
  [8138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_from,
  [8145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_SEMI,
  [8152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [8159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
  [8166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_COLON,
  [8173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [8180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      ts_builtin_sym_end,
  [8187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_GT,
  [8194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_GT,
  [8201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_GT,
  [8208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_from,
  [8215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 99,
  [SMALL_STATE(37)] = 198,
  [SMALL_STATE(38)] = 297,
  [SMALL_STATE(39)] = 361,
  [SMALL_STATE(40)] = 413,
  [SMALL_STATE(41)] = 465,
  [SMALL_STATE(42)] = 517,
  [SMALL_STATE(43)] = 566,
  [SMALL_STATE(44)] = 623,
  [SMALL_STATE(45)] = 676,
  [SMALL_STATE(46)] = 725,
  [SMALL_STATE(47)] = 778,
  [SMALL_STATE(48)] = 835,
  [SMALL_STATE(49)] = 884,
  [SMALL_STATE(50)] = 932,
  [SMALL_STATE(51)] = 984,
  [SMALL_STATE(52)] = 1031,
  [SMALL_STATE(53)] = 1078,
  [SMALL_STATE(54)] = 1125,
  [SMALL_STATE(55)] = 1172,
  [SMALL_STATE(56)] = 1219,
  [SMALL_STATE(57)] = 1266,
  [SMALL_STATE(58)] = 1313,
  [SMALL_STATE(59)] = 1360,
  [SMALL_STATE(60)] = 1407,
  [SMALL_STATE(61)] = 1454,
  [SMALL_STATE(62)] = 1505,
  [SMALL_STATE(63)] = 1543,
  [SMALL_STATE(64)] = 1581,
  [SMALL_STATE(65)] = 1619,
  [SMALL_STATE(66)] = 1657,
  [SMALL_STATE(67)] = 1695,
  [SMALL_STATE(68)] = 1733,
  [SMALL_STATE(69)] = 1771,
  [SMALL_STATE(70)] = 1809,
  [SMALL_STATE(71)] = 1847,
  [SMALL_STATE(72)] = 1885,
  [SMALL_STATE(73)] = 1923,
  [SMALL_STATE(74)] = 1961,
  [SMALL_STATE(75)] = 1999,
  [SMALL_STATE(76)] = 2037,
  [SMALL_STATE(77)] = 2075,
  [SMALL_STATE(78)] = 2113,
  [SMALL_STATE(79)] = 2151,
  [SMALL_STATE(80)] = 2189,
  [SMALL_STATE(81)] = 2227,
  [SMALL_STATE(82)] = 2265,
  [SMALL_STATE(83)] = 2303,
  [SMALL_STATE(84)] = 2341,
  [SMALL_STATE(85)] = 2395,
  [SMALL_STATE(86)] = 2433,
  [SMALL_STATE(87)] = 2471,
  [SMALL_STATE(88)] = 2509,
  [SMALL_STATE(89)] = 2563,
  [SMALL_STATE(90)] = 2601,
  [SMALL_STATE(91)] = 2639,
  [SMALL_STATE(92)] = 2677,
  [SMALL_STATE(93)] = 2709,
  [SMALL_STATE(94)] = 2741,
  [SMALL_STATE(95)] = 2773,
  [SMALL_STATE(96)] = 2805,
  [SMALL_STATE(97)] = 2837,
  [SMALL_STATE(98)] = 2869,
  [SMALL_STATE(99)] = 2900,
  [SMALL_STATE(100)] = 2941,
  [SMALL_STATE(101)] = 2972,
  [SMALL_STATE(102)] = 3003,
  [SMALL_STATE(103)] = 3034,
  [SMALL_STATE(104)] = 3065,
  [SMALL_STATE(105)] = 3104,
  [SMALL_STATE(106)] = 3135,
  [SMALL_STATE(107)] = 3166,
  [SMALL_STATE(108)] = 3205,
  [SMALL_STATE(109)] = 3236,
  [SMALL_STATE(110)] = 3267,
  [SMALL_STATE(111)] = 3307,
  [SMALL_STATE(112)] = 3341,
  [SMALL_STATE(113)] = 3373,
  [SMALL_STATE(114)] = 3411,
  [SMALL_STATE(115)] = 3447,
  [SMALL_STATE(116)] = 3477,
  [SMALL_STATE(117)] = 3515,
  [SMALL_STATE(118)] = 3546,
  [SMALL_STATE(119)] = 3575,
  [SMALL_STATE(120)] = 3608,
  [SMALL_STATE(121)] = 3637,
  [SMALL_STATE(122)] = 3670,
  [SMALL_STATE(123)] = 3699,
  [SMALL_STATE(124)] = 3732,
  [SMALL_STATE(125)] = 3765,
  [SMALL_STATE(126)] = 3794,
  [SMALL_STATE(127)] = 3826,
  [SMALL_STATE(128)] = 3860,
  [SMALL_STATE(129)] = 3888,
  [SMALL_STATE(130)] = 3916,
  [SMALL_STATE(131)] = 3944,
  [SMALL_STATE(132)] = 3972,
  [SMALL_STATE(133)] = 4000,
  [SMALL_STATE(134)] = 4036,
  [SMALL_STATE(135)] = 4064,
  [SMALL_STATE(136)] = 4096,
  [SMALL_STATE(137)] = 4132,
  [SMALL_STATE(138)] = 4168,
  [SMALL_STATE(139)] = 4204,
  [SMALL_STATE(140)] = 4252,
  [SMALL_STATE(141)] = 4280,
  [SMALL_STATE(142)] = 4314,
  [SMALL_STATE(143)] = 4350,
  [SMALL_STATE(144)] = 4378,
  [SMALL_STATE(145)] = 4406,
  [SMALL_STATE(146)] = 4440,
  [SMALL_STATE(147)] = 4468,
  [SMALL_STATE(148)] = 4496,
  [SMALL_STATE(149)] = 4534,
  [SMALL_STATE(150)] = 4576,
  [SMALL_STATE(151)] = 4608,
  [SMALL_STATE(152)] = 4645,
  [SMALL_STATE(153)] = 4672,
  [SMALL_STATE(154)] = 4699,
  [SMALL_STATE(155)] = 4726,
  [SMALL_STATE(156)] = 4753,
  [SMALL_STATE(157)] = 4786,
  [SMALL_STATE(158)] = 4817,
  [SMALL_STATE(159)] = 4850,
  [SMALL_STATE(160)] = 4877,
  [SMALL_STATE(161)] = 4904,
  [SMALL_STATE(162)] = 4931,
  [SMALL_STATE(163)] = 4958,
  [SMALL_STATE(164)] = 4985,
  [SMALL_STATE(165)] = 5012,
  [SMALL_STATE(166)] = 5039,
  [SMALL_STATE(167)] = 5066,
  [SMALL_STATE(168)] = 5093,
  [SMALL_STATE(169)] = 5120,
  [SMALL_STATE(170)] = 5153,
  [SMALL_STATE(171)] = 5180,
  [SMALL_STATE(172)] = 5207,
  [SMALL_STATE(173)] = 5248,
  [SMALL_STATE(174)] = 5275,
  [SMALL_STATE(175)] = 5302,
  [SMALL_STATE(176)] = 5329,
  [SMALL_STATE(177)] = 5356,
  [SMALL_STATE(178)] = 5383,
  [SMALL_STATE(179)] = 5410,
  [SMALL_STATE(180)] = 5436,
  [SMALL_STATE(181)] = 5462,
  [SMALL_STATE(182)] = 5488,
  [SMALL_STATE(183)] = 5518,
  [SMALL_STATE(184)] = 5548,
  [SMALL_STATE(185)] = 5574,
  [SMALL_STATE(186)] = 5601,
  [SMALL_STATE(187)] = 5628,
  [SMALL_STATE(188)] = 5655,
  [SMALL_STATE(189)] = 5682,
  [SMALL_STATE(190)] = 5707,
  [SMALL_STATE(191)] = 5734,
  [SMALL_STATE(192)] = 5761,
  [SMALL_STATE(193)] = 5788,
  [SMALL_STATE(194)] = 5815,
  [SMALL_STATE(195)] = 5842,
  [SMALL_STATE(196)] = 5869,
  [SMALL_STATE(197)] = 5896,
  [SMALL_STATE(198)] = 5943,
  [SMALL_STATE(199)] = 5971,
  [SMALL_STATE(200)] = 5999,
  [SMALL_STATE(201)] = 6027,
  [SMALL_STATE(202)] = 6066,
  [SMALL_STATE(203)] = 6104,
  [SMALL_STATE(204)] = 6142,
  [SMALL_STATE(205)] = 6162,
  [SMALL_STATE(206)] = 6200,
  [SMALL_STATE(207)] = 6238,
  [SMALL_STATE(208)] = 6258,
  [SMALL_STATE(209)] = 6296,
  [SMALL_STATE(210)] = 6334,
  [SMALL_STATE(211)] = 6372,
  [SMALL_STATE(212)] = 6410,
  [SMALL_STATE(213)] = 6448,
  [SMALL_STATE(214)] = 6486,
  [SMALL_STATE(215)] = 6521,
  [SMALL_STATE(216)] = 6543,
  [SMALL_STATE(217)] = 6576,
  [SMALL_STATE(218)] = 6609,
  [SMALL_STATE(219)] = 6642,
  [SMALL_STATE(220)] = 6675,
  [SMALL_STATE(221)] = 6708,
  [SMALL_STATE(222)] = 6741,
  [SMALL_STATE(223)] = 6768,
  [SMALL_STATE(224)] = 6795,
  [SMALL_STATE(225)] = 6822,
  [SMALL_STATE(226)] = 6849,
  [SMALL_STATE(227)] = 6874,
  [SMALL_STATE(228)] = 6901,
  [SMALL_STATE(229)] = 6928,
  [SMALL_STATE(230)] = 6955,
  [SMALL_STATE(231)] = 6980,
  [SMALL_STATE(232)] = 7000,
  [SMALL_STATE(233)] = 7015,
  [SMALL_STATE(234)] = 7028,
  [SMALL_STATE(235)] = 7043,
  [SMALL_STATE(236)] = 7058,
  [SMALL_STATE(237)] = 7077,
  [SMALL_STATE(238)] = 7096,
  [SMALL_STATE(239)] = 7115,
  [SMALL_STATE(240)] = 7134,
  [SMALL_STATE(241)] = 7153,
  [SMALL_STATE(242)] = 7172,
  [SMALL_STATE(243)] = 7191,
  [SMALL_STATE(244)] = 7210,
  [SMALL_STATE(245)] = 7226,
  [SMALL_STATE(246)] = 7242,
  [SMALL_STATE(247)] = 7256,
  [SMALL_STATE(248)] = 7270,
  [SMALL_STATE(249)] = 7284,
  [SMALL_STATE(250)] = 7298,
  [SMALL_STATE(251)] = 7312,
  [SMALL_STATE(252)] = 7328,
  [SMALL_STATE(253)] = 7342,
  [SMALL_STATE(254)] = 7358,
  [SMALL_STATE(255)] = 7372,
  [SMALL_STATE(256)] = 7386,
  [SMALL_STATE(257)] = 7400,
  [SMALL_STATE(258)] = 7414,
  [SMALL_STATE(259)] = 7424,
  [SMALL_STATE(260)] = 7437,
  [SMALL_STATE(261)] = 7450,
  [SMALL_STATE(262)] = 7463,
  [SMALL_STATE(263)] = 7476,
  [SMALL_STATE(264)] = 7489,
  [SMALL_STATE(265)] = 7502,
  [SMALL_STATE(266)] = 7515,
  [SMALL_STATE(267)] = 7524,
  [SMALL_STATE(268)] = 7537,
  [SMALL_STATE(269)] = 7550,
  [SMALL_STATE(270)] = 7563,
  [SMALL_STATE(271)] = 7576,
  [SMALL_STATE(272)] = 7585,
  [SMALL_STATE(273)] = 7598,
  [SMALL_STATE(274)] = 7611,
  [SMALL_STATE(275)] = 7624,
  [SMALL_STATE(276)] = 7637,
  [SMALL_STATE(277)] = 7650,
  [SMALL_STATE(278)] = 7663,
  [SMALL_STATE(279)] = 7676,
  [SMALL_STATE(280)] = 7689,
  [SMALL_STATE(281)] = 7702,
  [SMALL_STATE(282)] = 7715,
  [SMALL_STATE(283)] = 7728,
  [SMALL_STATE(284)] = 7741,
  [SMALL_STATE(285)] = 7754,
  [SMALL_STATE(286)] = 7765,
  [SMALL_STATE(287)] = 7778,
  [SMALL_STATE(288)] = 7791,
  [SMALL_STATE(289)] = 7804,
  [SMALL_STATE(290)] = 7813,
  [SMALL_STATE(291)] = 7826,
  [SMALL_STATE(292)] = 7839,
  [SMALL_STATE(293)] = 7852,
  [SMALL_STATE(294)] = 7862,
  [SMALL_STATE(295)] = 7872,
  [SMALL_STATE(296)] = 7882,
  [SMALL_STATE(297)] = 7892,
  [SMALL_STATE(298)] = 7900,
  [SMALL_STATE(299)] = 7908,
  [SMALL_STATE(300)] = 7918,
  [SMALL_STATE(301)] = 7928,
  [SMALL_STATE(302)] = 7938,
  [SMALL_STATE(303)] = 7946,
  [SMALL_STATE(304)] = 7956,
  [SMALL_STATE(305)] = 7963,
  [SMALL_STATE(306)] = 7970,
  [SMALL_STATE(307)] = 7977,
  [SMALL_STATE(308)] = 7984,
  [SMALL_STATE(309)] = 7991,
  [SMALL_STATE(310)] = 7998,
  [SMALL_STATE(311)] = 8005,
  [SMALL_STATE(312)] = 8012,
  [SMALL_STATE(313)] = 8019,
  [SMALL_STATE(314)] = 8026,
  [SMALL_STATE(315)] = 8033,
  [SMALL_STATE(316)] = 8040,
  [SMALL_STATE(317)] = 8047,
  [SMALL_STATE(318)] = 8054,
  [SMALL_STATE(319)] = 8061,
  [SMALL_STATE(320)] = 8068,
  [SMALL_STATE(321)] = 8075,
  [SMALL_STATE(322)] = 8082,
  [SMALL_STATE(323)] = 8089,
  [SMALL_STATE(324)] = 8096,
  [SMALL_STATE(325)] = 8103,
  [SMALL_STATE(326)] = 8110,
  [SMALL_STATE(327)] = 8117,
  [SMALL_STATE(328)] = 8124,
  [SMALL_STATE(329)] = 8131,
  [SMALL_STATE(330)] = 8138,
  [SMALL_STATE(331)] = 8145,
  [SMALL_STATE(332)] = 8152,
  [SMALL_STATE(333)] = 8159,
  [SMALL_STATE(334)] = 8166,
  [SMALL_STATE(335)] = 8173,
  [SMALL_STATE(336)] = 8180,
  [SMALL_STATE(337)] = 8187,
  [SMALL_STATE(338)] = 8194,
  [SMALL_STATE(339)] = 8201,
  [SMALL_STATE(340)] = 8208,
  [SMALL_STATE(341)] = 8215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(204),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(293),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(300),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(223),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(227),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(315),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(44),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(276),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(38),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(303),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(45),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(95),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operator, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operator, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(240),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_operator, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_operator, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(341),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(237),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(236),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_binary_expression, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_binary_expression, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(95),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 2, .production_id = 7),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(124),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(104),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(308),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(125),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(44),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(226),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(327),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(45),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(241),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 2),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2), SHIFT_REPEAT(217),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(228),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(248),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(250),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(195),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [862] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 10),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 15),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
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
