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
#define STATE_COUNT 361
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 172
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
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
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
    {field_name, 1, .inherited = true},
  [13] =
    {field_name, 1},
    {field_super_type, 3},
  [15] =
    {field_name, 2},
  [16] =
    {field_type, 0},
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
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 4,
  [10] = 6,
  [11] = 6,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 16,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 14,
  [32] = 32,
  [33] = 14,
  [34] = 28,
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
  [96] = 53,
  [97] = 52,
  [98] = 55,
  [99] = 54,
  [100] = 51,
  [101] = 101,
  [102] = 41,
  [103] = 42,
  [104] = 104,
  [105] = 105,
  [106] = 56,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 43,
  [116] = 41,
  [117] = 49,
  [118] = 42,
  [119] = 112,
  [120] = 48,
  [121] = 114,
  [122] = 122,
  [123] = 44,
  [124] = 124,
  [125] = 46,
  [126] = 126,
  [127] = 45,
  [128] = 124,
  [129] = 122,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 49,
  [135] = 47,
  [136] = 43,
  [137] = 137,
  [138] = 138,
  [139] = 95,
  [140] = 86,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 45,
  [145] = 145,
  [146] = 146,
  [147] = 46,
  [148] = 44,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 81,
  [153] = 66,
  [154] = 48,
  [155] = 47,
  [156] = 156,
  [157] = 157,
  [158] = 126,
  [159] = 159,
  [160] = 56,
  [161] = 51,
  [162] = 79,
  [163] = 85,
  [164] = 164,
  [165] = 55,
  [166] = 54,
  [167] = 167,
  [168] = 53,
  [169] = 52,
  [170] = 170,
  [171] = 171,
  [172] = 82,
  [173] = 50,
  [174] = 87,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 142,
  [181] = 50,
  [182] = 57,
  [183] = 60,
  [184] = 59,
  [185] = 177,
  [186] = 175,
  [187] = 141,
  [188] = 176,
  [189] = 58,
  [190] = 190,
  [191] = 58,
  [192] = 192,
  [193] = 59,
  [194] = 62,
  [195] = 57,
  [196] = 196,
  [197] = 60,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 200,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 204,
  [209] = 209,
  [210] = 210,
  [211] = 210,
  [212] = 199,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 224,
  [227] = 227,
  [228] = 219,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 41,
  [245] = 42,
  [246] = 246,
  [247] = 49,
  [248] = 248,
  [249] = 86,
  [250] = 250,
  [251] = 251,
  [252] = 251,
  [253] = 253,
  [254] = 251,
  [255] = 255,
  [256] = 256,
  [257] = 251,
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
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 271,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 286,
  [290] = 290,
  [291] = 291,
  [292] = 284,
  [293] = 293,
  [294] = 288,
  [295] = 293,
  [296] = 296,
  [297] = 286,
  [298] = 298,
  [299] = 299,
  [300] = 287,
  [301] = 272,
  [302] = 302,
  [303] = 86,
  [304] = 285,
  [305] = 284,
  [306] = 290,
  [307] = 307,
  [308] = 285,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 314,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 314,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 324,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
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
  [340] = 324,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 326,
  [349] = 324,
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
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 39},
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
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 40},
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
  [80] = {.lex_state = 264},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 40},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 40},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 264},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 264},
  [106] = {.lex_state = 32},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 34},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 34},
  [113] = {.lex_state = 34},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 32},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 264},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 35},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 32},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 35},
  [130] = {.lex_state = 46},
  [131] = {.lex_state = 46},
  [132] = {.lex_state = 46},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 34},
  [137] = {.lex_state = 264},
  [138] = {.lex_state = 264},
  [139] = {.lex_state = 264},
  [140] = {.lex_state = 264},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 264},
  [144] = {.lex_state = 34},
  [145] = {.lex_state = 264},
  [146] = {.lex_state = 264},
  [147] = {.lex_state = 34},
  [148] = {.lex_state = 34},
  [149] = {.lex_state = 264},
  [150] = {.lex_state = 264},
  [151] = {.lex_state = 264},
  [152] = {.lex_state = 264},
  [153] = {.lex_state = 264},
  [154] = {.lex_state = 34},
  [155] = {.lex_state = 34},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 264},
  [158] = {.lex_state = 32},
  [159] = {.lex_state = 264},
  [160] = {.lex_state = 34},
  [161] = {.lex_state = 34},
  [162] = {.lex_state = 264},
  [163] = {.lex_state = 264},
  [164] = {.lex_state = 264},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 264},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 35},
  [171] = {.lex_state = 34},
  [172] = {.lex_state = 264},
  [173] = {.lex_state = 32},
  [174] = {.lex_state = 264},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 34},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 35},
  [179] = {.lex_state = 47},
  [180] = {.lex_state = 264},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 32},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 32},
  [185] = {.lex_state = 264},
  [186] = {.lex_state = 264},
  [187] = {.lex_state = 264},
  [188] = {.lex_state = 264},
  [189] = {.lex_state = 32},
  [190] = {.lex_state = 35},
  [191] = {.lex_state = 34},
  [192] = {.lex_state = 47},
  [193] = {.lex_state = 34},
  [194] = {.lex_state = 34},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 35},
  [197] = {.lex_state = 34},
  [198] = {.lex_state = 35},
  [199] = {.lex_state = 35},
  [200] = {.lex_state = 35},
  [201] = {.lex_state = 264},
  [202] = {.lex_state = 35},
  [203] = {.lex_state = 35},
  [204] = {.lex_state = 35},
  [205] = {.lex_state = 35},
  [206] = {.lex_state = 35},
  [207] = {.lex_state = 35},
  [208] = {.lex_state = 35},
  [209] = {.lex_state = 35},
  [210] = {.lex_state = 35},
  [211] = {.lex_state = 35},
  [212] = {.lex_state = 35},
  [213] = {.lex_state = 35},
  [214] = {.lex_state = 49},
  [215] = {.lex_state = 49},
  [216] = {.lex_state = 49},
  [217] = {.lex_state = 35},
  [218] = {.lex_state = 264},
  [219] = {.lex_state = 264},
  [220] = {.lex_state = 264},
  [221] = {.lex_state = 264},
  [222] = {.lex_state = 264},
  [223] = {.lex_state = 264},
  [224] = {.lex_state = 264},
  [225] = {.lex_state = 49},
  [226] = {.lex_state = 264},
  [227] = {.lex_state = 264},
  [228] = {.lex_state = 264},
  [229] = {.lex_state = 264},
  [230] = {.lex_state = 264},
  [231] = {.lex_state = 264},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 34},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 34},
  [237] = {.lex_state = 34},
  [238] = {.lex_state = 34},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 34},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 34},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 34},
  [249] = {.lex_state = 34},
  [250] = {.lex_state = 34},
  [251] = {.lex_state = 48},
  [252] = {.lex_state = 48},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 48},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 48},
  [258] = {.lex_state = 40},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 31},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 40},
  [263] = {.lex_state = 31},
  [264] = {.lex_state = 38},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 31},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 38},
  [269] = {.lex_state = 38},
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
  [280] = {.lex_state = 40},
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
  [291] = {.lex_state = 48},
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
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 50},
  [315] = {.lex_state = 50},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 50},
  [321] = {.lex_state = 51},
  [322] = {.lex_state = 40},
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
  [347] = {.lex_state = 48},
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
  [360] = {.lex_state = 0},
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
    [sym_source_file] = STATE(355),
    [sym__definition] = STATE(92),
    [sym_global_definition] = STATE(92),
    [sym_import_statement] = STATE(92),
    [sym_export_statement] = STATE(92),
    [sym_struct_definition] = STATE(92),
    [sym_component_definition] = STATE(92),
    [sym_visibility_modifier] = STATE(179),
    [sym_user_type_identifier] = STATE(122),
    [sym__type_identifier] = STATE(122),
    [sym_builtin_type_identifier] = STATE(122),
    [aux_sym_source_file_repeat1] = STATE(92),
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
    [sym_field_declaration_list] = STATE(74),
    [sym_field_declaration_list_body] = STATE(325),
    [sym__expression] = STATE(201),
    [sym_expression_body_paren] = STATE(201),
    [sym__expression_body] = STATE(201),
    [sym_unary_expression] = STATE(201),
    [sym__binary_expression] = STATE(201),
    [sym_comparison_binary_expression] = STATE(201),
    [sym_mult_binary_expression] = STATE(201),
    [sym_ternary_expression] = STATE(201),
    [sym_add_binary_expression] = STATE(201),
    [sym_string] = STATE(201),
    [sym_var_identifier] = STATE(201),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(201),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(201),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(201),
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
    [sym_list_definition] = STATE(350),
    [sym_list_definition_body] = STATE(354),
    [sym__expression] = STATE(223),
    [sym_expression_body_paren] = STATE(223),
    [sym__expression_body] = STATE(223),
    [sym_unary_expression] = STATE(223),
    [sym__binary_expression] = STATE(223),
    [sym_comparison_binary_expression] = STATE(223),
    [sym_mult_binary_expression] = STATE(223),
    [sym_ternary_expression] = STATE(223),
    [sym_add_binary_expression] = STATE(223),
    [sym_string] = STATE(223),
    [sym_var_identifier] = STATE(223),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(223),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(223),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(223),
    [anon_sym_LBRACK] = ACTIONS(49),
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
  [4] = {
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(316),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(316),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(53),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(308),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(316),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(316),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(316),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(304),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(285),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(316),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym__expression] = STATE(218),
    [sym_expression_body_paren] = STATE(218),
    [sym__expression_body] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym__binary_expression] = STATE(218),
    [sym_comparison_binary_expression] = STATE(218),
    [sym_mult_binary_expression] = STATE(218),
    [sym_ternary_expression] = STATE(218),
    [sym_add_binary_expression] = STATE(218),
    [sym_formal_parameter] = STATE(316),
    [sym_string] = STATE(218),
    [sym_var_identifier] = STATE(218),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(218),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(218),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(218),
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
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(222),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(222),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(222),
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
  [15] = {
    [sym__expression] = STATE(186),
    [sym_expression_body_paren] = STATE(186),
    [sym__expression_body] = STATE(186),
    [sym_unary_expression] = STATE(186),
    [sym__binary_expression] = STATE(186),
    [sym_comparison_binary_expression] = STATE(186),
    [sym_mult_binary_expression] = STATE(186),
    [sym_ternary_expression] = STATE(186),
    [sym_add_binary_expression] = STATE(186),
    [sym_string] = STATE(186),
    [sym_var_identifier] = STATE(186),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(186),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(186),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(186),
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
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(180),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(180),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(180),
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
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(188),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(188),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
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
  [18] = {
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
    [sym_children_identifier] = STATE(148),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(175),
    [sym_reference_identifier] = STATE(118),
    [sym_value] = STATE(175),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(175),
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
  [19] = {
    [sym__expression] = STATE(220),
    [sym_expression_body_paren] = STATE(220),
    [sym__expression_body] = STATE(220),
    [sym_unary_expression] = STATE(220),
    [sym__binary_expression] = STATE(220),
    [sym_comparison_binary_expression] = STATE(220),
    [sym_mult_binary_expression] = STATE(220),
    [sym_ternary_expression] = STATE(220),
    [sym_add_binary_expression] = STATE(220),
    [sym_string] = STATE(220),
    [sym_var_identifier] = STATE(220),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(220),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(220),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(220),
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
    [sym__expression] = STATE(176),
    [sym_expression_body_paren] = STATE(176),
    [sym__expression_body] = STATE(176),
    [sym_unary_expression] = STATE(176),
    [sym__binary_expression] = STATE(176),
    [sym_comparison_binary_expression] = STATE(176),
    [sym_mult_binary_expression] = STATE(176),
    [sym_ternary_expression] = STATE(176),
    [sym_add_binary_expression] = STATE(176),
    [sym_string] = STATE(176),
    [sym_var_identifier] = STATE(176),
    [sym_children_identifier] = STATE(148),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(176),
    [sym_reference_identifier] = STATE(118),
    [sym_value] = STATE(176),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(176),
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
  [21] = {
    [sym__expression] = STATE(227),
    [sym_expression_body_paren] = STATE(227),
    [sym__expression_body] = STATE(227),
    [sym_unary_expression] = STATE(227),
    [sym__binary_expression] = STATE(227),
    [sym_comparison_binary_expression] = STATE(227),
    [sym_mult_binary_expression] = STATE(227),
    [sym_ternary_expression] = STATE(227),
    [sym_add_binary_expression] = STATE(227),
    [sym_string] = STATE(227),
    [sym_var_identifier] = STATE(227),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(227),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(227),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(227),
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
  [22] = {
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
    [sym_children_identifier] = STATE(148),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(141),
    [sym_reference_identifier] = STATE(118),
    [sym_value] = STATE(141),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(141),
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
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(229),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(229),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
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
  [24] = {
    [sym__expression] = STATE(142),
    [sym_expression_body_paren] = STATE(142),
    [sym__expression_body] = STATE(142),
    [sym_unary_expression] = STATE(142),
    [sym__binary_expression] = STATE(142),
    [sym_comparison_binary_expression] = STATE(142),
    [sym_mult_binary_expression] = STATE(142),
    [sym_ternary_expression] = STATE(142),
    [sym_add_binary_expression] = STATE(142),
    [sym_string] = STATE(142),
    [sym_var_identifier] = STATE(142),
    [sym_children_identifier] = STATE(148),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(142),
    [sym_reference_identifier] = STATE(118),
    [sym_value] = STATE(142),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(142),
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
    [sym__expression] = STATE(187),
    [sym_expression_body_paren] = STATE(187),
    [sym__expression_body] = STATE(187),
    [sym_unary_expression] = STATE(187),
    [sym__binary_expression] = STATE(187),
    [sym_comparison_binary_expression] = STATE(187),
    [sym_mult_binary_expression] = STATE(187),
    [sym_ternary_expression] = STATE(187),
    [sym_add_binary_expression] = STATE(187),
    [sym_string] = STATE(187),
    [sym_var_identifier] = STATE(187),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(187),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(187),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(187),
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
    [sym__expression] = STATE(230),
    [sym_expression_body_paren] = STATE(230),
    [sym__expression_body] = STATE(231),
    [sym_unary_expression] = STATE(231),
    [sym__binary_expression] = STATE(231),
    [sym_comparison_binary_expression] = STATE(231),
    [sym_mult_binary_expression] = STATE(231),
    [sym_ternary_expression] = STATE(231),
    [sym_add_binary_expression] = STATE(231),
    [sym_string] = STATE(231),
    [sym_var_identifier] = STATE(231),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(231),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(231),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
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
  [27] = {
    [sym__expression] = STATE(221),
    [sym_expression_body_paren] = STATE(221),
    [sym__expression_body] = STATE(221),
    [sym_unary_expression] = STATE(221),
    [sym__binary_expression] = STATE(221),
    [sym_comparison_binary_expression] = STATE(221),
    [sym_mult_binary_expression] = STATE(221),
    [sym_ternary_expression] = STATE(221),
    [sym_add_binary_expression] = STATE(221),
    [sym_string] = STATE(221),
    [sym_var_identifier] = STATE(221),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(221),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(221),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(221),
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
    [sym_children_identifier] = STATE(148),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(177),
    [sym_reference_identifier] = STATE(118),
    [sym_value] = STATE(177),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(177),
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
  [29] = {
    [sym__expression] = STATE(226),
    [sym_expression_body_paren] = STATE(226),
    [sym__expression_body] = STATE(226),
    [sym_unary_expression] = STATE(226),
    [sym__binary_expression] = STATE(226),
    [sym_comparison_binary_expression] = STATE(226),
    [sym_mult_binary_expression] = STATE(226),
    [sym_ternary_expression] = STATE(226),
    [sym_add_binary_expression] = STATE(226),
    [sym_string] = STATE(226),
    [sym_var_identifier] = STATE(226),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(226),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(226),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
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
  [30] = {
    [sym__expression] = STATE(224),
    [sym_expression_body_paren] = STATE(224),
    [sym__expression_body] = STATE(224),
    [sym_unary_expression] = STATE(224),
    [sym__binary_expression] = STATE(224),
    [sym_comparison_binary_expression] = STATE(224),
    [sym_mult_binary_expression] = STATE(224),
    [sym_ternary_expression] = STATE(224),
    [sym_add_binary_expression] = STATE(224),
    [sym_string] = STATE(224),
    [sym_var_identifier] = STATE(224),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(224),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(224),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(224),
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
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(228),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(228),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
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
  [32] = {
    [sym__expression] = STATE(171),
    [sym_expression_body_paren] = STATE(171),
    [sym__expression_body] = STATE(171),
    [sym_unary_expression] = STATE(171),
    [sym__binary_expression] = STATE(171),
    [sym_comparison_binary_expression] = STATE(171),
    [sym_mult_binary_expression] = STATE(171),
    [sym_ternary_expression] = STATE(171),
    [sym_add_binary_expression] = STATE(171),
    [sym_string] = STATE(171),
    [sym_var_identifier] = STATE(171),
    [sym_children_identifier] = STATE(148),
    [sym_function_identifier] = STATE(289),
    [sym_function_call] = STATE(171),
    [sym_reference_identifier] = STATE(118),
    [sym_value] = STATE(171),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(114),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(171),
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
  [33] = {
    [sym__expression] = STATE(219),
    [sym_expression_body_paren] = STATE(219),
    [sym__expression_body] = STATE(219),
    [sym_unary_expression] = STATE(219),
    [sym__binary_expression] = STATE(219),
    [sym_comparison_binary_expression] = STATE(219),
    [sym_mult_binary_expression] = STATE(219),
    [sym_ternary_expression] = STATE(219),
    [sym_add_binary_expression] = STATE(219),
    [sym_string] = STATE(219),
    [sym_var_identifier] = STATE(219),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(219),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(219),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(219),
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
  [34] = {
    [sym__expression] = STATE(185),
    [sym_expression_body_paren] = STATE(185),
    [sym__expression_body] = STATE(185),
    [sym_unary_expression] = STATE(185),
    [sym__binary_expression] = STATE(185),
    [sym_comparison_binary_expression] = STATE(185),
    [sym_mult_binary_expression] = STATE(185),
    [sym_ternary_expression] = STATE(185),
    [sym_add_binary_expression] = STATE(185),
    [sym_string] = STATE(185),
    [sym_var_identifier] = STATE(185),
    [sym_children_identifier] = STATE(123),
    [sym_function_identifier] = STATE(286),
    [sym_function_call] = STATE(185),
    [sym_reference_identifier] = STATE(103),
    [sym_value] = STATE(185),
    [sym_color] = STATE(101),
    [sym_value_with_units] = STATE(101),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(101),
    [sym_builtin_type_identifier] = STATE(185),
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
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      anon_sym_export,
    ACTIONS(93), 1,
      anon_sym_transitions,
    ACTIONS(96), 1,
      anon_sym_states,
    ACTIONS(99), 1,
      anon_sym_animate,
    ACTIONS(105), 1,
      anon_sym_elseif,
    ACTIONS(108), 1,
      anon_sym_for,
    ACTIONS(111), 1,
      anon_sym_property,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_callback,
    ACTIONS(120), 1,
      sym__identifier,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(42), 1,
      sym_reference_identifier,
    STATE(44), 1,
      sym_children_identifier,
    STATE(61), 1,
      sym_var_identifier,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(345), 1,
      sym_function_identifier,
    ACTIONS(102), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(126), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(129), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(129), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
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
  [102] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_COLON_EQ,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      anon_sym_transitions,
    ACTIONS(140), 1,
      anon_sym_states,
    ACTIONS(142), 1,
      anon_sym_animate,
    ACTIONS(146), 1,
      anon_sym_elseif,
    ACTIONS(148), 1,
      anon_sym_for,
    ACTIONS(150), 1,
      anon_sym_property,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(154), 1,
      anon_sym_callback,
    ACTIONS(156), 1,
      sym__identifier,
    ACTIONS(158), 1,
      anon_sym_AT,
    STATE(42), 1,
      sym_reference_identifier,
    STATE(44), 1,
      sym_children_identifier,
    STATE(61), 1,
      sym_var_identifier,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(345), 1,
      sym_function_identifier,
    ACTIONS(144), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(129), 3,
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
      aux_sym_field_declaration_list_body_repeat1,
  [204] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_COLON_EQ,
    ACTIONS(136), 1,
      anon_sym_export,
    ACTIONS(138), 1,
      anon_sym_transitions,
    ACTIONS(140), 1,
      anon_sym_states,
    ACTIONS(142), 1,
      anon_sym_animate,
    ACTIONS(146), 1,
      anon_sym_elseif,
    ACTIONS(148), 1,
      anon_sym_for,
    ACTIONS(150), 1,
      anon_sym_property,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(154), 1,
      anon_sym_callback,
    ACTIONS(156), 1,
      sym__identifier,
    ACTIONS(158), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_reference_identifier,
    STATE(44), 1,
      sym_children_identifier,
    STATE(61), 1,
      sym_var_identifier,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(345), 1,
      sym_function_identifier,
    ACTIONS(144), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(129), 3,
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
      aux_sym_field_declaration_list_body_repeat1,
  [306] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_EQ_GT,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_var_identifier_repeat1,
    STATE(57), 1,
      sym_index_operator,
    ACTIONS(164), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(166), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(174), 14,
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
    ACTIONS(168), 15,
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
  [372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(180), 35,
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
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(184), 35,
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
  [476] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_var_identifier_repeat1,
    STATE(59), 1,
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
  [534] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_var_identifier_repeat1,
    STATE(57), 1,
      sym_index_operator,
    ACTIONS(166), 10,
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
    ACTIONS(168), 28,
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
  [592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 13,
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
    ACTIONS(192), 28,
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
  [644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_index_operator,
    ACTIONS(166), 11,
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
    ACTIONS(168), 28,
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
  [697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_index_operator,
    ACTIONS(194), 11,
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
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 13,
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
  [799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 13,
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
    ACTIONS(192), 28,
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
  [848] = 3,
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
  [897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(202), 11,
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
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 12,
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
    ACTIONS(211), 28,
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
  [998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 12,
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
    ACTIONS(215), 28,
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
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 12,
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
    ACTIONS(219), 28,
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
  [1094] = 3,
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
  [1142] = 3,
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
  [1190] = 3,
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
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 12,
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
  [1286] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 11,
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
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 11,
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
  [1427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 11,
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
  [1474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(249), 4,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_AT,
    ACTIONS(257), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(253), 27,
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
  [1526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 15,
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
    ACTIONS(261), 18,
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
  [1567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(265), 26,
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
  [1606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(269), 26,
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
  [1645] = 3,
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
  [1684] = 3,
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
  [1723] = 3,
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
  [1762] = 3,
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
  [1801] = 3,
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
  [1840] = 3,
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
  [1879] = 3,
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
  [1918] = 3,
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
  [1957] = 3,
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
  [1996] = 3,
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
  [2035] = 3,
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
  [2074] = 3,
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
  [2113] = 3,
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
  [2152] = 3,
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
  [2191] = 3,
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
  [2230] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      anon_sym_global,
    ACTIONS(336), 1,
      anon_sym_COLON_EQ,
    ACTIONS(339), 1,
      anon_sym_import,
    ACTIONS(342), 1,
      anon_sym_export,
    ACTIONS(345), 1,
      anon_sym_struct,
    ACTIONS(348), 1,
      sym__identifier,
    STATE(179), 1,
      sym_visibility_modifier,
    STATE(122), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(80), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(351), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [2287] = 3,
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
  [2326] = 3,
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
  [2365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(364), 26,
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
  [2404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(368), 26,
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
  [2443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      anon_sym_COLON_EQ,
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
  [2482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 5,
      anon_sym_COLON_EQ,
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
  [2521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_COLON_EQ,
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
  [2560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(384), 26,
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
  [2599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(388), 26,
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
  [2638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(392), 26,
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
    ACTIONS(394), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(396), 26,
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
  [2716] = 12,
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
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_visibility_modifier,
    STATE(122), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(80), 7,
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
  [2773] = 3,
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
  [2812] = 3,
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
  [2851] = 3,
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
  [2890] = 3,
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
  [2922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(217), 19,
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
  [2954] = 3,
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
  [2986] = 3,
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
  [3018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(213), 19,
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
  [3050] = 3,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym_var_identifier_repeat1,
    STATE(184), 1,
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
  [3120] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(102), 1,
      aux_sym_var_identifier_repeat1,
    STATE(182), 1,
      sym_index_operator,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(166), 16,
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
  [3159] = 3,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(426), 18,
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
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(233), 19,
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
  [3252] = 3,
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
  [3283] = 3,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(436), 16,
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
  [3345] = 3,
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
  [3376] = 3,
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
  [3407] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym_var_identifier_repeat1,
    STATE(195), 1,
      sym_index_operator,
    ACTIONS(168), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(166), 11,
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
  [3448] = 3,
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
  [3479] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_PERCENT,
    STATE(104), 1,
      sym_unit_type,
    ACTIONS(456), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(414), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(412), 11,
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
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 18,
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
  [3547] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DOT,
    STATE(134), 1,
      aux_sym_var_identifier_repeat1,
    STATE(193), 1,
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
  [3585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(202), 17,
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
  [3619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym_var_identifier_repeat1,
    STATE(195), 1,
      sym_index_operator,
    ACTIONS(168), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(166), 11,
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
  [3657] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(102), 1,
      aux_sym_var_identifier_repeat1,
    STATE(182), 1,
      sym_index_operator,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(166), 14,
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
  [3697] = 3,
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
  [3726] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(104), 1,
      sym_unit_type,
    ACTIONS(414), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(458), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(412), 14,
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
  [3759] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      anon_sym_COLON_EQ,
    STATE(172), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
    STATE(295), 3,
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
  [3798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    STATE(182), 1,
      sym_index_operator,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(166), 16,
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
  [3831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      anon_sym_COLON_EQ,
    STATE(162), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
    STATE(300), 3,
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
  [3870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 18,
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
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 9,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(467), 12,
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
  [3928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    STATE(183), 1,
      sym_index_operator,
    ACTIONS(196), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(194), 16,
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
  [3961] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      anon_sym_COLON_EQ,
    STATE(79), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
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
  [4000] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(473), 1,
      anon_sym_COLON_EQ,
    STATE(82), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
    STATE(293), 3,
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
  [4039] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(132), 1,
      anon_sym_COLON_EQ,
    ACTIONS(136), 1,
      anon_sym_export,
    STATE(65), 1,
      sym_component_definition,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(129), 3,
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
  [4078] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(132), 1,
      anon_sym_COLON_EQ,
    ACTIONS(136), 1,
      anon_sym_export,
    STATE(70), 1,
      sym_component_definition,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(129), 3,
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
  [4117] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(132), 1,
      anon_sym_COLON_EQ,
    ACTIONS(136), 1,
      anon_sym_export,
    STATE(69), 1,
      sym_component_definition,
    STATE(190), 1,
      sym_visibility_modifier,
    STATE(129), 3,
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
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(174), 14,
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
  [4185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_DOT,
    STATE(134), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(204), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(202), 12,
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
  [4218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 18,
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
  [4247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(190), 13,
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
  [4278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(480), 18,
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
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(484), 18,
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
  [4334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(410), 18,
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
  [4362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(376), 18,
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
  [4390] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(490), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(488), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(486), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [4428] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(490), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(496), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
    ACTIONS(498), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4470] = 3,
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
  [4498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(197), 1,
      sym_index_operator,
    ACTIONS(196), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(194), 11,
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
  [4530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(510), 18,
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
  [4558] = 3,
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
  [4586] = 3,
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
    ACTIONS(198), 13,
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
  [4614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      sym_index_operator,
    ACTIONS(168), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(166), 11,
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
  [4646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(518), 18,
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
  [4674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(522), 18,
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
  [4702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(526), 18,
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
  [4730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(356), 18,
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
  [4758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(277), 18,
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
  [4786] = 3,
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
  [4814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(190), 13,
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
  [4842] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_struct_field_declaration_list,
    STATE(330), 1,
      sym_struct_field_declaration_list_body,
    STATE(274), 3,
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
  [4878] = 3,
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
  [4906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(467), 17,
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
  [4934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
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
  [4962] = 3,
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
    ACTIONS(233), 13,
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
  [4990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(213), 13,
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
  [5018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(329), 18,
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
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(372), 18,
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
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
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
  [5102] = 3,
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
  [5130] = 3,
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
  [5158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
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
  [5186] = 3,
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
  [5214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(217), 13,
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
  [5242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_struct_field_declaration_list,
    STATE(330), 1,
      sym_struct_field_declaration_list_body,
    STATE(279), 3,
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
  [5278] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(502), 1,
      anon_sym_PLUS,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(548), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(490), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(554), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(360), 18,
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
  [5354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(209), 17,
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
  [5382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(380), 18,
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
  [5410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(558), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(556), 10,
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
  [5444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(562), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(560), 10,
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
  [5478] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_subtraction_operator,
    STATE(24), 1,
      sym_comparison_operator,
    ACTIONS(566), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(564), 11,
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
  [5510] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(568), 1,
      anon_sym_LBRACK,
    STATE(352), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(351), 3,
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
  [5544] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(570), 1,
      anon_sym_global,
    ACTIONS(572), 1,
      anon_sym_COLON_EQ,
    ACTIONS(574), 1,
      anon_sym_struct,
    STATE(124), 3,
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
  [5580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(498), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(496), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(209), 12,
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
  [5648] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [5675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(245), 16,
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
  [5702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(241), 16,
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
  [5729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(566), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(564), 14,
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
  [5760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(558), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(556), 13,
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
  [5793] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(488), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 10,
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
  [5830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(562), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(560), 13,
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
  [5863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(237), 16,
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
  [5890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(584), 1,
      anon_sym_COLON_EQ,
    STATE(128), 3,
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
  [5920] = 3,
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
    ACTIONS(237), 11,
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
  [5946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COLON_EQ,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 16,
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
  [5974] = 3,
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
    ACTIONS(241), 11,
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
  [6000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(259), 11,
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
  [6026] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [6052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
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
  [6082] = 3,
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
    ACTIONS(245), 11,
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
  [6108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    STATE(270), 3,
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
  [6138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(283), 3,
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
  [6165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(288), 3,
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
  [6192] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(596), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    STATE(69), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6239] = 4,
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
  [6266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(294), 3,
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
  [6293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(290), 3,
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
  [6320] = 4,
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
  [6347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(313), 3,
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
  [6374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(341), 3,
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
  [6401] = 4,
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
  [6428] = 4,
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
  [6455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(272), 3,
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
  [6482] = 4,
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
  [6509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(271), 3,
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
  [6536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(336), 3,
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
  [6563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(331), 1,
      sym_builtin_type_identifier,
    ACTIONS(600), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(331), 1,
      sym_builtin_type_identifier,
    ACTIONS(600), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(331), 1,
      sym_builtin_type_identifier,
    ACTIONS(606), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COLON_EQ,
    ACTIONS(586), 14,
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
  [6670] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6709] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6747] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6785] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(615), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6823] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6861] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(619), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6899] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(621), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 14,
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
  [6957] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(625), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6995] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(627), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7033] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7071] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    ACTIONS(631), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_PLUS,
    STATE(16), 1,
      sym_comparison_operator,
    STATE(25), 1,
      sym_subtraction_operator,
    ACTIONS(550), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(552), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(637), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7166] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    ACTIONS(641), 1,
      sym__identifier,
    ACTIONS(643), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(235), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(353), 1,
      sym_var_identifier,
    ACTIONS(39), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7199] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(234), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(357), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7232] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_children_identifier,
    STATE(237), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(357), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7265] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(641), 1,
      sym__identifier,
    ACTIONS(643), 1,
      anon_sym_AT,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(236), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(353), 1,
      sym_var_identifier,
    ACTIONS(39), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7298] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    ACTIONS(657), 1,
      anon_sym_STAR,
    ACTIONS(660), 1,
      sym__identifier,
    ACTIONS(663), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(236), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(353), 1,
      sym_var_identifier,
    ACTIONS(666), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7331] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      anon_sym_STAR,
    ACTIONS(674), 1,
      sym__identifier,
    ACTIONS(677), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(237), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(357), 1,
      sym_var_identifier,
    ACTIONS(680), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7364] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(328), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7391] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(346), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7418] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(641), 1,
      sym__identifier,
    ACTIONS(643), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_reference_identifier,
    STATE(123), 1,
      sym_children_identifier,
    STATE(342), 1,
      sym_var_identifier,
    ACTIONS(39), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7445] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(319), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7472] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(337), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(259), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(683), 1,
      anon_sym_DOT,
    STATE(59), 1,
      sym_index_operator,
    STATE(247), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(186), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(683), 1,
      anon_sym_DOT,
    STATE(57), 1,
      sym_index_operator,
    STATE(244), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(166), 4,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7576] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      sym__identifier,
    ACTIONS(649), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_children_identifier,
    STATE(245), 1,
      sym_reference_identifier,
    STATE(333), 1,
      sym_var_identifier,
    ACTIONS(160), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(685), 1,
      anon_sym_DOT,
    STATE(247), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(202), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [7623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(690), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(376), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(694), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__identifier,
    ACTIONS(698), 1,
      anon_sym_AT,
    STATE(154), 1,
      sym_post_identifier,
    STATE(155), 1,
      sym_function_call,
    STATE(289), 1,
      sym_function_identifier,
  [7687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_AT,
    ACTIONS(700), 1,
      sym__identifier,
    STATE(47), 1,
      sym_function_call,
    STATE(48), 1,
      sym_post_identifier,
    STATE(286), 1,
      sym_function_identifier,
  [7706] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(281), 1,
      sym_struct_field_declaration_list,
    STATE(330), 1,
      sym_struct_field_declaration_list_body,
  [7725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_AT,
    ACTIONS(704), 1,
      sym__identifier,
    STATE(120), 1,
      sym_post_identifier,
    STATE(135), 1,
      sym_function_call,
    STATE(286), 1,
      sym_function_identifier,
  [7744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(281), 1,
      sym_struct_field_declaration_list,
    STATE(330), 1,
      sym_struct_field_declaration_list_body,
  [7763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(281), 1,
      sym_struct_field_declaration_list,
    STATE(330), 1,
      sym_struct_field_declaration_list_body,
  [7782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_AT,
    ACTIONS(700), 1,
      sym__identifier,
    STATE(47), 1,
      sym_function_call,
    STATE(48), 1,
      sym_post_identifier,
    STATE(297), 1,
      sym_function_identifier,
  [7801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    ACTIONS(715), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(100), 1,
      sym_formal_parameters,
    STATE(322), 1,
      sym_call_signature,
  [7820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    STATE(344), 1,
      sym_property_expr,
    ACTIONS(721), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [7834] = 4,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(727), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym_string_repeat1,
    ACTIONS(725), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(729), 2,
      anon_sym_in,
      anon_sym_out,
  [7862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7872] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      aux_sym_string_repeat1,
    ACTIONS(737), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7886] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_SQUOTE,
    STATE(264), 1,
      aux_sym_string_repeat2,
    ACTIONS(742), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(745), 2,
      anon_sym_in,
      anon_sym_out,
  [7914] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      aux_sym_string_repeat1,
    ACTIONS(752), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(729), 2,
      anon_sym_in,
      anon_sym_out,
  [7942] = 4,
    ACTIONS(727), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SQUOTE,
    STATE(264), 1,
      aux_sym_string_repeat2,
    ACTIONS(756), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7956] = 4,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
    ACTIONS(727), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_string_repeat2,
    ACTIONS(758), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_import_statement_repeat1,
  [7983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [7996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [8009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [8022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_struct_field_declaration_list,
    STATE(330), 1,
      sym_struct_field_declaration_list_body,
  [8035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(338), 1,
      sym_string,
  [8061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_struct_field_declaration_list,
    STATE(330), 1,
      sym_struct_field_declaration_list_body,
  [8100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [8109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(773), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      sym_string,
  [8133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
  [8146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_formal_parameters_repeat1,
  [8159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_formal_parameters_repeat1,
  [8172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_formal_parameters,
    STATE(106), 1,
      sym_call_signature,
  [8185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
  [8198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [8211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_call_signature,
    STATE(161), 1,
      sym_formal_parameters,
  [8224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
  [8237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_AT,
    ACTIONS(785), 1,
      sym__identifier,
    STATE(258), 1,
      sym_function_identifier,
  [8250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_formal_parameters_repeat1,
  [8263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
  [8276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
  [8289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [8302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(248), 1,
      sym_field_declaration_list,
    STATE(349), 1,
      sym_field_declaration_list_body,
  [8315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_formal_parameters,
    STATE(56), 1,
      sym_call_signature,
  [8328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_formal_parameters_repeat1,
  [8350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [8363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
  [8376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(298), 1,
      sym_field_declaration_list,
    STATE(340), 1,
      sym_field_declaration_list_body,
  [8389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_formal_parameters_repeat1,
  [8411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_formal_parameters_repeat1,
  [8424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [8437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_field_declaration_list,
    STATE(324), 1,
      sym_field_declaration_list_body,
  [8450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_formal_parameters_repeat1,
  [8463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(332), 1,
      sym_string,
  [8476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      aux_sym_import_statement_repeat1,
  [8489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_field_declaration_list,
    STATE(325), 1,
      sym_field_declaration_list_body,
  [8502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__identifier,
    ACTIONS(812), 1,
      anon_sym_children,
  [8528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__identifier,
    ACTIONS(814), 1,
      anon_sym_children,
  [8538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_transitions_list_definition,
  [8556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_states_list_definition,
  [8566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_animate_declaration_list,
  [8576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__identifier,
    ACTIONS(822), 1,
      anon_sym_children,
  [8586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_color_token1,
    ACTIONS(826), 1,
      aux_sym_color_token2,
  [8596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_SEMI,
    ACTIONS(830), 1,
      anon_sym_DASH_GT,
  [8606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_LT,
  [8613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
  [8620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
  [8627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_children,
  [8634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
  [8641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_COLON,
  [8648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SEMI,
  [8655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
  [8662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COLON,
  [8669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SEMI,
  [8676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_COLON,
  [8683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_from,
  [8690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_GT,
  [8697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_COLON_EQ,
  [8704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_COLON_EQ,
  [8711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SEMI,
  [8718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COLON_EQ,
  [8725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
  [8732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [8739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_in,
  [8746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [8753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_SEMI,
  [8760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_EQ_GT,
  [8767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_COLON_EQ,
  [8774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__identifier,
  [8781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_children,
  [8788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [8795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [8802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_GT,
  [8809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_GT,
  [8816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_when,
  [8823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
  [8830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
  [8837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_from,
  [8844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_COLON,
  [8851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_SEMI,
  [8858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
  [8865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 102,
  [SMALL_STATE(37)] = 204,
  [SMALL_STATE(38)] = 306,
  [SMALL_STATE(39)] = 372,
  [SMALL_STATE(40)] = 424,
  [SMALL_STATE(41)] = 476,
  [SMALL_STATE(42)] = 534,
  [SMALL_STATE(43)] = 592,
  [SMALL_STATE(44)] = 644,
  [SMALL_STATE(45)] = 697,
  [SMALL_STATE(46)] = 750,
  [SMALL_STATE(47)] = 799,
  [SMALL_STATE(48)] = 848,
  [SMALL_STATE(49)] = 897,
  [SMALL_STATE(50)] = 950,
  [SMALL_STATE(51)] = 998,
  [SMALL_STATE(52)] = 1046,
  [SMALL_STATE(53)] = 1094,
  [SMALL_STATE(54)] = 1142,
  [SMALL_STATE(55)] = 1190,
  [SMALL_STATE(56)] = 1238,
  [SMALL_STATE(57)] = 1286,
  [SMALL_STATE(58)] = 1333,
  [SMALL_STATE(59)] = 1380,
  [SMALL_STATE(60)] = 1427,
  [SMALL_STATE(61)] = 1474,
  [SMALL_STATE(62)] = 1526,
  [SMALL_STATE(63)] = 1567,
  [SMALL_STATE(64)] = 1606,
  [SMALL_STATE(65)] = 1645,
  [SMALL_STATE(66)] = 1684,
  [SMALL_STATE(67)] = 1723,
  [SMALL_STATE(68)] = 1762,
  [SMALL_STATE(69)] = 1801,
  [SMALL_STATE(70)] = 1840,
  [SMALL_STATE(71)] = 1879,
  [SMALL_STATE(72)] = 1918,
  [SMALL_STATE(73)] = 1957,
  [SMALL_STATE(74)] = 1996,
  [SMALL_STATE(75)] = 2035,
  [SMALL_STATE(76)] = 2074,
  [SMALL_STATE(77)] = 2113,
  [SMALL_STATE(78)] = 2152,
  [SMALL_STATE(79)] = 2191,
  [SMALL_STATE(80)] = 2230,
  [SMALL_STATE(81)] = 2287,
  [SMALL_STATE(82)] = 2326,
  [SMALL_STATE(83)] = 2365,
  [SMALL_STATE(84)] = 2404,
  [SMALL_STATE(85)] = 2443,
  [SMALL_STATE(86)] = 2482,
  [SMALL_STATE(87)] = 2521,
  [SMALL_STATE(88)] = 2560,
  [SMALL_STATE(89)] = 2599,
  [SMALL_STATE(90)] = 2638,
  [SMALL_STATE(91)] = 2677,
  [SMALL_STATE(92)] = 2716,
  [SMALL_STATE(93)] = 2773,
  [SMALL_STATE(94)] = 2812,
  [SMALL_STATE(95)] = 2851,
  [SMALL_STATE(96)] = 2890,
  [SMALL_STATE(97)] = 2922,
  [SMALL_STATE(98)] = 2954,
  [SMALL_STATE(99)] = 2986,
  [SMALL_STATE(100)] = 3018,
  [SMALL_STATE(101)] = 3050,
  [SMALL_STATE(102)] = 3081,
  [SMALL_STATE(103)] = 3120,
  [SMALL_STATE(104)] = 3159,
  [SMALL_STATE(105)] = 3190,
  [SMALL_STATE(106)] = 3221,
  [SMALL_STATE(107)] = 3252,
  [SMALL_STATE(108)] = 3283,
  [SMALL_STATE(109)] = 3314,
  [SMALL_STATE(110)] = 3345,
  [SMALL_STATE(111)] = 3376,
  [SMALL_STATE(112)] = 3407,
  [SMALL_STATE(113)] = 3448,
  [SMALL_STATE(114)] = 3479,
  [SMALL_STATE(115)] = 3515,
  [SMALL_STATE(116)] = 3547,
  [SMALL_STATE(117)] = 3585,
  [SMALL_STATE(118)] = 3619,
  [SMALL_STATE(119)] = 3657,
  [SMALL_STATE(120)] = 3697,
  [SMALL_STATE(121)] = 3726,
  [SMALL_STATE(122)] = 3759,
  [SMALL_STATE(123)] = 3798,
  [SMALL_STATE(124)] = 3831,
  [SMALL_STATE(125)] = 3870,
  [SMALL_STATE(126)] = 3899,
  [SMALL_STATE(127)] = 3928,
  [SMALL_STATE(128)] = 3961,
  [SMALL_STATE(129)] = 4000,
  [SMALL_STATE(130)] = 4039,
  [SMALL_STATE(131)] = 4078,
  [SMALL_STATE(132)] = 4117,
  [SMALL_STATE(133)] = 4156,
  [SMALL_STATE(134)] = 4185,
  [SMALL_STATE(135)] = 4218,
  [SMALL_STATE(136)] = 4247,
  [SMALL_STATE(137)] = 4278,
  [SMALL_STATE(138)] = 4306,
  [SMALL_STATE(139)] = 4334,
  [SMALL_STATE(140)] = 4362,
  [SMALL_STATE(141)] = 4390,
  [SMALL_STATE(142)] = 4428,
  [SMALL_STATE(143)] = 4470,
  [SMALL_STATE(144)] = 4498,
  [SMALL_STATE(145)] = 4530,
  [SMALL_STATE(146)] = 4558,
  [SMALL_STATE(147)] = 4586,
  [SMALL_STATE(148)] = 4614,
  [SMALL_STATE(149)] = 4646,
  [SMALL_STATE(150)] = 4674,
  [SMALL_STATE(151)] = 4702,
  [SMALL_STATE(152)] = 4730,
  [SMALL_STATE(153)] = 4758,
  [SMALL_STATE(154)] = 4786,
  [SMALL_STATE(155)] = 4814,
  [SMALL_STATE(156)] = 4842,
  [SMALL_STATE(157)] = 4878,
  [SMALL_STATE(158)] = 4906,
  [SMALL_STATE(159)] = 4934,
  [SMALL_STATE(160)] = 4962,
  [SMALL_STATE(161)] = 4990,
  [SMALL_STATE(162)] = 5018,
  [SMALL_STATE(163)] = 5046,
  [SMALL_STATE(164)] = 5074,
  [SMALL_STATE(165)] = 5102,
  [SMALL_STATE(166)] = 5130,
  [SMALL_STATE(167)] = 5158,
  [SMALL_STATE(168)] = 5186,
  [SMALL_STATE(169)] = 5214,
  [SMALL_STATE(170)] = 5242,
  [SMALL_STATE(171)] = 5278,
  [SMALL_STATE(172)] = 5326,
  [SMALL_STATE(173)] = 5354,
  [SMALL_STATE(174)] = 5382,
  [SMALL_STATE(175)] = 5410,
  [SMALL_STATE(176)] = 5444,
  [SMALL_STATE(177)] = 5478,
  [SMALL_STATE(178)] = 5510,
  [SMALL_STATE(179)] = 5544,
  [SMALL_STATE(180)] = 5580,
  [SMALL_STATE(181)] = 5621,
  [SMALL_STATE(182)] = 5648,
  [SMALL_STATE(183)] = 5675,
  [SMALL_STATE(184)] = 5702,
  [SMALL_STATE(185)] = 5729,
  [SMALL_STATE(186)] = 5760,
  [SMALL_STATE(187)] = 5793,
  [SMALL_STATE(188)] = 5830,
  [SMALL_STATE(189)] = 5863,
  [SMALL_STATE(190)] = 5890,
  [SMALL_STATE(191)] = 5920,
  [SMALL_STATE(192)] = 5946,
  [SMALL_STATE(193)] = 5974,
  [SMALL_STATE(194)] = 6000,
  [SMALL_STATE(195)] = 6026,
  [SMALL_STATE(196)] = 6052,
  [SMALL_STATE(197)] = 6082,
  [SMALL_STATE(198)] = 6108,
  [SMALL_STATE(199)] = 6138,
  [SMALL_STATE(200)] = 6165,
  [SMALL_STATE(201)] = 6192,
  [SMALL_STATE(202)] = 6239,
  [SMALL_STATE(203)] = 6266,
  [SMALL_STATE(204)] = 6293,
  [SMALL_STATE(205)] = 6320,
  [SMALL_STATE(206)] = 6347,
  [SMALL_STATE(207)] = 6374,
  [SMALL_STATE(208)] = 6401,
  [SMALL_STATE(209)] = 6428,
  [SMALL_STATE(210)] = 6455,
  [SMALL_STATE(211)] = 6482,
  [SMALL_STATE(212)] = 6509,
  [SMALL_STATE(213)] = 6536,
  [SMALL_STATE(214)] = 6563,
  [SMALL_STATE(215)] = 6591,
  [SMALL_STATE(216)] = 6619,
  [SMALL_STATE(217)] = 6647,
  [SMALL_STATE(218)] = 6670,
  [SMALL_STATE(219)] = 6709,
  [SMALL_STATE(220)] = 6747,
  [SMALL_STATE(221)] = 6785,
  [SMALL_STATE(222)] = 6823,
  [SMALL_STATE(223)] = 6861,
  [SMALL_STATE(224)] = 6899,
  [SMALL_STATE(225)] = 6937,
  [SMALL_STATE(226)] = 6957,
  [SMALL_STATE(227)] = 6995,
  [SMALL_STATE(228)] = 7033,
  [SMALL_STATE(229)] = 7071,
  [SMALL_STATE(230)] = 7109,
  [SMALL_STATE(231)] = 7144,
  [SMALL_STATE(232)] = 7166,
  [SMALL_STATE(233)] = 7199,
  [SMALL_STATE(234)] = 7232,
  [SMALL_STATE(235)] = 7265,
  [SMALL_STATE(236)] = 7298,
  [SMALL_STATE(237)] = 7331,
  [SMALL_STATE(238)] = 7364,
  [SMALL_STATE(239)] = 7391,
  [SMALL_STATE(240)] = 7418,
  [SMALL_STATE(241)] = 7445,
  [SMALL_STATE(242)] = 7472,
  [SMALL_STATE(243)] = 7499,
  [SMALL_STATE(244)] = 7526,
  [SMALL_STATE(245)] = 7551,
  [SMALL_STATE(246)] = 7576,
  [SMALL_STATE(247)] = 7603,
  [SMALL_STATE(248)] = 7623,
  [SMALL_STATE(249)] = 7638,
  [SMALL_STATE(250)] = 7653,
  [SMALL_STATE(251)] = 7668,
  [SMALL_STATE(252)] = 7687,
  [SMALL_STATE(253)] = 7706,
  [SMALL_STATE(254)] = 7725,
  [SMALL_STATE(255)] = 7744,
  [SMALL_STATE(256)] = 7763,
  [SMALL_STATE(257)] = 7782,
  [SMALL_STATE(258)] = 7801,
  [SMALL_STATE(259)] = 7820,
  [SMALL_STATE(260)] = 7834,
  [SMALL_STATE(261)] = 7848,
  [SMALL_STATE(262)] = 7862,
  [SMALL_STATE(263)] = 7872,
  [SMALL_STATE(264)] = 7886,
  [SMALL_STATE(265)] = 7900,
  [SMALL_STATE(266)] = 7914,
  [SMALL_STATE(267)] = 7928,
  [SMALL_STATE(268)] = 7942,
  [SMALL_STATE(269)] = 7956,
  [SMALL_STATE(270)] = 7970,
  [SMALL_STATE(271)] = 7983,
  [SMALL_STATE(272)] = 7996,
  [SMALL_STATE(273)] = 8009,
  [SMALL_STATE(274)] = 8022,
  [SMALL_STATE(275)] = 8035,
  [SMALL_STATE(276)] = 8048,
  [SMALL_STATE(277)] = 8061,
  [SMALL_STATE(278)] = 8074,
  [SMALL_STATE(279)] = 8087,
  [SMALL_STATE(280)] = 8100,
  [SMALL_STATE(281)] = 8109,
  [SMALL_STATE(282)] = 8120,
  [SMALL_STATE(283)] = 8133,
  [SMALL_STATE(284)] = 8146,
  [SMALL_STATE(285)] = 8159,
  [SMALL_STATE(286)] = 8172,
  [SMALL_STATE(287)] = 8185,
  [SMALL_STATE(288)] = 8198,
  [SMALL_STATE(289)] = 8211,
  [SMALL_STATE(290)] = 8224,
  [SMALL_STATE(291)] = 8237,
  [SMALL_STATE(292)] = 8250,
  [SMALL_STATE(293)] = 8263,
  [SMALL_STATE(294)] = 8276,
  [SMALL_STATE(295)] = 8289,
  [SMALL_STATE(296)] = 8302,
  [SMALL_STATE(297)] = 8315,
  [SMALL_STATE(298)] = 8328,
  [SMALL_STATE(299)] = 8337,
  [SMALL_STATE(300)] = 8350,
  [SMALL_STATE(301)] = 8363,
  [SMALL_STATE(302)] = 8376,
  [SMALL_STATE(303)] = 8389,
  [SMALL_STATE(304)] = 8398,
  [SMALL_STATE(305)] = 8411,
  [SMALL_STATE(306)] = 8424,
  [SMALL_STATE(307)] = 8437,
  [SMALL_STATE(308)] = 8450,
  [SMALL_STATE(309)] = 8463,
  [SMALL_STATE(310)] = 8476,
  [SMALL_STATE(311)] = 8489,
  [SMALL_STATE(312)] = 8502,
  [SMALL_STATE(313)] = 8510,
  [SMALL_STATE(314)] = 8518,
  [SMALL_STATE(315)] = 8528,
  [SMALL_STATE(316)] = 8538,
  [SMALL_STATE(317)] = 8546,
  [SMALL_STATE(318)] = 8556,
  [SMALL_STATE(319)] = 8566,
  [SMALL_STATE(320)] = 8576,
  [SMALL_STATE(321)] = 8586,
  [SMALL_STATE(322)] = 8596,
  [SMALL_STATE(323)] = 8606,
  [SMALL_STATE(324)] = 8613,
  [SMALL_STATE(325)] = 8620,
  [SMALL_STATE(326)] = 8627,
  [SMALL_STATE(327)] = 8634,
  [SMALL_STATE(328)] = 8641,
  [SMALL_STATE(329)] = 8648,
  [SMALL_STATE(330)] = 8655,
  [SMALL_STATE(331)] = 8662,
  [SMALL_STATE(332)] = 8669,
  [SMALL_STATE(333)] = 8676,
  [SMALL_STATE(334)] = 8683,
  [SMALL_STATE(335)] = 8690,
  [SMALL_STATE(336)] = 8697,
  [SMALL_STATE(337)] = 8704,
  [SMALL_STATE(338)] = 8711,
  [SMALL_STATE(339)] = 8718,
  [SMALL_STATE(340)] = 8725,
  [SMALL_STATE(341)] = 8732,
  [SMALL_STATE(342)] = 8739,
  [SMALL_STATE(343)] = 8746,
  [SMALL_STATE(344)] = 8753,
  [SMALL_STATE(345)] = 8760,
  [SMALL_STATE(346)] = 8767,
  [SMALL_STATE(347)] = 8774,
  [SMALL_STATE(348)] = 8781,
  [SMALL_STATE(349)] = 8788,
  [SMALL_STATE(350)] = 8795,
  [SMALL_STATE(351)] = 8802,
  [SMALL_STATE(352)] = 8809,
  [SMALL_STATE(353)] = 8816,
  [SMALL_STATE(354)] = 8823,
  [SMALL_STATE(355)] = 8830,
  [SMALL_STATE(356)] = 8837,
  [SMALL_STATE(357)] = 8844,
  [SMALL_STATE(358)] = 8851,
  [SMALL_STATE(359)] = 8858,
  [SMALL_STATE(360)] = 8865,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(203),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(217),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(317),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(318),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(241),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(240),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(323),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(45),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(291),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(38),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(320),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(46),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(62),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type_identifier, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operator, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operator, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(257),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 9),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_operator, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_operator, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 11),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 11),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 19),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 16),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 17),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 19),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(254),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(251),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 15),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_binary_expression, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_binary_expression, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 12),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 12),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 16),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 16),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(62),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 2, .production_id = 10),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(127),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(103),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(326),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(125),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 14),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 14), SHIFT_REPEAT(45),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 14), SHIFT_REPEAT(245),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 14), SHIFT_REPEAT(348),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 14), SHIFT_REPEAT(46),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(252),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 20),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 20),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 16),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 16),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 2),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2), SHIFT_REPEAT(233),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(263),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(264),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(246),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(206),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 18),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 13),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [894] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
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
