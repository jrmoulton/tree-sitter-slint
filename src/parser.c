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
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
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
    {field_parameters, 0},
  [5] =
    {field_name, 0},
    {field_super_type, 2},
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
  [6] = 4,
  [7] = 7,
  [8] = 4,
  [9] = 7,
  [10] = 5,
  [11] = 7,
  [12] = 5,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 16,
  [25] = 23,
  [26] = 26,
  [27] = 22,
  [28] = 21,
  [29] = 14,
  [30] = 30,
  [31] = 19,
  [32] = 23,
  [33] = 33,
  [34] = 15,
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
  [95] = 95,
  [96] = 96,
  [97] = 41,
  [98] = 42,
  [99] = 99,
  [100] = 72,
  [101] = 101,
  [102] = 78,
  [103] = 66,
  [104] = 104,
  [105] = 105,
  [106] = 43,
  [107] = 107,
  [108] = 45,
  [109] = 51,
  [110] = 54,
  [111] = 46,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 77,
  [117] = 117,
  [118] = 44,
  [119] = 82,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 47,
  [125] = 50,
  [126] = 126,
  [127] = 55,
  [128] = 52,
  [129] = 129,
  [130] = 49,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 53,
  [137] = 48,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 41,
  [143] = 42,
  [144] = 144,
  [145] = 56,
  [146] = 144,
  [147] = 147,
  [148] = 62,
  [149] = 43,
  [150] = 44,
  [151] = 59,
  [152] = 58,
  [153] = 61,
  [154] = 46,
  [155] = 54,
  [156] = 147,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 55,
  [163] = 50,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 48,
  [168] = 53,
  [169] = 49,
  [170] = 170,
  [171] = 45,
  [172] = 52,
  [173] = 47,
  [174] = 51,
  [175] = 157,
  [176] = 56,
  [177] = 165,
  [178] = 160,
  [179] = 179,
  [180] = 166,
  [181] = 158,
  [182] = 61,
  [183] = 59,
  [184] = 184,
  [185] = 62,
  [186] = 186,
  [187] = 58,
  [188] = 188,
  [189] = 189,
  [190] = 188,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 191,
  [196] = 196,
  [197] = 197,
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
  [211] = 204,
  [212] = 205,
  [213] = 204,
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
  [231] = 77,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 234,
  [238] = 238,
  [239] = 239,
  [240] = 234,
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
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 255,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 255,
  [265] = 265,
  [266] = 257,
  [267] = 267,
  [268] = 268,
  [269] = 257,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 259,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 265,
  [279] = 267,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 254,
  [284] = 284,
  [285] = 285,
  [286] = 259,
  [287] = 287,
  [288] = 272,
  [289] = 77,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 292,
  [298] = 298,
  [299] = 292,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
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
  [318] = 312,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 312,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 312,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 333,
  [341] = 319,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '!') ADVANCE(318);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '#') ADVANCE(561);
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '@') ADVANCE(552);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(41)
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
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(47)
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
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(36)
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
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\r') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(26)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(30)
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(318);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '#') ADVANCE(561);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 'g') ADVANCE(490);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead == 'y') ADVANCE(395);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(12)
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
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'm') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 36:
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 37:
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(14)
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
      if (lookahead == '&') ADVANCE(321);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 41:
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(632);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(632);
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '\\') SKIP(31)
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '_') ADVANCE(153);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(42);
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
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(29)
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
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(330);
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
      if (lookahead == 'x') ADVANCE(566);
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
      if (lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(617);
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
      if (lookahead == 'g') ADVANCE(613);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(629);
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
      if (lookahead == 'h') ADVANCE(609);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(621);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(625);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(627);
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
      if (lookahead == 'k') ADVANCE(571);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(328);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(607);
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
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(611);
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
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(559);
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
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(619);
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
      if (lookahead == 'w') ADVANCE(597);
      END_STATE();
    case 246:
      if (lookahead == 'x') ADVANCE(566);
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
      if (lookahead == '|') ADVANCE(322);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
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
          lookahead != '\r') ADVANCE(632);
      if (lookahead == '\r') ADVANCE(633);
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
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '@') ADVANCE(552);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(265)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
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
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
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
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
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
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_animate);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_animate);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
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
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(331);
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
      if (lookahead == '>') ADVANCE(330);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(330);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(311);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(632);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(632);
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(338);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'x') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'x') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead == 'r') ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'x') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'u') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'u') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'b') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'b') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'c') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'c') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'c') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'c') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'c') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'd') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'd') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'd') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(618);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(630);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'g') ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == 'u') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'm') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 's') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 't') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'w') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'y') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == 'y') ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == '_') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(547);
      if (lookahead == '_') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(188);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == '_') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_physical_length);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_physical_length);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(632);
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
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 32},
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
  [57] = {.lex_state = 266},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 266},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 41},
  [67] = {.lex_state = 41},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 41},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 41},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 41},
  [77] = {.lex_state = 41},
  [78] = {.lex_state = 41},
  [79] = {.lex_state = 41},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 41},
  [82] = {.lex_state = 41},
  [83] = {.lex_state = 41},
  [84] = {.lex_state = 41},
  [85] = {.lex_state = 41},
  [86] = {.lex_state = 41},
  [87] = {.lex_state = 41},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 41},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 41},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 46},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 266},
  [96] = {.lex_state = 47},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 34},
  [99] = {.lex_state = 48},
  [100] = {.lex_state = 266},
  [101] = {.lex_state = 266},
  [102] = {.lex_state = 266},
  [103] = {.lex_state = 266},
  [104] = {.lex_state = 266},
  [105] = {.lex_state = 266},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 266},
  [108] = {.lex_state = 37},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 37},
  [112] = {.lex_state = 266},
  [113] = {.lex_state = 266},
  [114] = {.lex_state = 266},
  [115] = {.lex_state = 266},
  [116] = {.lex_state = 266},
  [117] = {.lex_state = 266},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 266},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 266},
  [122] = {.lex_state = 266},
  [123] = {.lex_state = 266},
  [124] = {.lex_state = 37},
  [125] = {.lex_state = 34},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 34},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 34},
  [137] = {.lex_state = 34},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 47},
  [141] = {.lex_state = 266},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 34},
  [146] = {.lex_state = 34},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 34},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 34},
  [152] = {.lex_state = 34},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 36},
  [155] = {.lex_state = 36},
  [156] = {.lex_state = 34},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 51},
  [160] = {.lex_state = 36},
  [161] = {.lex_state = 51},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 36},
  [170] = {.lex_state = 51},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 36},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 266},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 266},
  [178] = {.lex_state = 266},
  [179] = {.lex_state = 48},
  [180] = {.lex_state = 266},
  [181] = {.lex_state = 266},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 36},
  [186] = {.lex_state = 51},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 51},
  [189] = {.lex_state = 51},
  [190] = {.lex_state = 51},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 266},
  [193] = {.lex_state = 51},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 51},
  [196] = {.lex_state = 51},
  [197] = {.lex_state = 51},
  [198] = {.lex_state = 51},
  [199] = {.lex_state = 52},
  [200] = {.lex_state = 52},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 266},
  [203] = {.lex_state = 266},
  [204] = {.lex_state = 266},
  [205] = {.lex_state = 266},
  [206] = {.lex_state = 52},
  [207] = {.lex_state = 266},
  [208] = {.lex_state = 266},
  [209] = {.lex_state = 266},
  [210] = {.lex_state = 266},
  [211] = {.lex_state = 266},
  [212] = {.lex_state = 266},
  [213] = {.lex_state = 266},
  [214] = {.lex_state = 266},
  [215] = {.lex_state = 266},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 36},
  [226] = {.lex_state = 36},
  [227] = {.lex_state = 36},
  [228] = {.lex_state = 36},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 50},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 50},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 41},
  [240] = {.lex_state = 50},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 33},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 33},
  [246] = {.lex_state = 41},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 33},
  [249] = {.lex_state = 39},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 50},
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
  [276] = {.lex_state = 41},
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
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 41},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 54},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 50},
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
    [sym__definition] = STATE(63),
    [sym_global_definition] = STATE(63),
    [sym_import_statement] = STATE(63),
    [sym_export_statement] = STATE(63),
    [sym_struct_definition] = STATE(63),
    [sym_component_definition] = STATE(63),
    [sym_visibility_modifier] = STATE(96),
    [sym_user_type_identifier] = STATE(254),
    [sym__type_identifier] = STATE(254),
    [sym_var_identifier] = STATE(333),
    [sym_children_identifier] = STATE(128),
    [sym_reference_identifier] = STATE(97),
    [sym_builtin_type_identifier] = STATE(254),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_global] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_field_declaration_list] = STATE(75),
    [sym_field_declaration_list_body] = STATE(312),
    [sym__expression] = STATE(192),
    [sym_expression_body_paren] = STATE(192),
    [sym__expression_body] = STATE(192),
    [sym_unary_expression] = STATE(192),
    [sym__binary_expression] = STATE(192),
    [sym_comparison_binary_expression] = STATE(192),
    [sym_mult_binary_expression] = STATE(192),
    [sym_ternary_expression] = STATE(192),
    [sym_add_binary_expression] = STATE(192),
    [sym_string] = STATE(192),
    [sym_var_identifier] = STATE(192),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(192),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(192),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_list_definition] = STATE(320),
    [sym_list_definition_body] = STATE(330),
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(209),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(209),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(266),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(269),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(257),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    [sym_formal_parameter] = STATE(293),
    [sym_string] = STATE(202),
    [sym_var_identifier] = STATE(202),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(202),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(202),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__expression] = STATE(180),
    [sym_expression_body_paren] = STATE(180),
    [sym__expression_body] = STATE(180),
    [sym_unary_expression] = STATE(180),
    [sym__binary_expression] = STATE(180),
    [sym_comparison_binary_expression] = STATE(180),
    [sym_mult_binary_expression] = STATE(180),
    [sym_ternary_expression] = STATE(180),
    [sym_add_binary_expression] = STATE(180),
    [sym_string] = STATE(180),
    [sym_var_identifier] = STATE(180),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(180),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(180),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(180),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(212),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(212),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(212),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__expression] = STATE(165),
    [sym_expression_body_paren] = STATE(165),
    [sym__expression_body] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym__binary_expression] = STATE(165),
    [sym_comparison_binary_expression] = STATE(165),
    [sym_mult_binary_expression] = STATE(165),
    [sym_ternary_expression] = STATE(165),
    [sym_add_binary_expression] = STATE(165),
    [sym_string] = STATE(165),
    [sym_var_identifier] = STATE(165),
    [sym_children_identifier] = STATE(172),
    [sym_function_identifier] = STATE(259),
    [sym_function_call] = STATE(165),
    [sym_reference_identifier] = STATE(142),
    [sym_value] = STATE(165),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(144),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(165),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(215),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(215),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(210),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(210),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__expression] = STATE(175),
    [sym_expression_body_paren] = STATE(175),
    [sym__expression_body] = STATE(175),
    [sym_unary_expression] = STATE(175),
    [sym__binary_expression] = STATE(175),
    [sym_comparison_binary_expression] = STATE(175),
    [sym_mult_binary_expression] = STATE(175),
    [sym_ternary_expression] = STATE(175),
    [sym_add_binary_expression] = STATE(175),
    [sym_string] = STATE(175),
    [sym_var_identifier] = STATE(175),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(175),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(175),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(175),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(207),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(207),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__expression] = STATE(158),
    [sym_expression_body_paren] = STATE(158),
    [sym__expression_body] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [sym__binary_expression] = STATE(158),
    [sym_comparison_binary_expression] = STATE(158),
    [sym_mult_binary_expression] = STATE(158),
    [sym_ternary_expression] = STATE(158),
    [sym_add_binary_expression] = STATE(158),
    [sym_string] = STATE(158),
    [sym_var_identifier] = STATE(158),
    [sym_children_identifier] = STATE(172),
    [sym_function_identifier] = STATE(259),
    [sym_function_call] = STATE(158),
    [sym_reference_identifier] = STATE(142),
    [sym_value] = STATE(158),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(144),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(158),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
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
    [sym_children_identifier] = STATE(172),
    [sym_function_identifier] = STATE(259),
    [sym_function_call] = STATE(160),
    [sym_reference_identifier] = STATE(142),
    [sym_value] = STATE(160),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(144),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(160),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(211),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(211),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__expression] = STATE(177),
    [sym_expression_body_paren] = STATE(177),
    [sym__expression_body] = STATE(177),
    [sym_unary_expression] = STATE(177),
    [sym__binary_expression] = STATE(177),
    [sym_comparison_binary_expression] = STATE(177),
    [sym_mult_binary_expression] = STATE(177),
    [sym_ternary_expression] = STATE(177),
    [sym_add_binary_expression] = STATE(177),
    [sym_string] = STATE(177),
    [sym_var_identifier] = STATE(177),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(177),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(177),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(177),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(213),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(213),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(213),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(208),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(208),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(208),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__expression] = STATE(178),
    [sym_expression_body_paren] = STATE(178),
    [sym__expression_body] = STATE(178),
    [sym_unary_expression] = STATE(178),
    [sym__binary_expression] = STATE(178),
    [sym_comparison_binary_expression] = STATE(178),
    [sym_mult_binary_expression] = STATE(178),
    [sym_ternary_expression] = STATE(178),
    [sym_add_binary_expression] = STATE(178),
    [sym_string] = STATE(178),
    [sym_var_identifier] = STATE(178),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(178),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(178),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(178),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__expression] = STATE(181),
    [sym_expression_body_paren] = STATE(181),
    [sym__expression_body] = STATE(181),
    [sym_unary_expression] = STATE(181),
    [sym__binary_expression] = STATE(181),
    [sym_comparison_binary_expression] = STATE(181),
    [sym_mult_binary_expression] = STATE(181),
    [sym_ternary_expression] = STATE(181),
    [sym_add_binary_expression] = STATE(181),
    [sym_string] = STATE(181),
    [sym_var_identifier] = STATE(181),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(181),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(181),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(181),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__expression] = STATE(166),
    [sym_expression_body_paren] = STATE(166),
    [sym__expression_body] = STATE(166),
    [sym_unary_expression] = STATE(166),
    [sym__binary_expression] = STATE(166),
    [sym_comparison_binary_expression] = STATE(166),
    [sym_mult_binary_expression] = STATE(166),
    [sym_ternary_expression] = STATE(166),
    [sym_add_binary_expression] = STATE(166),
    [sym_string] = STATE(166),
    [sym_var_identifier] = STATE(166),
    [sym_children_identifier] = STATE(172),
    [sym_function_identifier] = STATE(259),
    [sym_function_call] = STATE(166),
    [sym_reference_identifier] = STATE(142),
    [sym_value] = STATE(166),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(144),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(166),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__expression] = STATE(164),
    [sym_expression_body_paren] = STATE(164),
    [sym__expression_body] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym__binary_expression] = STATE(164),
    [sym_comparison_binary_expression] = STATE(164),
    [sym_mult_binary_expression] = STATE(164),
    [sym_ternary_expression] = STATE(164),
    [sym_add_binary_expression] = STATE(164),
    [sym_string] = STATE(164),
    [sym_var_identifier] = STATE(164),
    [sym_children_identifier] = STATE(172),
    [sym_function_identifier] = STATE(259),
    [sym_function_call] = STATE(164),
    [sym_reference_identifier] = STATE(142),
    [sym_value] = STATE(164),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(144),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
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
    [sym_children_identifier] = STATE(172),
    [sym_function_identifier] = STATE(259),
    [sym_function_call] = STATE(157),
    [sym_reference_identifier] = STATE(142),
    [sym_value] = STATE(157),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(144),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__expression] = STATE(204),
    [sym_expression_body_paren] = STATE(204),
    [sym__expression_body] = STATE(204),
    [sym_unary_expression] = STATE(204),
    [sym__binary_expression] = STATE(204),
    [sym_comparison_binary_expression] = STATE(204),
    [sym_mult_binary_expression] = STATE(204),
    [sym_ternary_expression] = STATE(204),
    [sym_add_binary_expression] = STATE(204),
    [sym_string] = STATE(204),
    [sym_var_identifier] = STATE(204),
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(204),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(204),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(204),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(203),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(203),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
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
    [sym_children_identifier] = STATE(128),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(205),
    [sym_reference_identifier] = STATE(97),
    [sym_value] = STATE(205),
    [sym_color] = STATE(131),
    [sym_value_with_units] = STATE(131),
    [sym_number] = STATE(146),
    [sym_language_constant] = STATE(131),
    [sym_builtin_type_identifier] = STATE(205),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym__identifier] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_parent] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(21),
    [anon_sym_this] = ACTIONS(21),
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
    [anon_sym_angle] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(23),
    [anon_sym_brush] = ACTIONS(23),
    [anon_sym_duration] = ACTIONS(23),
    [anon_sym_easing] = ACTIONS(23),
    [anon_sym_float] = ACTIONS(23),
    [anon_sym_image] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(23),
    [anon_sym_length] = ACTIONS(23),
    [anon_sym_percent] = ACTIONS(23),
    [anon_sym_physical_DASHlength] = ACTIONS(23),
    [anon_sym_physical_length] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(23),
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
    ACTIONS(87), 1,
      anon_sym_transitions,
    ACTIONS(89), 1,
      anon_sym_states,
    ACTIONS(91), 1,
      anon_sym_animate,
    ACTIONS(95), 1,
      anon_sym_elseif,
    ACTIONS(97), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_property,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym_callback,
    ACTIONS(105), 1,
      sym__identifier,
    ACTIONS(107), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym_reference_identifier,
    STATE(52), 1,
      sym_children_identifier,
    STATE(60), 1,
      sym_var_identifier,
    STATE(99), 1,
      sym_visibility_modifier,
    STATE(305), 1,
      sym_function_identifier,
    ACTIONS(93), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(109), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(283), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
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
  [99] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_export,
    ACTIONS(87), 1,
      anon_sym_transitions,
    ACTIONS(89), 1,
      anon_sym_states,
    ACTIONS(91), 1,
      anon_sym_animate,
    ACTIONS(95), 1,
      anon_sym_elseif,
    ACTIONS(97), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_property,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym_callback,
    ACTIONS(105), 1,
      sym__identifier,
    ACTIONS(107), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_reference_identifier,
    STATE(52), 1,
      sym_children_identifier,
    STATE(60), 1,
      sym_var_identifier,
    STATE(99), 1,
      sym_visibility_modifier,
    STATE(305), 1,
      sym_function_identifier,
    ACTIONS(93), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(109), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(283), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
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
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_export,
    ACTIONS(118), 1,
      anon_sym_transitions,
    ACTIONS(121), 1,
      anon_sym_states,
    ACTIONS(124), 1,
      anon_sym_animate,
    ACTIONS(130), 1,
      anon_sym_elseif,
    ACTIONS(133), 1,
      anon_sym_for,
    ACTIONS(136), 1,
      anon_sym_property,
    ACTIONS(139), 1,
      anon_sym_STAR,
    ACTIONS(142), 1,
      anon_sym_callback,
    ACTIONS(145), 1,
      sym__identifier,
    ACTIONS(148), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym_reference_identifier,
    STATE(52), 1,
      sym_children_identifier,
    STATE(60), 1,
      sym_var_identifier,
    STATE(99), 1,
      sym_visibility_modifier,
    STATE(305), 1,
      sym_function_identifier,
    ACTIONS(127), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(151), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(283), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(154), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
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
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
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
  [349] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      anon_sym_EQ_GT,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_var_identifier_repeat1,
    STATE(59), 1,
      sym_index_operator,
    ACTIONS(161), 9,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(165), 29,
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
  [413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(175), 35,
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
  [465] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_var_identifier_repeat1,
    STATE(59), 1,
      sym_index_operator,
    ACTIONS(161), 10,
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
    ACTIONS(165), 28,
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
  [523] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_var_identifier_repeat1,
    STATE(62), 1,
      sym_index_operator,
    ACTIONS(177), 10,
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
    ACTIONS(179), 28,
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
  [581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(181), 11,
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
    ACTIONS(183), 28,
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
  [634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 12,
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
    ACTIONS(190), 28,
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
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 12,
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
    ACTIONS(194), 28,
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
  [733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 12,
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
    ACTIONS(198), 28,
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
  [781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 12,
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
    ACTIONS(202), 28,
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
  [829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 12,
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
  [877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 12,
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
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 12,
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
    ACTIONS(183), 28,
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
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 12,
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
  [1021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_index_operator,
    ACTIONS(161), 10,
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
    ACTIONS(165), 28,
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
  [1073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_index_operator,
    ACTIONS(216), 10,
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
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 12,
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
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 12,
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
    ACTIONS(190), 28,
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
  [1221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 11,
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
  [1268] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_global,
    ACTIONS(233), 1,
      anon_sym_import,
    ACTIONS(236), 1,
      anon_sym_export,
    ACTIONS(239), 1,
      anon_sym_struct,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      sym__identifier,
    ACTIONS(248), 1,
      anon_sym_AT,
    STATE(96), 1,
      sym_visibility_modifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(333), 1,
      sym_var_identifier,
    ACTIONS(251), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(254), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(57), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(254), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [1342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 10,
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
  [1388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 10,
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
    ACTIONS(179), 28,
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
  [1434] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COLON_EQ,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(263), 3,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_AT,
    ACTIONS(271), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(267), 27,
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
  [1488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 10,
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
    ACTIONS(275), 28,
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
  [1534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 10,
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
    ACTIONS(279), 28,
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
  [1580] = 17,
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
      anon_sym_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      sym_visibility_modifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(333), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(254), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(57), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 4,
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
  [1692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 4,
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
  [1730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
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
  [1768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 4,
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
  [1806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 4,
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
  [1844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 4,
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
  [1882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
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
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 4,
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
  [1958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 4,
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
  [1996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 4,
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
  [2034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
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
  [2072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
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
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
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
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
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
  [2186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
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
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
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
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 4,
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
  [2300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 4,
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
  [2338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
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
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
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
  [2414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 4,
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
  [2452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 4,
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
  [2490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 4,
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
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 4,
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
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 4,
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
  [2604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(385), 26,
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
  [2642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(389), 26,
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
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(393), 26,
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
  [2718] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      anon_sym_export,
    STATE(85), 1,
      sym_component_definition,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(99), 1,
      sym_visibility_modifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(340), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(283), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [2774] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      anon_sym_export,
    STATE(84), 1,
      sym_component_definition,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(99), 1,
      sym_visibility_modifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(340), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(283), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [2830] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      anon_sym_export,
    STATE(86), 1,
      sym_component_definition,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(99), 1,
      sym_visibility_modifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(340), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(283), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [2886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(397), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [2921] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      anon_sym_global,
    ACTIONS(401), 1,
      anon_sym_struct,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(319), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(265), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [2974] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_DOT,
    STATE(98), 1,
      aux_sym_var_identifier_repeat1,
    STATE(151), 1,
      sym_index_operator,
    ACTIONS(165), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(161), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [3015] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_var_identifier_repeat1,
    STATE(148), 1,
      sym_index_operator,
    ACTIONS(179), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(177), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [3056] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(341), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(278), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(317), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(409), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(341), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(293), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(413), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(417), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(183), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(181), 18,
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
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(424), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(192), 19,
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
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(212), 19,
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
  [3427] = 3,
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
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(196), 19,
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
  [3491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(428), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(432), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(436), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(440), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(337), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(444), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 19,
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
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(357), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 8,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(446), 16,
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
  [3781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(452), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(456), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 3,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(460), 21,
      anon_sym_global,
      anon_sym_import,
      anon_sym_export,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(200), 19,
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
  [3909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(181), 19,
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
  [3940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(462), 16,
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
  [3971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 19,
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
  [4002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_index_operator,
    ACTIONS(165), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(161), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(466), 16,
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
  [4068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(208), 19,
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
  [4099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(470), 16,
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
    ACTIONS(476), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(474), 16,
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
  [4161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(478), 16,
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
  [4192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(482), 16,
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
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(486), 16,
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
  [4254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(153), 1,
      sym_index_operator,
    ACTIONS(218), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(216), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(204), 19,
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
  [4320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(490), 16,
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
  [4351] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(143), 1,
      aux_sym_var_identifier_repeat1,
    STATE(183), 1,
      sym_index_operator,
    ACTIONS(165), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(161), 11,
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
  [4392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(498), 19,
      anon_sym_global,
      anon_sym_struct,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [4424] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_DOT,
    STATE(98), 1,
      aux_sym_var_identifier_repeat1,
    STATE(151), 1,
      sym_index_operator,
    ACTIONS(165), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(161), 14,
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
  [4464] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(143), 1,
      aux_sym_var_identifier_repeat1,
    STATE(183), 1,
      sym_index_operator,
    ACTIONS(165), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(161), 11,
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
  [4502] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_var_identifier_repeat1,
    STATE(185), 1,
      sym_index_operator,
    ACTIONS(179), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(177), 11,
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
  [4540] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_PERCENT,
    STATE(138), 1,
      sym_unit_type,
    ACTIONS(504), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(472), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(470), 11,
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
  [4576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(224), 18,
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
  [4606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(138), 1,
      sym_unit_type,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(506), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(470), 14,
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
  [4639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 9,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(508), 12,
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
  [4668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(277), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(183), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(181), 12,
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
  [4730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(188), 13,
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
  [4761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(177), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(273), 17,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [4848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(196), 13,
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
  [4876] = 3,
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
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(508), 17,
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
  [4932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_subtraction_operator,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(517), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(515), 11,
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
  [4964] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SLASH,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    STATE(21), 1,
      sym_subtraction_operator,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(521), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(519), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(302), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(323), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [5036] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SLASH,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(539), 1,
      anon_sym_PLUS,
    STATE(21), 1,
      sym_subtraction_operator,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(533), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
    ACTIONS(535), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_struct_field_declaration_list,
    STATE(310), 1,
      sym_struct_field_declaration_list_body,
    STATE(268), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [5114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(188), 13,
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
  [5142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(181), 13,
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
  [5170] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SLASH,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(539), 1,
      anon_sym_PLUS,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      sym_subtraction_operator,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(545), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(551), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    STATE(21), 1,
      sym_subtraction_operator,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(555), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(553), 10,
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
  [5252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    STATE(21), 1,
      sym_subtraction_operator,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(559), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(557), 10,
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
  [5286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(204), 13,
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
  [5314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    STATE(182), 1,
      sym_index_operator,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [5346] = 3,
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
    ACTIONS(208), 13,
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
  [5374] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_struct_field_declaration_list,
    STATE(310), 1,
      sym_struct_field_declaration_list_body,
    STATE(282), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
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
    ACTIONS(194), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(192), 13,
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
  [5438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    STATE(183), 1,
      sym_index_operator,
    ACTIONS(165), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(161), 11,
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
  [5470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(200), 13,
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
  [5498] = 3,
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
    ACTIONS(212), 13,
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
  [5526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(517), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(515), 14,
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
  [5557] = 3,
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
    ACTIONS(224), 12,
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
  [5584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(555), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(553), 13,
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
  [5617] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(535), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(533), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(498), 17,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [5685] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(559), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(557), 13,
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
  [5718] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(521), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(519), 10,
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
  [5755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(273), 11,
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
  [5781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(177), 11,
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
  [5807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(277), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [5837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(277), 11,
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
  [5863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(275), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [5893] = 3,
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
  [5919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(279), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [5946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(311), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [5973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(267), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(272), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6027] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(573), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    STATE(85), 1,
      sym_field_declaration_list,
    STATE(312), 1,
      sym_field_declaration_list_body,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(327), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(324), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(288), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(307), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(300), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__identifier,
    STATE(338), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(23), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(335), 1,
      sym_builtin_type_identifier,
    ACTIONS(577), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(335), 1,
      sym_builtin_type_identifier,
    ACTIONS(582), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6292] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(335), 1,
      sym_builtin_type_identifier,
    ACTIONS(582), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6320] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6359] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6397] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6435] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(592), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 14,
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
  [6493] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6531] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6569] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6607] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6645] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6683] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(606), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6721] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6759] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
    ACTIONS(561), 1,
      anon_sym_QMARK,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(567), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      sym_comparison_operator,
    STATE(28), 1,
      sym_subtraction_operator,
    ACTIONS(547), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(549), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(614), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6816] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(221), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(317), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6849] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(218), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(321), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6882] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(219), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(321), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6915] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACK,
    ACTIONS(626), 1,
      anon_sym_STAR,
    ACTIONS(629), 1,
      sym__identifier,
    ACTIONS(632), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(219), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(321), 1,
      sym_var_identifier,
    ACTIONS(635), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6948] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      anon_sym_STAR,
    ACTIONS(643), 1,
      sym__identifier,
    ACTIONS(646), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(220), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(317), 1,
      sym_var_identifier,
    ACTIONS(649), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6981] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(220), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(317), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7014] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(322), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7041] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(313), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7068] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(329), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7095] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(331), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7122] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(303), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7149] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(291), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7176] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(618), 1,
      sym__identifier,
    STATE(97), 1,
      sym_reference_identifier,
    STATE(128), 1,
      sym_children_identifier,
    STATE(242), 1,
      sym_var_identifier,
    ACTIONS(21), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
  [7216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(656), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(337), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(660), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7261] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COLON_EQ,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_DOT,
    STATE(98), 1,
      aux_sym_var_identifier_repeat1,
    STATE(151), 1,
      sym_index_operator,
  [7283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__identifier,
    ACTIONS(664), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_post_identifier,
    STATE(55), 1,
      sym_function_call,
    STATE(274), 1,
      sym_function_identifier,
  [7302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(256), 1,
      sym_struct_field_declaration_list,
    STATE(310), 1,
      sym_struct_field_declaration_list_body,
  [7321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(256), 1,
      sym_struct_field_declaration_list,
    STATE(310), 1,
      sym_struct_field_declaration_list_body,
  [7340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_AT,
    ACTIONS(670), 1,
      sym__identifier,
    STATE(162), 1,
      sym_function_call,
    STATE(163), 1,
      sym_post_identifier,
    STATE(259), 1,
      sym_function_identifier,
  [7359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(256), 1,
      sym_struct_field_declaration_list,
    STATE(310), 1,
      sym_struct_field_declaration_list_body,
  [7378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(681), 1,
      anon_sym_DASH_GT,
    STATE(110), 1,
      sym_formal_parameters,
    STATE(296), 1,
      sym_call_signature,
  [7397] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_AT,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(125), 1,
      sym_post_identifier,
    STATE(127), 1,
      sym_function_call,
    STATE(286), 1,
      sym_function_identifier,
  [7416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(685), 2,
      anon_sym_in,
      anon_sym_out,
  [7430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    STATE(306), 1,
      sym_property_expr,
    ACTIONS(691), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [7444] = 4,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_string_repeat1,
    ACTIONS(695), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7458] = 4,
    ACTIONS(693), 1,
      anon_sym_SQUOTE,
    ACTIONS(697), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym_string_repeat2,
    ACTIONS(699), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7472] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      aux_sym_string_repeat1,
    ACTIONS(703), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7496] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_string_repeat2,
    ACTIONS(709), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7510] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      aux_sym_string_repeat1,
    ACTIONS(714), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7524] = 4,
    ACTIONS(697), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_string_repeat2,
    ACTIONS(717), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(685), 2,
      anon_sym_in,
      anon_sym_out,
  [7552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(721), 2,
      anon_sym_in,
      anon_sym_out,
  [7566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(308), 1,
      sym_string,
  [7579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_AT,
    ACTIONS(726), 1,
      sym__identifier,
    STATE(239), 1,
      sym_function_identifier,
  [7592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_field_declaration_list,
    STATE(318), 1,
      sym_field_declaration_list_body,
  [7605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_formal_parameters_repeat1,
  [7618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(730), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_formal_parameters_repeat1,
  [7642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_formal_parameters_repeat1,
  [7655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_formal_parameters,
    STATE(167), 1,
      sym_call_signature,
  [7668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_formal_parameters_repeat1,
  [7681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_field_declaration_list,
    STATE(326), 1,
      sym_field_declaration_list_body,
  [7694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [7703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_field_declaration_list,
    STATE(334), 1,
      sym_field_declaration_list_body,
  [7716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_formal_parameters_repeat1,
  [7729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_field_declaration_list,
    STATE(318), 1,
      sym_field_declaration_list_body,
  [7742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_formal_parameters_repeat1,
  [7755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_field_declaration_list,
    STATE(312), 1,
      sym_field_declaration_list_body,
  [7768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_struct_field_declaration_list,
    STATE(310), 1,
      sym_struct_field_declaration_list_body,
  [7781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_formal_parameters_repeat1,
  [7794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_field_declaration_list,
    STATE(318), 1,
      sym_field_declaration_list_body,
  [7807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
  [7820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_field_declaration_list,
    STATE(312), 1,
      sym_field_declaration_list_body,
  [7833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(328), 1,
      sym_string,
  [7846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_call_signature,
    STATE(54), 1,
      sym_formal_parameters,
  [7859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      aux_sym_import_statement_repeat1,
  [7872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_import_statement_repeat1,
  [7894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_field_declaration_list,
    STATE(312), 1,
      sym_field_declaration_list_body,
  [7907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_field_declaration_list,
    STATE(318), 1,
      sym_field_declaration_list_body,
  [7920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_field_declaration_list,
    STATE(318), 1,
      sym_field_declaration_list_body,
  [7933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_field_declaration_list,
    STATE(312), 1,
      sym_field_declaration_list_body,
  [7946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_struct_field_declaration_list,
    STATE(310), 1,
      sym_struct_field_declaration_list_body,
  [7959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_field_declaration_list,
    STATE(312), 1,
      sym_field_declaration_list_body,
  [7972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
  [7985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
  [7998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_formal_parameters,
    STATE(137), 1,
      sym_call_signature,
  [8011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_string,
  [8024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_field_declaration_list,
    STATE(318), 1,
      sym_field_declaration_list_body,
  [8037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_transitions_list_definition,
  [8056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_animate_declaration_list,
  [8066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(782), 1,
      anon_sym_children,
  [8076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_states_list_definition,
  [8102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    ACTIONS(788), 1,
      anon_sym_DASH_GT,
  [8112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(790), 1,
      anon_sym_children,
  [8122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      aux_sym_color_token1,
    ACTIONS(794), 1,
      aux_sym_color_token2,
  [8132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(796), 1,
      anon_sym_children,
  [8142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_from,
  [8157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_GT,
  [8164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_COLON_EQ,
  [8171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__identifier,
  [8178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_EQ_GT,
  [8185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [8192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [8199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SEMI,
  [8206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_from,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
  [8220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [8227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [8234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_in,
  [8241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LT,
  [8255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_from,
  [8262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COLON,
  [8269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COLON_EQ,
  [8283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_SEMI,
  [8290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_when,
  [8297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_COLON,
  [8304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_GT,
  [8311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_COLON_EQ,
  [8318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_GT,
  [8325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
  [8332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COLON_EQ,
  [8339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SEMI,
  [8346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_COLON,
  [8353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
  [8360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_COLON_EQ,
  [8367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
  [8374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_COLON_EQ,
  [8381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
  [8388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COLON,
  [8395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      ts_builtin_sym_end,
  [8402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_children,
  [8409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
  [8416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
  [8423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COLON_EQ,
  [8430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COLON_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 99,
  [SMALL_STATE(37)] = 198,
  [SMALL_STATE(38)] = 297,
  [SMALL_STATE(39)] = 349,
  [SMALL_STATE(40)] = 413,
  [SMALL_STATE(41)] = 465,
  [SMALL_STATE(42)] = 523,
  [SMALL_STATE(43)] = 581,
  [SMALL_STATE(44)] = 634,
  [SMALL_STATE(45)] = 685,
  [SMALL_STATE(46)] = 733,
  [SMALL_STATE(47)] = 781,
  [SMALL_STATE(48)] = 829,
  [SMALL_STATE(49)] = 877,
  [SMALL_STATE(50)] = 925,
  [SMALL_STATE(51)] = 973,
  [SMALL_STATE(52)] = 1021,
  [SMALL_STATE(53)] = 1073,
  [SMALL_STATE(54)] = 1125,
  [SMALL_STATE(55)] = 1173,
  [SMALL_STATE(56)] = 1221,
  [SMALL_STATE(57)] = 1268,
  [SMALL_STATE(58)] = 1342,
  [SMALL_STATE(59)] = 1388,
  [SMALL_STATE(60)] = 1434,
  [SMALL_STATE(61)] = 1488,
  [SMALL_STATE(62)] = 1534,
  [SMALL_STATE(63)] = 1580,
  [SMALL_STATE(64)] = 1654,
  [SMALL_STATE(65)] = 1692,
  [SMALL_STATE(66)] = 1730,
  [SMALL_STATE(67)] = 1768,
  [SMALL_STATE(68)] = 1806,
  [SMALL_STATE(69)] = 1844,
  [SMALL_STATE(70)] = 1882,
  [SMALL_STATE(71)] = 1920,
  [SMALL_STATE(72)] = 1958,
  [SMALL_STATE(73)] = 1996,
  [SMALL_STATE(74)] = 2034,
  [SMALL_STATE(75)] = 2072,
  [SMALL_STATE(76)] = 2110,
  [SMALL_STATE(77)] = 2148,
  [SMALL_STATE(78)] = 2186,
  [SMALL_STATE(79)] = 2224,
  [SMALL_STATE(80)] = 2262,
  [SMALL_STATE(81)] = 2300,
  [SMALL_STATE(82)] = 2338,
  [SMALL_STATE(83)] = 2376,
  [SMALL_STATE(84)] = 2414,
  [SMALL_STATE(85)] = 2452,
  [SMALL_STATE(86)] = 2490,
  [SMALL_STATE(87)] = 2528,
  [SMALL_STATE(88)] = 2566,
  [SMALL_STATE(89)] = 2604,
  [SMALL_STATE(90)] = 2642,
  [SMALL_STATE(91)] = 2680,
  [SMALL_STATE(92)] = 2718,
  [SMALL_STATE(93)] = 2774,
  [SMALL_STATE(94)] = 2830,
  [SMALL_STATE(95)] = 2886,
  [SMALL_STATE(96)] = 2921,
  [SMALL_STATE(97)] = 2974,
  [SMALL_STATE(98)] = 3015,
  [SMALL_STATE(99)] = 3056,
  [SMALL_STATE(100)] = 3103,
  [SMALL_STATE(101)] = 3135,
  [SMALL_STATE(102)] = 3167,
  [SMALL_STATE(103)] = 3199,
  [SMALL_STATE(104)] = 3231,
  [SMALL_STATE(105)] = 3263,
  [SMALL_STATE(106)] = 3295,
  [SMALL_STATE(107)] = 3331,
  [SMALL_STATE(108)] = 3363,
  [SMALL_STATE(109)] = 3395,
  [SMALL_STATE(110)] = 3427,
  [SMALL_STATE(111)] = 3459,
  [SMALL_STATE(112)] = 3491,
  [SMALL_STATE(113)] = 3523,
  [SMALL_STATE(114)] = 3555,
  [SMALL_STATE(115)] = 3587,
  [SMALL_STATE(116)] = 3619,
  [SMALL_STATE(117)] = 3651,
  [SMALL_STATE(118)] = 3683,
  [SMALL_STATE(119)] = 3717,
  [SMALL_STATE(120)] = 3749,
  [SMALL_STATE(121)] = 3781,
  [SMALL_STATE(122)] = 3813,
  [SMALL_STATE(123)] = 3845,
  [SMALL_STATE(124)] = 3877,
  [SMALL_STATE(125)] = 3909,
  [SMALL_STATE(126)] = 3940,
  [SMALL_STATE(127)] = 3971,
  [SMALL_STATE(128)] = 4002,
  [SMALL_STATE(129)] = 4037,
  [SMALL_STATE(130)] = 4068,
  [SMALL_STATE(131)] = 4099,
  [SMALL_STATE(132)] = 4130,
  [SMALL_STATE(133)] = 4161,
  [SMALL_STATE(134)] = 4192,
  [SMALL_STATE(135)] = 4223,
  [SMALL_STATE(136)] = 4254,
  [SMALL_STATE(137)] = 4289,
  [SMALL_STATE(138)] = 4320,
  [SMALL_STATE(139)] = 4351,
  [SMALL_STATE(140)] = 4392,
  [SMALL_STATE(141)] = 4424,
  [SMALL_STATE(142)] = 4464,
  [SMALL_STATE(143)] = 4502,
  [SMALL_STATE(144)] = 4540,
  [SMALL_STATE(145)] = 4576,
  [SMALL_STATE(146)] = 4606,
  [SMALL_STATE(147)] = 4639,
  [SMALL_STATE(148)] = 4668,
  [SMALL_STATE(149)] = 4697,
  [SMALL_STATE(150)] = 4730,
  [SMALL_STATE(151)] = 4761,
  [SMALL_STATE(152)] = 4790,
  [SMALL_STATE(153)] = 4819,
  [SMALL_STATE(154)] = 4848,
  [SMALL_STATE(155)] = 4876,
  [SMALL_STATE(156)] = 4904,
  [SMALL_STATE(157)] = 4932,
  [SMALL_STATE(158)] = 4964,
  [SMALL_STATE(159)] = 5002,
  [SMALL_STATE(160)] = 5036,
  [SMALL_STATE(161)] = 5078,
  [SMALL_STATE(162)] = 5114,
  [SMALL_STATE(163)] = 5142,
  [SMALL_STATE(164)] = 5170,
  [SMALL_STATE(165)] = 5218,
  [SMALL_STATE(166)] = 5252,
  [SMALL_STATE(167)] = 5286,
  [SMALL_STATE(168)] = 5314,
  [SMALL_STATE(169)] = 5346,
  [SMALL_STATE(170)] = 5374,
  [SMALL_STATE(171)] = 5410,
  [SMALL_STATE(172)] = 5438,
  [SMALL_STATE(173)] = 5470,
  [SMALL_STATE(174)] = 5498,
  [SMALL_STATE(175)] = 5526,
  [SMALL_STATE(176)] = 5557,
  [SMALL_STATE(177)] = 5584,
  [SMALL_STATE(178)] = 5617,
  [SMALL_STATE(179)] = 5658,
  [SMALL_STATE(180)] = 5685,
  [SMALL_STATE(181)] = 5718,
  [SMALL_STATE(182)] = 5755,
  [SMALL_STATE(183)] = 5781,
  [SMALL_STATE(184)] = 5807,
  [SMALL_STATE(185)] = 5837,
  [SMALL_STATE(186)] = 5863,
  [SMALL_STATE(187)] = 5893,
  [SMALL_STATE(188)] = 5919,
  [SMALL_STATE(189)] = 5946,
  [SMALL_STATE(190)] = 5973,
  [SMALL_STATE(191)] = 6000,
  [SMALL_STATE(192)] = 6027,
  [SMALL_STATE(193)] = 6074,
  [SMALL_STATE(194)] = 6101,
  [SMALL_STATE(195)] = 6128,
  [SMALL_STATE(196)] = 6155,
  [SMALL_STATE(197)] = 6182,
  [SMALL_STATE(198)] = 6209,
  [SMALL_STATE(199)] = 6236,
  [SMALL_STATE(200)] = 6264,
  [SMALL_STATE(201)] = 6292,
  [SMALL_STATE(202)] = 6320,
  [SMALL_STATE(203)] = 6359,
  [SMALL_STATE(204)] = 6397,
  [SMALL_STATE(205)] = 6435,
  [SMALL_STATE(206)] = 6473,
  [SMALL_STATE(207)] = 6493,
  [SMALL_STATE(208)] = 6531,
  [SMALL_STATE(209)] = 6569,
  [SMALL_STATE(210)] = 6607,
  [SMALL_STATE(211)] = 6645,
  [SMALL_STATE(212)] = 6683,
  [SMALL_STATE(213)] = 6721,
  [SMALL_STATE(214)] = 6759,
  [SMALL_STATE(215)] = 6794,
  [SMALL_STATE(216)] = 6816,
  [SMALL_STATE(217)] = 6849,
  [SMALL_STATE(218)] = 6882,
  [SMALL_STATE(219)] = 6915,
  [SMALL_STATE(220)] = 6948,
  [SMALL_STATE(221)] = 6981,
  [SMALL_STATE(222)] = 7014,
  [SMALL_STATE(223)] = 7041,
  [SMALL_STATE(224)] = 7068,
  [SMALL_STATE(225)] = 7095,
  [SMALL_STATE(226)] = 7122,
  [SMALL_STATE(227)] = 7149,
  [SMALL_STATE(228)] = 7176,
  [SMALL_STATE(229)] = 7203,
  [SMALL_STATE(230)] = 7216,
  [SMALL_STATE(231)] = 7231,
  [SMALL_STATE(232)] = 7246,
  [SMALL_STATE(233)] = 7261,
  [SMALL_STATE(234)] = 7283,
  [SMALL_STATE(235)] = 7302,
  [SMALL_STATE(236)] = 7321,
  [SMALL_STATE(237)] = 7340,
  [SMALL_STATE(238)] = 7359,
  [SMALL_STATE(239)] = 7378,
  [SMALL_STATE(240)] = 7397,
  [SMALL_STATE(241)] = 7416,
  [SMALL_STATE(242)] = 7430,
  [SMALL_STATE(243)] = 7444,
  [SMALL_STATE(244)] = 7458,
  [SMALL_STATE(245)] = 7472,
  [SMALL_STATE(246)] = 7486,
  [SMALL_STATE(247)] = 7496,
  [SMALL_STATE(248)] = 7510,
  [SMALL_STATE(249)] = 7524,
  [SMALL_STATE(250)] = 7538,
  [SMALL_STATE(251)] = 7552,
  [SMALL_STATE(252)] = 7566,
  [SMALL_STATE(253)] = 7579,
  [SMALL_STATE(254)] = 7592,
  [SMALL_STATE(255)] = 7605,
  [SMALL_STATE(256)] = 7618,
  [SMALL_STATE(257)] = 7629,
  [SMALL_STATE(258)] = 7642,
  [SMALL_STATE(259)] = 7655,
  [SMALL_STATE(260)] = 7668,
  [SMALL_STATE(261)] = 7681,
  [SMALL_STATE(262)] = 7694,
  [SMALL_STATE(263)] = 7703,
  [SMALL_STATE(264)] = 7716,
  [SMALL_STATE(265)] = 7729,
  [SMALL_STATE(266)] = 7742,
  [SMALL_STATE(267)] = 7755,
  [SMALL_STATE(268)] = 7768,
  [SMALL_STATE(269)] = 7781,
  [SMALL_STATE(270)] = 7794,
  [SMALL_STATE(271)] = 7807,
  [SMALL_STATE(272)] = 7820,
  [SMALL_STATE(273)] = 7833,
  [SMALL_STATE(274)] = 7846,
  [SMALL_STATE(275)] = 7859,
  [SMALL_STATE(276)] = 7872,
  [SMALL_STATE(277)] = 7881,
  [SMALL_STATE(278)] = 7894,
  [SMALL_STATE(279)] = 7907,
  [SMALL_STATE(280)] = 7920,
  [SMALL_STATE(281)] = 7933,
  [SMALL_STATE(282)] = 7946,
  [SMALL_STATE(283)] = 7959,
  [SMALL_STATE(284)] = 7972,
  [SMALL_STATE(285)] = 7985,
  [SMALL_STATE(286)] = 7998,
  [SMALL_STATE(287)] = 8011,
  [SMALL_STATE(288)] = 8024,
  [SMALL_STATE(289)] = 8037,
  [SMALL_STATE(290)] = 8046,
  [SMALL_STATE(291)] = 8056,
  [SMALL_STATE(292)] = 8066,
  [SMALL_STATE(293)] = 8076,
  [SMALL_STATE(294)] = 8084,
  [SMALL_STATE(295)] = 8092,
  [SMALL_STATE(296)] = 8102,
  [SMALL_STATE(297)] = 8112,
  [SMALL_STATE(298)] = 8122,
  [SMALL_STATE(299)] = 8132,
  [SMALL_STATE(300)] = 8142,
  [SMALL_STATE(301)] = 8150,
  [SMALL_STATE(302)] = 8157,
  [SMALL_STATE(303)] = 8164,
  [SMALL_STATE(304)] = 8171,
  [SMALL_STATE(305)] = 8178,
  [SMALL_STATE(306)] = 8185,
  [SMALL_STATE(307)] = 8192,
  [SMALL_STATE(308)] = 8199,
  [SMALL_STATE(309)] = 8206,
  [SMALL_STATE(310)] = 8213,
  [SMALL_STATE(311)] = 8220,
  [SMALL_STATE(312)] = 8227,
  [SMALL_STATE(313)] = 8234,
  [SMALL_STATE(314)] = 8241,
  [SMALL_STATE(315)] = 8248,
  [SMALL_STATE(316)] = 8255,
  [SMALL_STATE(317)] = 8262,
  [SMALL_STATE(318)] = 8269,
  [SMALL_STATE(319)] = 8276,
  [SMALL_STATE(320)] = 8283,
  [SMALL_STATE(321)] = 8290,
  [SMALL_STATE(322)] = 8297,
  [SMALL_STATE(323)] = 8304,
  [SMALL_STATE(324)] = 8311,
  [SMALL_STATE(325)] = 8318,
  [SMALL_STATE(326)] = 8325,
  [SMALL_STATE(327)] = 8332,
  [SMALL_STATE(328)] = 8339,
  [SMALL_STATE(329)] = 8346,
  [SMALL_STATE(330)] = 8353,
  [SMALL_STATE(331)] = 8360,
  [SMALL_STATE(332)] = 8367,
  [SMALL_STATE(333)] = 8374,
  [SMALL_STATE(334)] = 8381,
  [SMALL_STATE(335)] = 8388,
  [SMALL_STATE(336)] = 8395,
  [SMALL_STATE(337)] = 8402,
  [SMALL_STATE(338)] = 8409,
  [SMALL_STATE(339)] = 8416,
  [SMALL_STATE(340)] = 8423,
  [SMALL_STATE(341)] = 8430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(179),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(290),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(295),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(227),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(223),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(315),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(53),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(253),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(39),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(297),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(49),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(120),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operator, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operator, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(234),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(337),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_operator, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_operator, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(240),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(237),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_binary_expression, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_binary_expression, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(120),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(136),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(97),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(337),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(130),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(136),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(97),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(337),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(130),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 2, .production_id = 7),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2), SHIFT_REPEAT(216),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(247),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(248),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(224),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(197),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 10),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 15),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [866] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
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
