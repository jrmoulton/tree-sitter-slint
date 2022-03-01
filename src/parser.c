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
#define STATE_COUNT 347
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 175
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
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_QMARK = 31,
  anon_sym_callback = 32,
  anon_sym_DASH_GT = 33,
  anon_sym_BANG = 34,
  anon_sym_DASH = 35,
  anon_sym_PLUS = 36,
  anon_sym_STAR = 37,
  anon_sym_SLASH = 38,
  anon_sym_AMP_AMP = 39,
  anon_sym_PIPE_PIPE = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_PLUS_EQ = 43,
  anon_sym_DASH_EQ = 44,
  anon_sym_STAR_EQ = 45,
  anon_sym_SLASH_EQ = 46,
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
  sym_callback_definition = 136,
  sym_call_signature = 137,
  sym_formal_parameters = 138,
  sym_formal_parameter = 139,
  sym_unary_prec_operator = 140,
  sym_add_prec_operator = 141,
  sym_mult_prec_operator = 142,
  sym_comparison_operator = 143,
  sym_assignment_prec_operator = 144,
  sym_string = 145,
  sym_visibility_modifier = 146,
  sym_post_identifier = 147,
  sym_user_type_identifier = 148,
  sym__type_identifier = 149,
  sym_var_identifier = 150,
  sym_children_identifier = 151,
  sym_index_operator = 152,
  sym_function_identifier = 153,
  sym_function_call = 154,
  sym_reference_identifier = 155,
  sym_value = 156,
  sym_color = 157,
  sym_value_with_units = 158,
  sym_number = 159,
  sym_unit_type = 160,
  sym_language_constant = 161,
  sym_builtin_type_identifier = 162,
  aux_sym_source_file_repeat1 = 163,
  aux_sym_import_statement_repeat1 = 164,
  aux_sym_struct_field_declaration_list_body_repeat1 = 165,
  aux_sym_field_declaration_list_body_repeat1 = 166,
  aux_sym_transitions_list_definition_repeat1 = 167,
  aux_sym_states_list_definition_repeat1 = 168,
  aux_sym_animate_declaration_list_repeat1 = 169,
  aux_sym_list_definition_body_repeat1 = 170,
  aux_sym_formal_parameters_repeat1 = 171,
  aux_sym_string_repeat1 = 172,
  aux_sym_string_repeat2 = 173,
  aux_sym_var_identifier_repeat1 = 174,
  alias_sym_state_identifier = 175,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [anon_sym_callback] = "callback",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
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
  [sym_callback_definition] = "callback_definition",
  [sym_call_signature] = "call_signature",
  [sym_formal_parameters] = "formal_parameters",
  [sym_formal_parameter] = "formal_parameter",
  [sym_unary_prec_operator] = "unary_prec_operator",
  [sym_add_prec_operator] = "add_prec_operator",
  [sym_mult_prec_operator] = "mult_prec_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_assignment_prec_operator] = "assignment_prec_operator",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_callback] = anon_sym_callback,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
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
  [sym_callback_definition] = sym_callback_definition,
  [sym_call_signature] = sym_call_signature,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_formal_parameter] = sym_formal_parameter,
  [sym_unary_prec_operator] = sym_unary_prec_operator,
  [sym_add_prec_operator] = sym_add_prec_operator,
  [sym_mult_prec_operator] = sym_mult_prec_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_assignment_prec_operator] = sym_assignment_prec_operator,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [sym_unary_prec_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_add_prec_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_mult_prec_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_prec_operator] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 4,
  [9] = 7,
  [10] = 6,
  [11] = 7,
  [12] = 6,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 16,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 20,
  [29] = 18,
  [30] = 26,
  [31] = 31,
  [32] = 16,
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
  [95] = 57,
  [96] = 60,
  [97] = 61,
  [98] = 63,
  [99] = 99,
  [100] = 56,
  [101] = 101,
  [102] = 59,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 49,
  [110] = 110,
  [111] = 48,
  [112] = 112,
  [113] = 103,
  [114] = 44,
  [115] = 52,
  [116] = 116,
  [117] = 48,
  [118] = 118,
  [119] = 49,
  [120] = 51,
  [121] = 47,
  [122] = 122,
  [123] = 45,
  [124] = 116,
  [125] = 44,
  [126] = 52,
  [127] = 50,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 46,
  [134] = 134,
  [135] = 53,
  [136] = 57,
  [137] = 122,
  [138] = 138,
  [139] = 132,
  [140] = 140,
  [141] = 45,
  [142] = 46,
  [143] = 47,
  [144] = 50,
  [145] = 51,
  [146] = 146,
  [147] = 59,
  [148] = 60,
  [149] = 63,
  [150] = 128,
  [151] = 151,
  [152] = 56,
  [153] = 61,
  [154] = 129,
  [155] = 130,
  [156] = 156,
  [157] = 131,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 81,
  [163] = 66,
  [164] = 62,
  [165] = 165,
  [166] = 80,
  [167] = 167,
  [168] = 54,
  [169] = 55,
  [170] = 58,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 75,
  [178] = 53,
  [179] = 179,
  [180] = 87,
  [181] = 181,
  [182] = 182,
  [183] = 55,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 58,
  [188] = 62,
  [189] = 54,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 196,
  [197] = 196,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 206,
  [213] = 210,
  [214] = 214,
  [215] = 206,
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
  [227] = 49,
  [228] = 228,
  [229] = 48,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 52,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 81,
  [240] = 240,
  [241] = 240,
  [242] = 242,
  [243] = 240,
  [244] = 240,
  [245] = 245,
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
  [257] = 251,
  [258] = 258,
  [259] = 256,
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
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 270,
  [281] = 278,
  [282] = 282,
  [283] = 276,
  [284] = 284,
  [285] = 265,
  [286] = 278,
  [287] = 287,
  [288] = 271,
  [289] = 270,
  [290] = 290,
  [291] = 276,
  [292] = 292,
  [293] = 81,
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
  [305] = 298,
  [306] = 306,
  [307] = 307,
  [308] = 298,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 310,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 310,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 311,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 310,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(264);
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '%') ADVANCE(565);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(308);
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
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '-') ADVANCE(313);
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
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(304);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(308);
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
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(308);
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
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(308);
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
      if (lookahead == ')') ADVANCE(307);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(304);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(308);
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
      if (lookahead == '&') ADVANCE(322);
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
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '*') ADVANCE(319);
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
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '*') ADVANCE(318);
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
      if (lookahead == '=') ADVANCE(329);
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
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(311);
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
      if (lookahead == 'k') ADVANCE(309);
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
      if (lookahead == '|') ADVANCE(323);
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
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '?') ADVANCE(308);
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
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(327);
      if (lookahead == '>') ADVANCE(311);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(311);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(328);
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
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
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
      if (lookahead == 'k') ADVANCE(310);
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
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30},
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
  [62] = {.lex_state = 38},
  [63] = {.lex_state = 38},
  [64] = {.lex_state = 38},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 263},
  [68] = {.lex_state = 263},
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
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 39},
  [91] = {.lex_state = 39},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 32},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 32},
  [112] = {.lex_state = 34},
  [113] = {.lex_state = 263},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 32},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 263},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 32},
  [125] = {.lex_state = 34},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 32},
  [128] = {.lex_state = 34},
  [129] = {.lex_state = 34},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 34},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 46},
  [139] = {.lex_state = 263},
  [140] = {.lex_state = 47},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 34},
  [145] = {.lex_state = 34},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 34},
  [148] = {.lex_state = 34},
  [149] = {.lex_state = 34},
  [150] = {.lex_state = 263},
  [151] = {.lex_state = 47},
  [152] = {.lex_state = 34},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 263},
  [155] = {.lex_state = 263},
  [156] = {.lex_state = 46},
  [157] = {.lex_state = 263},
  [158] = {.lex_state = 47},
  [159] = {.lex_state = 263},
  [160] = {.lex_state = 263},
  [161] = {.lex_state = 263},
  [162] = {.lex_state = 263},
  [163] = {.lex_state = 263},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 263},
  [166] = {.lex_state = 263},
  [167] = {.lex_state = 263},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 32},
  [171] = {.lex_state = 263},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 263},
  [174] = {.lex_state = 263},
  [175] = {.lex_state = 263},
  [176] = {.lex_state = 263},
  [177] = {.lex_state = 263},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 263},
  [180] = {.lex_state = 263},
  [181] = {.lex_state = 263},
  [182] = {.lex_state = 263},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 46},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 263},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 34},
  [189] = {.lex_state = 34},
  [190] = {.lex_state = 46},
  [191] = {.lex_state = 48},
  [192] = {.lex_state = 46},
  [193] = {.lex_state = 46},
  [194] = {.lex_state = 46},
  [195] = {.lex_state = 46},
  [196] = {.lex_state = 46},
  [197] = {.lex_state = 46},
  [198] = {.lex_state = 46},
  [199] = {.lex_state = 46},
  [200] = {.lex_state = 46},
  [201] = {.lex_state = 46},
  [202] = {.lex_state = 263},
  [203] = {.lex_state = 49},
  [204] = {.lex_state = 49},
  [205] = {.lex_state = 49},
  [206] = {.lex_state = 263},
  [207] = {.lex_state = 263},
  [208] = {.lex_state = 263},
  [209] = {.lex_state = 263},
  [210] = {.lex_state = 263},
  [211] = {.lex_state = 263},
  [212] = {.lex_state = 263},
  [213] = {.lex_state = 263},
  [214] = {.lex_state = 263},
  [215] = {.lex_state = 263},
  [216] = {.lex_state = 46},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 263},
  [219] = {.lex_state = 263},
  [220] = {.lex_state = 34},
  [221] = {.lex_state = 34},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 34},
  [225] = {.lex_state = 34},
  [226] = {.lex_state = 34},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 34},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 34},
  [231] = {.lex_state = 34},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 34},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 34},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 34},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 45},
  [241] = {.lex_state = 45},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 45},
  [244] = {.lex_state = 45},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 39},
  [254] = {.lex_state = 31},
  [255] = {.lex_state = 37},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 37},
  [261] = {.lex_state = 31},
  [262] = {.lex_state = 37},
  [263] = {.lex_state = 31},
  [264] = {.lex_state = 39},
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
  [275] = {.lex_state = 0},
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
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 45},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 50},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 51},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 50},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 50},
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
  [343] = {.lex_state = 45},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_callback] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(341),
    [sym__definition] = STATE(67),
    [sym_global_definition] = STATE(67),
    [sym_import_statement] = STATE(67),
    [sym_export_statement] = STATE(67),
    [sym_struct_definition] = STATE(67),
    [sym_component_definition] = STATE(67),
    [sym_visibility_modifier] = STATE(172),
    [sym_user_type_identifier] = STATE(251),
    [sym__type_identifier] = STATE(251),
    [sym_builtin_type_identifier] = STATE(251),
    [aux_sym_source_file_repeat1] = STATE(67),
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
    [sym_field_declaration_list] = STATE(79),
    [sym_field_declaration_list_body] = STATE(313),
    [sym__expression] = STATE(186),
    [sym_expression_body_paren] = STATE(186),
    [sym__expression_body] = STATE(186),
    [sym_unary_expression] = STATE(186),
    [sym__binary_expression] = STATE(186),
    [sym_comparison_binary_expression] = STATE(186),
    [sym_mult_binary_expression] = STATE(186),
    [sym_ternary_expression] = STATE(186),
    [sym_add_binary_expression] = STATE(186),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(186),
    [sym_var_identifier] = STATE(186),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(186),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(186),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym_list_definition] = STATE(329),
    [sym_list_definition_body] = STATE(323),
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(207),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(207),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(306),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(306),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(291),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(306),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(306),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(306),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(283),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(306),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(276),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(202),
    [sym_expression_body_paren] = STATE(202),
    [sym__expression_body] = STATE(202),
    [sym_unary_expression] = STATE(202),
    [sym__binary_expression] = STATE(202),
    [sym_comparison_binary_expression] = STATE(202),
    [sym_mult_binary_expression] = STATE(202),
    [sym_ternary_expression] = STATE(202),
    [sym_add_binary_expression] = STATE(202),
    [sym_formal_parameter] = STATE(306),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(202),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(139),
    [sym_expression_body_paren] = STATE(139),
    [sym__expression_body] = STATE(139),
    [sym_unary_expression] = STATE(139),
    [sym__binary_expression] = STATE(139),
    [sym_comparison_binary_expression] = STATE(139),
    [sym_mult_binary_expression] = STATE(139),
    [sym_ternary_expression] = STATE(139),
    [sym_add_binary_expression] = STATE(139),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(139),
    [sym_var_identifier] = STATE(139),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(139),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(139),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(132),
    [sym_expression_body_paren] = STATE(132),
    [sym__expression_body] = STATE(132),
    [sym_unary_expression] = STATE(132),
    [sym__binary_expression] = STATE(132),
    [sym_comparison_binary_expression] = STATE(132),
    [sym_mult_binary_expression] = STATE(132),
    [sym_ternary_expression] = STATE(132),
    [sym_add_binary_expression] = STATE(132),
    [sym_unary_prec_operator] = STATE(21),
    [sym_string] = STATE(132),
    [sym_var_identifier] = STATE(132),
    [sym_children_identifier] = STATE(143),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(132),
    [sym_reference_identifier] = STATE(119),
    [sym_value] = STATE(132),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(116),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(132),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_parent] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_this] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(75),
    [sym_float_number] = ACTIONS(77),
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
    [sym__expression] = STATE(212),
    [sym_expression_body_paren] = STATE(212),
    [sym__expression_body] = STATE(212),
    [sym_unary_expression] = STATE(212),
    [sym__binary_expression] = STATE(212),
    [sym_comparison_binary_expression] = STATE(212),
    [sym_mult_binary_expression] = STATE(212),
    [sym_ternary_expression] = STATE(212),
    [sym_add_binary_expression] = STATE(212),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(212),
    [sym_var_identifier] = STATE(212),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(212),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(212),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(212),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(150),
    [sym_expression_body_paren] = STATE(150),
    [sym__expression_body] = STATE(150),
    [sym_unary_expression] = STATE(150),
    [sym__binary_expression] = STATE(150),
    [sym_comparison_binary_expression] = STATE(150),
    [sym_mult_binary_expression] = STATE(150),
    [sym_ternary_expression] = STATE(150),
    [sym_add_binary_expression] = STATE(150),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(150),
    [sym_var_identifier] = STATE(150),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(150),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(150),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(150),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(155),
    [sym_expression_body_paren] = STATE(155),
    [sym__expression_body] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym__binary_expression] = STATE(155),
    [sym_comparison_binary_expression] = STATE(155),
    [sym_mult_binary_expression] = STATE(155),
    [sym_ternary_expression] = STATE(155),
    [sym_add_binary_expression] = STATE(155),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(155),
    [sym_var_identifier] = STATE(155),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(155),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(155),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(155),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(210),
    [sym_expression_body_paren] = STATE(210),
    [sym__expression_body] = STATE(210),
    [sym_unary_expression] = STATE(210),
    [sym__binary_expression] = STATE(210),
    [sym_comparison_binary_expression] = STATE(210),
    [sym_mult_binary_expression] = STATE(210),
    [sym_ternary_expression] = STATE(210),
    [sym_add_binary_expression] = STATE(210),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(210),
    [sym_var_identifier] = STATE(210),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(210),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(210),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
  [20] = {
    [sym__expression] = STATE(154),
    [sym_expression_body_paren] = STATE(154),
    [sym__expression_body] = STATE(154),
    [sym_unary_expression] = STATE(154),
    [sym__binary_expression] = STATE(154),
    [sym_comparison_binary_expression] = STATE(154),
    [sym_mult_binary_expression] = STATE(154),
    [sym_ternary_expression] = STATE(154),
    [sym_add_binary_expression] = STATE(154),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(154),
    [sym_var_identifier] = STATE(154),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(154),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(154),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(154),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
  [21] = {
    [sym__expression] = STATE(128),
    [sym_expression_body_paren] = STATE(128),
    [sym__expression_body] = STATE(128),
    [sym_unary_expression] = STATE(128),
    [sym__binary_expression] = STATE(128),
    [sym_comparison_binary_expression] = STATE(128),
    [sym_mult_binary_expression] = STATE(128),
    [sym_ternary_expression] = STATE(128),
    [sym_add_binary_expression] = STATE(128),
    [sym_unary_prec_operator] = STATE(21),
    [sym_string] = STATE(128),
    [sym_var_identifier] = STATE(128),
    [sym_children_identifier] = STATE(143),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(128),
    [sym_reference_identifier] = STATE(119),
    [sym_value] = STATE(128),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(116),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_parent] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_this] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(75),
    [sym_float_number] = ACTIONS(77),
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
    [sym__expression] = STATE(206),
    [sym_expression_body_paren] = STATE(206),
    [sym__expression_body] = STATE(206),
    [sym_unary_expression] = STATE(206),
    [sym__binary_expression] = STATE(206),
    [sym_comparison_binary_expression] = STATE(206),
    [sym_mult_binary_expression] = STATE(206),
    [sym_ternary_expression] = STATE(206),
    [sym_add_binary_expression] = STATE(206),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(206),
    [sym_var_identifier] = STATE(206),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(206),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(206),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(213),
    [sym_expression_body_paren] = STATE(213),
    [sym__expression_body] = STATE(213),
    [sym_unary_expression] = STATE(213),
    [sym__binary_expression] = STATE(213),
    [sym_comparison_binary_expression] = STATE(213),
    [sym_mult_binary_expression] = STATE(213),
    [sym_ternary_expression] = STATE(213),
    [sym_add_binary_expression] = STATE(213),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(213),
    [sym_var_identifier] = STATE(213),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(213),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(213),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(213),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(208),
    [sym_expression_body_paren] = STATE(208),
    [sym__expression_body] = STATE(208),
    [sym_unary_expression] = STATE(208),
    [sym__binary_expression] = STATE(208),
    [sym_comparison_binary_expression] = STATE(208),
    [sym_mult_binary_expression] = STATE(208),
    [sym_ternary_expression] = STATE(208),
    [sym_add_binary_expression] = STATE(208),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(208),
    [sym_var_identifier] = STATE(208),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(208),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(208),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(208),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
  [25] = {
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(219),
    [sym_unary_expression] = STATE(219),
    [sym__binary_expression] = STATE(219),
    [sym_comparison_binary_expression] = STATE(219),
    [sym_mult_binary_expression] = STATE(219),
    [sym_ternary_expression] = STATE(219),
    [sym_add_binary_expression] = STATE(219),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(219),
    [sym_var_identifier] = STATE(219),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(219),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(219),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
  [26] = {
    [sym__expression] = STATE(157),
    [sym_expression_body_paren] = STATE(157),
    [sym__expression_body] = STATE(157),
    [sym_unary_expression] = STATE(157),
    [sym__binary_expression] = STATE(157),
    [sym_comparison_binary_expression] = STATE(157),
    [sym_mult_binary_expression] = STATE(157),
    [sym_ternary_expression] = STATE(157),
    [sym_add_binary_expression] = STATE(157),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(157),
    [sym_var_identifier] = STATE(157),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(157),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(157),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
  [27] = {
    [sym__expression] = STATE(209),
    [sym_expression_body_paren] = STATE(209),
    [sym__expression_body] = STATE(209),
    [sym_unary_expression] = STATE(209),
    [sym__binary_expression] = STATE(209),
    [sym_comparison_binary_expression] = STATE(209),
    [sym_mult_binary_expression] = STATE(209),
    [sym_ternary_expression] = STATE(209),
    [sym_add_binary_expression] = STATE(209),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(209),
    [sym_var_identifier] = STATE(209),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(209),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(209),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(129),
    [sym_expression_body_paren] = STATE(129),
    [sym__expression_body] = STATE(129),
    [sym_unary_expression] = STATE(129),
    [sym__binary_expression] = STATE(129),
    [sym_comparison_binary_expression] = STATE(129),
    [sym_mult_binary_expression] = STATE(129),
    [sym_ternary_expression] = STATE(129),
    [sym_add_binary_expression] = STATE(129),
    [sym_unary_prec_operator] = STATE(21),
    [sym_string] = STATE(129),
    [sym_var_identifier] = STATE(129),
    [sym_children_identifier] = STATE(143),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(129),
    [sym_reference_identifier] = STATE(119),
    [sym_value] = STATE(129),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(116),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_parent] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_this] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(75),
    [sym_float_number] = ACTIONS(77),
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
    [sym__expression] = STATE(130),
    [sym_expression_body_paren] = STATE(130),
    [sym__expression_body] = STATE(130),
    [sym_unary_expression] = STATE(130),
    [sym__binary_expression] = STATE(130),
    [sym_comparison_binary_expression] = STATE(130),
    [sym_mult_binary_expression] = STATE(130),
    [sym_ternary_expression] = STATE(130),
    [sym_add_binary_expression] = STATE(130),
    [sym_unary_prec_operator] = STATE(21),
    [sym_string] = STATE(130),
    [sym_var_identifier] = STATE(130),
    [sym_children_identifier] = STATE(143),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(130),
    [sym_reference_identifier] = STATE(119),
    [sym_value] = STATE(130),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(116),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_parent] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_this] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(75),
    [sym_float_number] = ACTIONS(77),
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
    [sym__expression] = STATE(131),
    [sym_expression_body_paren] = STATE(131),
    [sym__expression_body] = STATE(131),
    [sym_unary_expression] = STATE(131),
    [sym__binary_expression] = STATE(131),
    [sym_comparison_binary_expression] = STATE(131),
    [sym_mult_binary_expression] = STATE(131),
    [sym_ternary_expression] = STATE(131),
    [sym_add_binary_expression] = STATE(131),
    [sym_unary_prec_operator] = STATE(21),
    [sym_string] = STATE(131),
    [sym_var_identifier] = STATE(131),
    [sym_children_identifier] = STATE(143),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(131),
    [sym_reference_identifier] = STATE(119),
    [sym_value] = STATE(131),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(116),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_parent] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_this] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(75),
    [sym_float_number] = ACTIONS(77),
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
    [sym__expression] = STATE(214),
    [sym_expression_body_paren] = STATE(214),
    [sym__expression_body] = STATE(214),
    [sym_unary_expression] = STATE(214),
    [sym__binary_expression] = STATE(214),
    [sym_comparison_binary_expression] = STATE(214),
    [sym_mult_binary_expression] = STATE(214),
    [sym_ternary_expression] = STATE(214),
    [sym_add_binary_expression] = STATE(214),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(214),
    [sym_var_identifier] = STATE(214),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(214),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(214),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(214),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym__identifier] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_parent] = ACTIONS(81),
    [anon_sym_root] = ACTIONS(81),
    [anon_sym_this] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(79),
    [sym_int_number] = ACTIONS(81),
    [sym_float_number] = ACTIONS(79),
    [anon_sym_black] = ACTIONS(81),
    [anon_sym_blue] = ACTIONS(81),
    [anon_sym_ease] = ACTIONS(81),
    [anon_sym_ease_DASHin] = ACTIONS(81),
    [anon_sym_ease_in] = ACTIONS(81),
    [anon_sym_ease_in_out] = ACTIONS(81),
    [anon_sym_ease_DASHin_DASHout] = ACTIONS(81),
    [anon_sym_ease_out] = ACTIONS(81),
    [anon_sym_ease_DASHout] = ACTIONS(81),
    [anon_sym_end] = ACTIONS(81),
    [anon_sym_green] = ACTIONS(81),
    [anon_sym_red] = ACTIONS(81),
    [anon_sym_start] = ACTIONS(81),
    [anon_sym_yellow] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_transparent] = ACTIONS(81),
    [anon_sym_angle] = ACTIONS(81),
    [anon_sym_bool] = ACTIONS(81),
    [anon_sym_brush] = ACTIONS(81),
    [anon_sym_duration] = ACTIONS(81),
    [anon_sym_easing] = ACTIONS(81),
    [anon_sym_float] = ACTIONS(81),
    [anon_sym_image] = ACTIONS(81),
    [anon_sym_int] = ACTIONS(81),
    [anon_sym_length] = ACTIONS(81),
    [anon_sym_percent] = ACTIONS(81),
    [anon_sym_physical_DASHlength] = ACTIONS(81),
    [anon_sym_physical_length] = ACTIONS(81),
    [anon_sym_string] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__expression] = STATE(215),
    [sym_expression_body_paren] = STATE(215),
    [sym__expression_body] = STATE(215),
    [sym_unary_expression] = STATE(215),
    [sym__binary_expression] = STATE(215),
    [sym_comparison_binary_expression] = STATE(215),
    [sym_mult_binary_expression] = STATE(215),
    [sym_ternary_expression] = STATE(215),
    [sym_add_binary_expression] = STATE(215),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(215),
    [sym_var_identifier] = STATE(215),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(215),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(215),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(211),
    [sym_expression_body_paren] = STATE(211),
    [sym__expression_body] = STATE(211),
    [sym_unary_expression] = STATE(211),
    [sym__binary_expression] = STATE(211),
    [sym_comparison_binary_expression] = STATE(211),
    [sym_mult_binary_expression] = STATE(211),
    [sym_ternary_expression] = STATE(211),
    [sym_add_binary_expression] = STATE(211),
    [sym_unary_prec_operator] = STATE(17),
    [sym_string] = STATE(211),
    [sym_var_identifier] = STATE(211),
    [sym_children_identifier] = STATE(121),
    [sym_function_identifier] = STATE(281),
    [sym_function_call] = STATE(211),
    [sym_reference_identifier] = STATE(109),
    [sym_value] = STATE(211),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(124),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
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
    [sym__expression] = STATE(134),
    [sym_expression_body_paren] = STATE(134),
    [sym__expression_body] = STATE(134),
    [sym_unary_expression] = STATE(134),
    [sym__binary_expression] = STATE(134),
    [sym_comparison_binary_expression] = STATE(134),
    [sym_mult_binary_expression] = STATE(134),
    [sym_ternary_expression] = STATE(134),
    [sym_add_binary_expression] = STATE(134),
    [sym_unary_prec_operator] = STATE(21),
    [sym_string] = STATE(134),
    [sym_var_identifier] = STATE(134),
    [sym_children_identifier] = STATE(143),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(134),
    [sym_reference_identifier] = STATE(119),
    [sym_value] = STATE(134),
    [sym_color] = STATE(112),
    [sym_value_with_units] = STATE(112),
    [sym_number] = STATE(116),
    [sym_language_constant] = STATE(112),
    [sym_builtin_type_identifier] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__identifier] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_parent] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_this] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_int_number] = ACTIONS(75),
    [sym_float_number] = ACTIONS(77),
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
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_export,
    ACTIONS(88), 1,
      anon_sym_transitions,
    ACTIONS(91), 1,
      anon_sym_states,
    ACTIONS(94), 1,
      anon_sym_animate,
    ACTIONS(100), 1,
      anon_sym_elseif,
    ACTIONS(103), 1,
      anon_sym_for,
    ACTIONS(106), 1,
      anon_sym_property,
    ACTIONS(109), 1,
      anon_sym_callback,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      sym__identifier,
    ACTIONS(118), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(49), 1,
      sym_reference_identifier,
    STATE(64), 1,
      sym_var_identifier,
    STATE(194), 1,
      sym_visibility_modifier,
    STATE(330), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(121), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(257), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(124), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
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
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      anon_sym_transitions,
    ACTIONS(133), 1,
      anon_sym_states,
    ACTIONS(135), 1,
      anon_sym_animate,
    ACTIONS(139), 1,
      anon_sym_elseif,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(143), 1,
      anon_sym_property,
    ACTIONS(145), 1,
      anon_sym_callback,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym__identifier,
    ACTIONS(151), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(49), 1,
      sym_reference_identifier,
    STATE(64), 1,
      sym_var_identifier,
    STATE(194), 1,
      sym_visibility_modifier,
    STATE(330), 1,
      sym_function_identifier,
    ACTIONS(137), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(257), 3,
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
  [198] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_export,
    ACTIONS(131), 1,
      anon_sym_transitions,
    ACTIONS(133), 1,
      anon_sym_states,
    ACTIONS(135), 1,
      anon_sym_animate,
    ACTIONS(139), 1,
      anon_sym_elseif,
    ACTIONS(141), 1,
      anon_sym_for,
    ACTIONS(143), 1,
      anon_sym_property,
    ACTIONS(145), 1,
      anon_sym_callback,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym__identifier,
    ACTIONS(151), 1,
      anon_sym_AT,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_children_identifier,
    STATE(49), 1,
      sym_reference_identifier,
    STATE(64), 1,
      sym_var_identifier,
    STATE(194), 1,
      sym_visibility_modifier,
    STATE(330), 1,
      sym_function_identifier,
    ACTIONS(137), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(257), 3,
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
    STATE(36), 13,
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
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 9,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(159), 35,
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
  [349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(163), 35,
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
  [401] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_EQ_GT,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_var_identifier_repeat1,
    STATE(62), 1,
      sym_index_operator,
    ACTIONS(165), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(167), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(169), 29,
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
      anon_sym_callback,
      anon_sym_STAR,
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
  [465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 9,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(179), 35,
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
  [517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 9,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(81), 35,
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
  [569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(183), 35,
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
  [621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 13,
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
    ACTIONS(187), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_index_operator,
    ACTIONS(189), 11,
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
    ACTIONS(191), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 13,
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
    ACTIONS(195), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_index_operator,
    ACTIONS(167), 11,
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
    ACTIONS(169), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [828] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_var_identifier_repeat1,
    STATE(54), 1,
      sym_index_operator,
    ACTIONS(197), 10,
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
    ACTIONS(199), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [885] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_var_identifier_repeat1,
    STATE(62), 1,
      sym_index_operator,
    ACTIONS(167), 10,
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
    ACTIONS(169), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 13,
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
    ACTIONS(203), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 13,
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
    ACTIONS(187), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(201), 11,
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
    ACTIONS(203), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 12,
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
      anon_sym_callback,
      anon_sym_STAR,
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
  [1140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 11,
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
      anon_sym_callback,
      anon_sym_STAR,
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
  [1187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 11,
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
      anon_sym_callback,
      anon_sym_STAR,
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
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 12,
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
    ACTIONS(222), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 12,
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
    ACTIONS(226), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 11,
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
    ACTIONS(230), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 12,
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
    ACTIONS(234), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 12,
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
    ACTIONS(238), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 12,
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
    ACTIONS(242), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 11,
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
    ACTIONS(199), 28,
      anon_sym_export,
      anon_sym_COLON,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 12,
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
    ACTIONS(246), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1610] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_assignment_prec_operator,
    ACTIONS(248), 3,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_AT,
    ACTIONS(256), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(252), 27,
      anon_sym_export,
      anon_sym_transitions,
      anon_sym_states,
      anon_sym_animate,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_property,
      anon_sym_callback,
      anon_sym_STAR,
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
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(260), 26,
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
  [1702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(264), 26,
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
  [1740] = 11,
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
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(172), 1,
      sym_visibility_modifier,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(68), 7,
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
  [1794] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      anon_sym_global,
    ACTIONS(273), 1,
      anon_sym_import,
    ACTIONS(276), 1,
      anon_sym_export,
    ACTIONS(279), 1,
      anon_sym_struct,
    ACTIONS(282), 1,
      sym__identifier,
    STATE(172), 1,
      sym_visibility_modifier,
    STATE(251), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(68), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(285), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [1848] = 3,
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
  [1886] = 3,
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
  [1924] = 3,
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
  [1962] = 3,
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
  [2000] = 3,
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
  [2038] = 3,
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
  [2076] = 3,
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
  [2114] = 3,
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
  [2152] = 3,
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
  [2190] = 3,
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
  [2228] = 3,
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
  [2266] = 3,
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
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(338), 26,
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
  [2342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(342), 26,
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
  [2380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(346), 26,
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
  [2418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(350), 26,
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
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(354), 26,
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
  [2494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(358), 26,
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
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(362), 26,
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
    ACTIONS(364), 4,
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
  [2608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 4,
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
  [2646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
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
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 4,
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
  [2722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 4,
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
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 4,
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
  [2798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 4,
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
  [2836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(224), 19,
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
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [2868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(236), 19,
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
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(240), 19,
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
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [2932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(244), 19,
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
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [2964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 8,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(392), 16,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(220), 19,
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
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(396), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(232), 19,
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
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3090] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym_var_identifier_repeat1,
    STATE(188), 1,
      sym_index_operator,
    ACTIONS(169), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(167), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(404), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(408), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(412), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(416), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(420), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3286] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_var_identifier_repeat1,
    STATE(164), 1,
      sym_index_operator,
    ACTIONS(169), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(167), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3325] = 3,
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
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_var_identifier_repeat1,
    STATE(168), 1,
      sym_index_operator,
    ACTIONS(199), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(432), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3426] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_var_identifier_repeat1,
    STATE(164), 1,
      sym_index_operator,
    ACTIONS(169), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(167), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_PERCENT,
    STATE(107), 1,
      sym_unit_type,
    ACTIONS(439), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(434), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(432), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_DOT,
    STATE(126), 1,
      aux_sym_var_identifier_repeat1,
    STATE(189), 1,
      sym_index_operator,
    ACTIONS(199), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(197), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(445), 18,
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
  [3636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym_var_identifier_repeat1,
    STATE(188), 1,
      sym_index_operator,
    ACTIONS(169), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(167), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3703] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    STATE(164), 1,
      sym_index_operator,
    ACTIONS(169), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(167), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 9,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(447), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
      anon_sym_PERCENT,
  [3765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    STATE(170), 1,
      sym_index_operator,
    ACTIONS(191), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(189), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(107), 1,
      sym_unit_type,
    ACTIONS(434), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(441), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(432), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(185), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [3862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DOT,
    STATE(126), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(203), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(201), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3924] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    STATE(28), 1,
      sym_add_prec_operator,
    STATE(29), 1,
      sym_mult_prec_operator,
    STATE(30), 1,
      sym_comparison_operator,
    ACTIONS(456), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(454), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3961] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_add_prec_operator,
    STATE(29), 1,
      sym_mult_prec_operator,
    STATE(30), 1,
      sym_comparison_operator,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(462), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(460), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4002] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    STATE(28), 1,
      sym_add_prec_operator,
    STATE(29), 1,
      sym_mult_prec_operator,
    STATE(30), 1,
      sym_comparison_operator,
    ACTIONS(470), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(468), 10,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4039] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_add_prec_operator,
    STATE(29), 1,
      sym_mult_prec_operator,
    STATE(30), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(472), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
    ACTIONS(474), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_add_prec_operator,
    STATE(29), 1,
      sym_mult_prec_operator,
    STATE(30), 1,
      sym_comparison_operator,
    ACTIONS(480), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(478), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(193), 18,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [4146] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_add_prec_operator,
    STATE(29), 1,
      sym_mult_prec_operator,
    STATE(30), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(484), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(490), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(208), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(224), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(447), 17,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
  [4279] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_struct_field_declaration_list,
    STATE(314), 1,
      sym_struct_field_declaration_list_body,
    STATE(294), 3,
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
  [4315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(480), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(478), 14,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4349] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_export,
    STATE(85), 1,
      sym_component_definition,
    STATE(194), 1,
      sym_visibility_modifier,
    STATE(257), 3,
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
  [4385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    STATE(187), 1,
      sym_index_operator,
    ACTIONS(191), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(189), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(193), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    STATE(188), 1,
      sym_index_operator,
    ACTIONS(169), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(167), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(201), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(185), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_struct_field_declaration_list,
    STATE(314), 1,
      sym_struct_field_declaration_list_body,
    STATE(268), 3,
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
  [4569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(232), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(236), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(244), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4653] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(456), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(454), 13,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4689] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_export,
    STATE(65), 1,
      sym_component_definition,
    STATE(194), 1,
      sym_visibility_modifier,
    STATE(257), 3,
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
  [4725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(220), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(240), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_AT,
  [4781] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(460), 10,
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
  [4821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(470), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(468), 13,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(496), 1,
      anon_sym_LBRACK,
    STATE(320), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(318), 3,
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
  [4891] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(474), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(472), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4933] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_export,
    STATE(74), 1,
      sym_component_definition,
    STATE(194), 1,
      sym_visibility_modifier,
    STATE(257), 3,
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
  [4969] = 3,
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
  [4996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    ACTIONS(504), 18,
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
  [5023] = 3,
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
  [5050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 18,
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
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 18,
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
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5131] = 3,
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
  [5158] = 3,
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
  [5185] = 3,
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
  [5212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(212), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(216), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5293] = 3,
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
  [5320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(522), 1,
      anon_sym_global,
    ACTIONS(524), 1,
      anon_sym_struct,
    STATE(259), 3,
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
  [5353] = 3,
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
  [5380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
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
  [5407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 18,
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
  [5434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 18,
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
  [5461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 18,
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
  [5488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(208), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 18,
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
  [5542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 18,
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
  [5569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 18,
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
  [5596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 18,
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
  [5623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(216), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
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
  [5679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
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
  [5709] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(558), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    STATE(74), 1,
      sym_field_declaration_list,
    STATE(313), 1,
      sym_field_declaration_list_body,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(228), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(197), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(212), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(328), 3,
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
  [5862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 16,
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
  [5887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(319), 3,
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
  [5914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(285), 3,
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
  [5941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(256), 3,
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
  [5968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(265), 3,
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
  [5995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(288), 3,
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
  [6022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(271), 3,
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
  [6049] = 4,
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
  [6076] = 4,
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
  [6103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(312), 3,
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
  [6130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(301), 3,
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
  [6157] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(346), 1,
      sym_builtin_type_identifier,
    ACTIONS(568), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(346), 1,
      sym_builtin_type_identifier,
    ACTIONS(568), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(346), 1,
      sym_builtin_type_identifier,
    ACTIONS(574), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6281] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6320] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(579), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6359] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6398] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6437] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(585), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6476] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(587), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6515] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6554] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(591), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6593] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6632] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 14,
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
  [6691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 14,
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
  [6711] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      sym_mult_prec_operator,
    STATE(20), 1,
      sym_add_prec_operator,
    STATE(26), 1,
      sym_comparison_operator,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(603), 8,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6769] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(221), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(339), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6802] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(613), 1,
      anon_sym_STAR,
    ACTIONS(616), 1,
      sym__identifier,
    ACTIONS(619), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(221), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(339), 1,
      sym_var_identifier,
    ACTIONS(622), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6835] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    ACTIONS(627), 1,
      sym__identifier,
    ACTIONS(629), 1,
      anon_sym_AT,
    STATE(109), 1,
      sym_reference_identifier,
    STATE(121), 1,
      sym_children_identifier,
    STATE(224), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6868] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(627), 1,
      sym__identifier,
    ACTIONS(629), 1,
      anon_sym_AT,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_reference_identifier,
    STATE(121), 1,
      sym_children_identifier,
    STATE(222), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6901] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    ACTIONS(635), 1,
      anon_sym_STAR,
    ACTIONS(638), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_AT,
    STATE(109), 1,
      sym_reference_identifier,
    STATE(121), 1,
      sym_children_identifier,
    STATE(224), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(644), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6934] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_children_identifier,
    STATE(220), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(339), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6967] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(627), 1,
      sym__identifier,
    ACTIONS(629), 1,
      anon_sym_AT,
    STATE(109), 1,
      sym_reference_identifier,
    STATE(121), 1,
      sym_children_identifier,
    STATE(315), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6994] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(649), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_index_operator,
    STATE(229), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(167), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(327), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7046] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(649), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_index_operator,
    STATE(235), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(197), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7071] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(249), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7098] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(340), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7125] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(333), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7152] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(334), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7179] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(607), 1,
      sym__identifier,
    ACTIONS(609), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(227), 1,
      sym_reference_identifier,
    STATE(304), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(651), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(201), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [7226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(656), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
  [7254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(660), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(338), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7284] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__identifier,
    ACTIONS(664), 1,
      anon_sym_AT,
    STATE(144), 1,
      sym_post_identifier,
    STATE(145), 1,
      sym_function_call,
    STATE(278), 1,
      sym_function_identifier,
  [7303] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_AT,
    ACTIONS(666), 1,
      sym__identifier,
    STATE(50), 1,
      sym_post_identifier,
    STATE(51), 1,
      sym_function_call,
    STATE(286), 1,
      sym_function_identifier,
  [7322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(269), 1,
      sym_struct_field_declaration_list,
    STATE(314), 1,
      sym_struct_field_declaration_list_body,
  [7341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_AT,
    ACTIONS(666), 1,
      sym__identifier,
    STATE(50), 1,
      sym_post_identifier,
    STATE(51), 1,
      sym_function_call,
    STATE(281), 1,
      sym_function_identifier,
  [7360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_AT,
    ACTIONS(670), 1,
      sym__identifier,
    STATE(120), 1,
      sym_function_call,
    STATE(127), 1,
      sym_post_identifier,
    STATE(281), 1,
      sym_function_identifier,
  [7379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(269), 1,
      sym_struct_field_declaration_list,
    STATE(314), 1,
      sym_struct_field_declaration_list_body,
  [7398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(269), 1,
      sym_struct_field_declaration_list,
    STATE(314), 1,
      sym_struct_field_declaration_list_body,
  [7417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      anon_sym_DASH_GT,
    STATE(96), 1,
      sym_formal_parameters,
    STATE(299), 1,
      sym_call_signature,
  [7436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(685), 2,
      anon_sym_in,
      anon_sym_out,
  [7450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym_property_expr,
    ACTIONS(692), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [7464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
    STATE(321), 1,
      sym_string,
  [7480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(696), 1,
      anon_sym_COLON_EQ,
    STATE(177), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(698), 2,
      anon_sym_in,
      anon_sym_out,
  [7510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7520] = 4,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    ACTIONS(708), 1,
      sym_comment,
    STATE(263), 1,
      aux_sym_string_repeat1,
    ACTIONS(706), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7534] = 4,
    ACTIONS(704), 1,
      anon_sym_SQUOTE,
    ACTIONS(708), 1,
      sym_comment,
    STATE(262), 1,
      aux_sym_string_repeat2,
    ACTIONS(710), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      anon_sym_COLON_EQ,
    STATE(80), 1,
      sym_field_declaration_list,
    STATE(313), 1,
      sym_field_declaration_list_body,
  [7564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(714), 1,
      anon_sym_COLON_EQ,
    STATE(75), 1,
      sym_field_declaration_list,
    STATE(313), 1,
      sym_field_declaration_list_body,
  [7580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(698), 2,
      anon_sym_in,
      anon_sym_out,
  [7594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(718), 1,
      anon_sym_COLON_EQ,
    STATE(166), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7610] = 4,
    ACTIONS(708), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym_string_repeat2,
    ACTIONS(722), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7624] = 4,
    ACTIONS(708), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(261), 1,
      aux_sym_string_repeat1,
    ACTIONS(727), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7638] = 4,
    ACTIONS(708), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym_string_repeat2,
    ACTIONS(732), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7652] = 4,
    ACTIONS(708), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DQUOTE,
    STATE(261), 1,
      aux_sym_string_repeat1,
    ACTIONS(734), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(338), 1,
      sym_string,
  [7701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_import_statement_repeat1,
  [7714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_struct_field_declaration_list,
    STATE(314), 1,
      sym_struct_field_declaration_list_body,
  [7727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(741), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_formal_parameters_repeat1,
  [7751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym_string,
  [7777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_field_declaration_list,
    STATE(337), 1,
      sym_field_declaration_list_body,
  [7790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [7799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_field_declaration_list,
    STATE(313), 1,
      sym_field_declaration_list_body,
  [7812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_formal_parameters_repeat1,
  [7825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_formal_parameters_repeat1,
  [7838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_call_signature,
    STATE(148), 1,
      sym_formal_parameters,
  [7851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      aux_sym_import_statement_repeat1,
  [7864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_formal_parameters_repeat1,
  [7877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_formal_parameters,
    STATE(102), 1,
      sym_call_signature,
  [7890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      aux_sym_import_statement_repeat1,
  [7903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_formal_parameters_repeat1,
  [7916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_field_declaration_list,
    STATE(313), 1,
      sym_field_declaration_list_body,
  [7942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_call_signature,
    STATE(60), 1,
      sym_formal_parameters,
  [7955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(274), 1,
      sym_field_declaration_list,
    STATE(310), 1,
      sym_field_declaration_list_body,
  [7968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_field_declaration_list,
    STATE(313), 1,
      sym_field_declaration_list_body,
  [7981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_formal_parameters_repeat1,
  [7994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_import_statement_repeat1,
  [8007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_formal_parameters_repeat1,
  [8020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_import_statement_repeat1,
  [8033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_struct_field_declaration_list,
    STATE(314), 1,
      sym_struct_field_declaration_list_body,
  [8055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [8068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_AT,
    ACTIONS(784), 1,
      sym__identifier,
    STATE(247), 1,
      sym_function_identifier,
  [8081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(316), 1,
      sym_string,
  [8094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__identifier,
    ACTIONS(788), 1,
      anon_sym_children,
  [8104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(792), 1,
      anon_sym_DASH_GT,
  [8114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      aux_sym_color_token1,
    ACTIONS(796), 1,
      aux_sym_color_token2,
  [8124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym_states_list_definition,
  [8142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_transitions_list_definition,
  [8152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_animate_declaration_list,
  [8162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__identifier,
    ACTIONS(804), 1,
      anon_sym_children,
  [8172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__identifier,
    ACTIONS(806), 1,
      anon_sym_children,
  [8198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_GT,
  [8205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
  [8212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_children,
  [8219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SEMI,
  [8226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
  [8233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
  [8240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_in,
  [8247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [8254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
  [8261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_GT,
  [8268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_COLON_EQ,
  [8275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_GT,
  [8282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_SEMI,
  [8289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SEMI,
  [8296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
  [8303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_from,
  [8310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_SEMI,
  [8317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_when,
  [8324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COLON_EQ,
  [8331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
  [8338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [8345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_EQ_GT,
  [8352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_from,
  [8359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_children,
  [8366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COLON,
  [8373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_COLON_EQ,
  [8380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_COLON_EQ,
  [8387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [8394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
  [8401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [8408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_COLON,
  [8415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_COLON,
  [8422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      ts_builtin_sym_end,
  [8429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_from,
  [8436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym__identifier,
  [8443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_LT,
  [8450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_SEMI,
  [8457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 99,
  [SMALL_STATE(37)] = 198,
  [SMALL_STATE(38)] = 297,
  [SMALL_STATE(39)] = 349,
  [SMALL_STATE(40)] = 401,
  [SMALL_STATE(41)] = 465,
  [SMALL_STATE(42)] = 517,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 621,
  [SMALL_STATE(45)] = 673,
  [SMALL_STATE(46)] = 726,
  [SMALL_STATE(47)] = 775,
  [SMALL_STATE(48)] = 828,
  [SMALL_STATE(49)] = 885,
  [SMALL_STATE(50)] = 942,
  [SMALL_STATE(51)] = 991,
  [SMALL_STATE(52)] = 1040,
  [SMALL_STATE(53)] = 1092,
  [SMALL_STATE(54)] = 1140,
  [SMALL_STATE(55)] = 1187,
  [SMALL_STATE(56)] = 1234,
  [SMALL_STATE(57)] = 1281,
  [SMALL_STATE(58)] = 1328,
  [SMALL_STATE(59)] = 1375,
  [SMALL_STATE(60)] = 1422,
  [SMALL_STATE(61)] = 1469,
  [SMALL_STATE(62)] = 1516,
  [SMALL_STATE(63)] = 1563,
  [SMALL_STATE(64)] = 1610,
  [SMALL_STATE(65)] = 1664,
  [SMALL_STATE(66)] = 1702,
  [SMALL_STATE(67)] = 1740,
  [SMALL_STATE(68)] = 1794,
  [SMALL_STATE(69)] = 1848,
  [SMALL_STATE(70)] = 1886,
  [SMALL_STATE(71)] = 1924,
  [SMALL_STATE(72)] = 1962,
  [SMALL_STATE(73)] = 2000,
  [SMALL_STATE(74)] = 2038,
  [SMALL_STATE(75)] = 2076,
  [SMALL_STATE(76)] = 2114,
  [SMALL_STATE(77)] = 2152,
  [SMALL_STATE(78)] = 2190,
  [SMALL_STATE(79)] = 2228,
  [SMALL_STATE(80)] = 2266,
  [SMALL_STATE(81)] = 2304,
  [SMALL_STATE(82)] = 2342,
  [SMALL_STATE(83)] = 2380,
  [SMALL_STATE(84)] = 2418,
  [SMALL_STATE(85)] = 2456,
  [SMALL_STATE(86)] = 2494,
  [SMALL_STATE(87)] = 2532,
  [SMALL_STATE(88)] = 2570,
  [SMALL_STATE(89)] = 2608,
  [SMALL_STATE(90)] = 2646,
  [SMALL_STATE(91)] = 2684,
  [SMALL_STATE(92)] = 2722,
  [SMALL_STATE(93)] = 2760,
  [SMALL_STATE(94)] = 2798,
  [SMALL_STATE(95)] = 2836,
  [SMALL_STATE(96)] = 2868,
  [SMALL_STATE(97)] = 2900,
  [SMALL_STATE(98)] = 2932,
  [SMALL_STATE(99)] = 2964,
  [SMALL_STATE(100)] = 2996,
  [SMALL_STATE(101)] = 3028,
  [SMALL_STATE(102)] = 3059,
  [SMALL_STATE(103)] = 3090,
  [SMALL_STATE(104)] = 3131,
  [SMALL_STATE(105)] = 3162,
  [SMALL_STATE(106)] = 3193,
  [SMALL_STATE(107)] = 3224,
  [SMALL_STATE(108)] = 3255,
  [SMALL_STATE(109)] = 3286,
  [SMALL_STATE(110)] = 3325,
  [SMALL_STATE(111)] = 3356,
  [SMALL_STATE(112)] = 3395,
  [SMALL_STATE(113)] = 3426,
  [SMALL_STATE(114)] = 3466,
  [SMALL_STATE(115)] = 3498,
  [SMALL_STATE(116)] = 3532,
  [SMALL_STATE(117)] = 3568,
  [SMALL_STATE(118)] = 3606,
  [SMALL_STATE(119)] = 3636,
  [SMALL_STATE(120)] = 3674,
  [SMALL_STATE(121)] = 3703,
  [SMALL_STATE(122)] = 3736,
  [SMALL_STATE(123)] = 3765,
  [SMALL_STATE(124)] = 3798,
  [SMALL_STATE(125)] = 3831,
  [SMALL_STATE(126)] = 3862,
  [SMALL_STATE(127)] = 3895,
  [SMALL_STATE(128)] = 3924,
  [SMALL_STATE(129)] = 3961,
  [SMALL_STATE(130)] = 4002,
  [SMALL_STATE(131)] = 4039,
  [SMALL_STATE(132)] = 4082,
  [SMALL_STATE(133)] = 4117,
  [SMALL_STATE(134)] = 4146,
  [SMALL_STATE(135)] = 4195,
  [SMALL_STATE(136)] = 4223,
  [SMALL_STATE(137)] = 4251,
  [SMALL_STATE(138)] = 4279,
  [SMALL_STATE(139)] = 4315,
  [SMALL_STATE(140)] = 4349,
  [SMALL_STATE(141)] = 4385,
  [SMALL_STATE(142)] = 4417,
  [SMALL_STATE(143)] = 4445,
  [SMALL_STATE(144)] = 4477,
  [SMALL_STATE(145)] = 4505,
  [SMALL_STATE(146)] = 4533,
  [SMALL_STATE(147)] = 4569,
  [SMALL_STATE(148)] = 4597,
  [SMALL_STATE(149)] = 4625,
  [SMALL_STATE(150)] = 4653,
  [SMALL_STATE(151)] = 4689,
  [SMALL_STATE(152)] = 4725,
  [SMALL_STATE(153)] = 4753,
  [SMALL_STATE(154)] = 4781,
  [SMALL_STATE(155)] = 4821,
  [SMALL_STATE(156)] = 4857,
  [SMALL_STATE(157)] = 4891,
  [SMALL_STATE(158)] = 4933,
  [SMALL_STATE(159)] = 4969,
  [SMALL_STATE(160)] = 4996,
  [SMALL_STATE(161)] = 5023,
  [SMALL_STATE(162)] = 5050,
  [SMALL_STATE(163)] = 5077,
  [SMALL_STATE(164)] = 5104,
  [SMALL_STATE(165)] = 5131,
  [SMALL_STATE(166)] = 5158,
  [SMALL_STATE(167)] = 5185,
  [SMALL_STATE(168)] = 5212,
  [SMALL_STATE(169)] = 5239,
  [SMALL_STATE(170)] = 5266,
  [SMALL_STATE(171)] = 5293,
  [SMALL_STATE(172)] = 5320,
  [SMALL_STATE(173)] = 5353,
  [SMALL_STATE(174)] = 5380,
  [SMALL_STATE(175)] = 5407,
  [SMALL_STATE(176)] = 5434,
  [SMALL_STATE(177)] = 5461,
  [SMALL_STATE(178)] = 5488,
  [SMALL_STATE(179)] = 5515,
  [SMALL_STATE(180)] = 5542,
  [SMALL_STATE(181)] = 5569,
  [SMALL_STATE(182)] = 5596,
  [SMALL_STATE(183)] = 5623,
  [SMALL_STATE(184)] = 5649,
  [SMALL_STATE(185)] = 5679,
  [SMALL_STATE(186)] = 5709,
  [SMALL_STATE(187)] = 5757,
  [SMALL_STATE(188)] = 5783,
  [SMALL_STATE(189)] = 5809,
  [SMALL_STATE(190)] = 5835,
  [SMALL_STATE(191)] = 5862,
  [SMALL_STATE(192)] = 5887,
  [SMALL_STATE(193)] = 5914,
  [SMALL_STATE(194)] = 5941,
  [SMALL_STATE(195)] = 5968,
  [SMALL_STATE(196)] = 5995,
  [SMALL_STATE(197)] = 6022,
  [SMALL_STATE(198)] = 6049,
  [SMALL_STATE(199)] = 6076,
  [SMALL_STATE(200)] = 6103,
  [SMALL_STATE(201)] = 6130,
  [SMALL_STATE(202)] = 6157,
  [SMALL_STATE(203)] = 6197,
  [SMALL_STATE(204)] = 6225,
  [SMALL_STATE(205)] = 6253,
  [SMALL_STATE(206)] = 6281,
  [SMALL_STATE(207)] = 6320,
  [SMALL_STATE(208)] = 6359,
  [SMALL_STATE(209)] = 6398,
  [SMALL_STATE(210)] = 6437,
  [SMALL_STATE(211)] = 6476,
  [SMALL_STATE(212)] = 6515,
  [SMALL_STATE(213)] = 6554,
  [SMALL_STATE(214)] = 6593,
  [SMALL_STATE(215)] = 6632,
  [SMALL_STATE(216)] = 6671,
  [SMALL_STATE(217)] = 6691,
  [SMALL_STATE(218)] = 6711,
  [SMALL_STATE(219)] = 6747,
  [SMALL_STATE(220)] = 6769,
  [SMALL_STATE(221)] = 6802,
  [SMALL_STATE(222)] = 6835,
  [SMALL_STATE(223)] = 6868,
  [SMALL_STATE(224)] = 6901,
  [SMALL_STATE(225)] = 6934,
  [SMALL_STATE(226)] = 6967,
  [SMALL_STATE(227)] = 6994,
  [SMALL_STATE(228)] = 7019,
  [SMALL_STATE(229)] = 7046,
  [SMALL_STATE(230)] = 7071,
  [SMALL_STATE(231)] = 7098,
  [SMALL_STATE(232)] = 7125,
  [SMALL_STATE(233)] = 7152,
  [SMALL_STATE(234)] = 7179,
  [SMALL_STATE(235)] = 7206,
  [SMALL_STATE(236)] = 7226,
  [SMALL_STATE(237)] = 7241,
  [SMALL_STATE(238)] = 7254,
  [SMALL_STATE(239)] = 7269,
  [SMALL_STATE(240)] = 7284,
  [SMALL_STATE(241)] = 7303,
  [SMALL_STATE(242)] = 7322,
  [SMALL_STATE(243)] = 7341,
  [SMALL_STATE(244)] = 7360,
  [SMALL_STATE(245)] = 7379,
  [SMALL_STATE(246)] = 7398,
  [SMALL_STATE(247)] = 7417,
  [SMALL_STATE(248)] = 7436,
  [SMALL_STATE(249)] = 7450,
  [SMALL_STATE(250)] = 7464,
  [SMALL_STATE(251)] = 7480,
  [SMALL_STATE(252)] = 7496,
  [SMALL_STATE(253)] = 7510,
  [SMALL_STATE(254)] = 7520,
  [SMALL_STATE(255)] = 7534,
  [SMALL_STATE(256)] = 7548,
  [SMALL_STATE(257)] = 7564,
  [SMALL_STATE(258)] = 7580,
  [SMALL_STATE(259)] = 7594,
  [SMALL_STATE(260)] = 7610,
  [SMALL_STATE(261)] = 7624,
  [SMALL_STATE(262)] = 7638,
  [SMALL_STATE(263)] = 7652,
  [SMALL_STATE(264)] = 7666,
  [SMALL_STATE(265)] = 7675,
  [SMALL_STATE(266)] = 7688,
  [SMALL_STATE(267)] = 7701,
  [SMALL_STATE(268)] = 7714,
  [SMALL_STATE(269)] = 7727,
  [SMALL_STATE(270)] = 7738,
  [SMALL_STATE(271)] = 7751,
  [SMALL_STATE(272)] = 7764,
  [SMALL_STATE(273)] = 7777,
  [SMALL_STATE(274)] = 7790,
  [SMALL_STATE(275)] = 7799,
  [SMALL_STATE(276)] = 7812,
  [SMALL_STATE(277)] = 7825,
  [SMALL_STATE(278)] = 7838,
  [SMALL_STATE(279)] = 7851,
  [SMALL_STATE(280)] = 7864,
  [SMALL_STATE(281)] = 7877,
  [SMALL_STATE(282)] = 7890,
  [SMALL_STATE(283)] = 7903,
  [SMALL_STATE(284)] = 7916,
  [SMALL_STATE(285)] = 7929,
  [SMALL_STATE(286)] = 7942,
  [SMALL_STATE(287)] = 7955,
  [SMALL_STATE(288)] = 7968,
  [SMALL_STATE(289)] = 7981,
  [SMALL_STATE(290)] = 7994,
  [SMALL_STATE(291)] = 8007,
  [SMALL_STATE(292)] = 8020,
  [SMALL_STATE(293)] = 8033,
  [SMALL_STATE(294)] = 8042,
  [SMALL_STATE(295)] = 8055,
  [SMALL_STATE(296)] = 8068,
  [SMALL_STATE(297)] = 8081,
  [SMALL_STATE(298)] = 8094,
  [SMALL_STATE(299)] = 8104,
  [SMALL_STATE(300)] = 8114,
  [SMALL_STATE(301)] = 8124,
  [SMALL_STATE(302)] = 8132,
  [SMALL_STATE(303)] = 8142,
  [SMALL_STATE(304)] = 8152,
  [SMALL_STATE(305)] = 8162,
  [SMALL_STATE(306)] = 8172,
  [SMALL_STATE(307)] = 8180,
  [SMALL_STATE(308)] = 8188,
  [SMALL_STATE(309)] = 8198,
  [SMALL_STATE(310)] = 8205,
  [SMALL_STATE(311)] = 8212,
  [SMALL_STATE(312)] = 8219,
  [SMALL_STATE(313)] = 8226,
  [SMALL_STATE(314)] = 8233,
  [SMALL_STATE(315)] = 8240,
  [SMALL_STATE(316)] = 8247,
  [SMALL_STATE(317)] = 8254,
  [SMALL_STATE(318)] = 8261,
  [SMALL_STATE(319)] = 8268,
  [SMALL_STATE(320)] = 8275,
  [SMALL_STATE(321)] = 8282,
  [SMALL_STATE(322)] = 8289,
  [SMALL_STATE(323)] = 8296,
  [SMALL_STATE(324)] = 8303,
  [SMALL_STATE(325)] = 8310,
  [SMALL_STATE(326)] = 8317,
  [SMALL_STATE(327)] = 8324,
  [SMALL_STATE(328)] = 8331,
  [SMALL_STATE(329)] = 8338,
  [SMALL_STATE(330)] = 8345,
  [SMALL_STATE(331)] = 8352,
  [SMALL_STATE(332)] = 8359,
  [SMALL_STATE(333)] = 8366,
  [SMALL_STATE(334)] = 8373,
  [SMALL_STATE(335)] = 8380,
  [SMALL_STATE(336)] = 8387,
  [SMALL_STATE(337)] = 8394,
  [SMALL_STATE(338)] = 8401,
  [SMALL_STATE(339)] = 8408,
  [SMALL_STATE(340)] = 8415,
  [SMALL_STATE(341)] = 8422,
  [SMALL_STATE(342)] = 8429,
  [SMALL_STATE(343)] = 8436,
  [SMALL_STATE(344)] = 8443,
  [SMALL_STATE(345)] = 8450,
  [SMALL_STATE(346)] = 8457,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_prec_operator, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_prec_operator, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(216),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(303),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(302),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(234),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(226),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(344),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(296),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(45),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(40),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(298),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(46),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(99),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_prec_operator, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_prec_operator, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_prec_operator, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_prec_operator, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_prec_operator, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_prec_operator, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(241),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_operator, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_operator, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(244),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(240),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_binary_expression, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_binary_expression, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(99),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 2, .production_id = 7),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(45),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(227),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(332),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(46),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(123),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(109),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(311),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(133),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(243),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 2),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2), SHIFT_REPEAT(225),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(231),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(260),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(261),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(201),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 15),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 10),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [870] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
