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
#define STATE_COUNT 353
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 1
#define TOKEN_COUNT 100
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
  anon_sym_LT_EQ_GT = 21,
  anon_sym_if = 22,
  anon_sym_elseif = 23,
  anon_sym_else = 24,
  anon_sym_for = 25,
  anon_sym_property = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_EQ = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_QMARK = 32,
  anon_sym_callback = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_BANG = 35,
  anon_sym_DASH = 36,
  anon_sym_PLUS = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_AMP_AMP = 40,
  anon_sym_PIPE_PIPE = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_LT_EQ = 43,
  anon_sym_PLUS_EQ = 44,
  anon_sym_DASH_EQ = 45,
  anon_sym_STAR_EQ = 46,
  anon_sym_SLASH_EQ = 47,
  anon_sym_DQUOTE = 48,
  anon_sym_SQUOTE = 49,
  sym_unescaped_double_string_fragment = 50,
  sym_unescaped_single_string_fragment = 51,
  sym_escape_sequence = 52,
  sym__identifier = 53,
  anon_sym_DOT = 54,
  anon_sym_AT = 55,
  anon_sym_children = 56,
  anon_sym_parent = 57,
  anon_sym_root = 58,
  anon_sym_this = 59,
  anon_sym_POUND = 60,
  aux_sym_color_token1 = 61,
  aux_sym_color_token2 = 62,
  aux_sym_color_token3 = 63,
  sym_int_number = 64,
  sym_float_number = 65,
  anon_sym_px = 66,
  anon_sym_PERCENT = 67,
  anon_sym_ms = 68,
  anon_sym_black = 69,
  anon_sym_blue = 70,
  anon_sym_ease = 71,
  anon_sym_ease_DASHin = 72,
  anon_sym_ease_in = 73,
  anon_sym_ease_in_out = 74,
  anon_sym_ease_DASHin_DASHout = 75,
  anon_sym_ease_out = 76,
  anon_sym_ease_DASHout = 77,
  anon_sym_end = 78,
  anon_sym_green = 79,
  anon_sym_red = 80,
  anon_sym_start = 81,
  anon_sym_yellow = 82,
  anon_sym_true = 83,
  anon_sym_false = 84,
  anon_sym_transparent = 85,
  anon_sym_angle = 86,
  anon_sym_bool = 87,
  anon_sym_brush = 88,
  anon_sym_duration = 89,
  anon_sym_easing = 90,
  anon_sym_float = 91,
  anon_sym_image = 92,
  anon_sym_int = 93,
  anon_sym_length = 94,
  anon_sym_percent = 95,
  anon_sym_physical_DASHlength = 96,
  anon_sym_physical_length = 97,
  anon_sym_string = 98,
  sym_comment = 99,
  sym_source_file = 100,
  sym__definition = 101,
  sym_global_definition = 102,
  sym_import_statement = 103,
  sym_export_statement = 104,
  sym_struct_definition = 105,
  sym_struct_field_declaration_list = 106,
  sym_struct_field_declaration_list_body = 107,
  sym_component_definition = 108,
  sym_field_declaration_list = 109,
  sym_field_declaration_list_body = 110,
  sym_transitions_definition = 111,
  sym_transitions_list_definition = 112,
  sym_states_definition = 113,
  sym_states_list_definition = 114,
  sym_animate_statement = 115,
  sym_animate_declaration_list = 116,
  sym_callback_event = 117,
  sym_callback_call = 118,
  sym_if_statement_definition = 119,
  sym_for_loop_definition = 120,
  sym_property_definition = 121,
  sym_property_expr = 122,
  sym__propterty_kind = 123,
  sym_property_type_list = 124,
  sym_list_definition = 125,
  sym_list_definition_body = 126,
  sym_variable_definition = 127,
  sym_variable_set_equal = 128,
  sym__expression = 129,
  sym_expression_body_paren = 130,
  sym__expression_body = 131,
  sym_unary_expression = 132,
  sym__binary_expression = 133,
  sym_comparison_binary_expression = 134,
  sym_mult_binary_expression = 135,
  sym_ternary_expression = 136,
  sym_add_binary_expression = 137,
  sym_callback_definition = 138,
  sym_call_signature = 139,
  sym_formal_parameters = 140,
  sym_formal_parameter = 141,
  sym_unary_prec_operator = 142,
  sym_add_prec_operator = 143,
  sym_mult_prec_operator = 144,
  sym_comparison_operator = 145,
  sym_assignment_prec_operator = 146,
  sym_string = 147,
  sym_visibility_modifier = 148,
  sym_post_identifier = 149,
  sym_user_type_identifier = 150,
  sym__type_identifier = 151,
  sym_var_identifier = 152,
  sym_children_identifier = 153,
  sym_index_operator = 154,
  sym_function_identifier = 155,
  sym_function_call = 156,
  sym_reference_identifier = 157,
  sym_value = 158,
  sym_color = 159,
  sym_value_with_units = 160,
  sym_number = 161,
  sym_unit_type = 162,
  sym_language_constant = 163,
  sym_builtin_type_identifier = 164,
  aux_sym_source_file_repeat1 = 165,
  aux_sym_import_statement_repeat1 = 166,
  aux_sym_struct_field_declaration_list_body_repeat1 = 167,
  aux_sym_field_declaration_list_body_repeat1 = 168,
  aux_sym_transitions_list_definition_repeat1 = 169,
  aux_sym_states_list_definition_repeat1 = 170,
  aux_sym_animate_declaration_list_repeat1 = 171,
  aux_sym_list_definition_body_repeat1 = 172,
  aux_sym_formal_parameters_repeat1 = 173,
  aux_sym_string_repeat1 = 174,
  aux_sym_string_repeat2 = 175,
  aux_sym_var_identifier_repeat1 = 176,
  alias_sym_state_identifier = 177,
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
  [anon_sym_LT_EQ_GT] = "<=>",
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
  [aux_sym_color_token3] = "color_token3",
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
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
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
  [aux_sym_color_token3] = aux_sym_color_token3,
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
  [anon_sym_LT_EQ_GT] = {
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
  [aux_sym_color_token3] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '#') ADVANCE(563);
      if (lookahead == '%') ADVANCE(571);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '+') ADVANCE(322);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(306);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(263)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(101);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
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
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(35)
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
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(350);
      if (lookahead == '\r') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == 'x') ADVANCE(259);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '#') ADVANCE(563);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'b') ADVANCE(441);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == 'y') ADVANCE(399);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(571);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(571);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'm') ADVANCE(511);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 34:
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 35:
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(306);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(320);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(306);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 37:
      if (lookahead == '&') ADVANCE(327);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(635);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(635);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(634);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '_') ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == 'g') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == 'c') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(316);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(295);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(296);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 'x') ADVANCE(569);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(592);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(247);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(299);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(616);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(632);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(612);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(624);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(628);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(630);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(574);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(610);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(276);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(572);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(598);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(208);
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
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 244:
      if (lookahead == 'w') ADVANCE(600);
      END_STATE();
    case 245:
      if (lookahead == 'x') ADVANCE(569);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 248:
      if (lookahead == '{') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 249:
      if (lookahead == '|') ADVANCE(328);
      END_STATE();
    case 250:
      if (lookahead == '}') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(564);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(565);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(566);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(636);
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
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == '\\') SKIP(265)
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == 'g') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(552);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(295);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '>') ADVANCE(316);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(316);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(635);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(635);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(296);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(346);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead == '_') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == 'x') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'x') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'x') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_color_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_color_token3);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead == '_') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_physical_length);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_physical_length);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(261);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 266},
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
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30},
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
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
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
  [75] = {.lex_state = 266},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 40},
  [79] = {.lex_state = 40},
  [80] = {.lex_state = 40},
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
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 266},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 32},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 34},
  [110] = {.lex_state = 32},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 34},
  [113] = {.lex_state = 34},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 266},
  [116] = {.lex_state = 266},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 34},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 34},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 34},
  [125] = {.lex_state = 34},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 34},
  [129] = {.lex_state = 32},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 33},
  [137] = {.lex_state = 266},
  [138] = {.lex_state = 266},
  [139] = {.lex_state = 266},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 266},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 34},
  [145] = {.lex_state = 47},
  [146] = {.lex_state = 266},
  [147] = {.lex_state = 48},
  [148] = {.lex_state = 48},
  [149] = {.lex_state = 47},
  [150] = {.lex_state = 34},
  [151] = {.lex_state = 34},
  [152] = {.lex_state = 34},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 34},
  [155] = {.lex_state = 48},
  [156] = {.lex_state = 34},
  [157] = {.lex_state = 34},
  [158] = {.lex_state = 34},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 47},
  [161] = {.lex_state = 266},
  [162] = {.lex_state = 266},
  [163] = {.lex_state = 266},
  [164] = {.lex_state = 266},
  [165] = {.lex_state = 266},
  [166] = {.lex_state = 266},
  [167] = {.lex_state = 266},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 266},
  [171] = {.lex_state = 266},
  [172] = {.lex_state = 32},
  [173] = {.lex_state = 32},
  [174] = {.lex_state = 266},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 266},
  [177] = {.lex_state = 266},
  [178] = {.lex_state = 266},
  [179] = {.lex_state = 266},
  [180] = {.lex_state = 266},
  [181] = {.lex_state = 266},
  [182] = {.lex_state = 32},
  [183] = {.lex_state = 266},
  [184] = {.lex_state = 266},
  [185] = {.lex_state = 47},
  [186] = {.lex_state = 34},
  [187] = {.lex_state = 47},
  [188] = {.lex_state = 34},
  [189] = {.lex_state = 266},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 34},
  [192] = {.lex_state = 49},
  [193] = {.lex_state = 47},
  [194] = {.lex_state = 47},
  [195] = {.lex_state = 47},
  [196] = {.lex_state = 47},
  [197] = {.lex_state = 47},
  [198] = {.lex_state = 47},
  [199] = {.lex_state = 47},
  [200] = {.lex_state = 47},
  [201] = {.lex_state = 47},
  [202] = {.lex_state = 47},
  [203] = {.lex_state = 47},
  [204] = {.lex_state = 50},
  [205] = {.lex_state = 50},
  [206] = {.lex_state = 50},
  [207] = {.lex_state = 266},
  [208] = {.lex_state = 266},
  [209] = {.lex_state = 266},
  [210] = {.lex_state = 266},
  [211] = {.lex_state = 266},
  [212] = {.lex_state = 266},
  [213] = {.lex_state = 266},
  [214] = {.lex_state = 266},
  [215] = {.lex_state = 266},
  [216] = {.lex_state = 266},
  [217] = {.lex_state = 266},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 47},
  [220] = {.lex_state = 266},
  [221] = {.lex_state = 266},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 34},
  [225] = {.lex_state = 34},
  [226] = {.lex_state = 34},
  [227] = {.lex_state = 34},
  [228] = {.lex_state = 30},
  [229] = {.lex_state = 34},
  [230] = {.lex_state = 30},
  [231] = {.lex_state = 34},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 34},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 34},
  [237] = {.lex_state = 34},
  [238] = {.lex_state = 30},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 30},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 40},
  [250] = {.lex_state = 46},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 30},
  [253] = {.lex_state = 46},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 38},
  [257] = {.lex_state = 38},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 31},
  [263] = {.lex_state = 40},
  [264] = {.lex_state = 31},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 31},
  [267] = {.lex_state = 38},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 40},
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
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 46},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 51},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 51},
  [312] = {.lex_state = 40},
  [313] = {.lex_state = 51},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 46},
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
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
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
    [sym_source_file] = STATE(350),
    [sym__definition] = STATE(94),
    [sym_global_definition] = STATE(94),
    [sym_import_statement] = STATE(94),
    [sym_export_statement] = STATE(94),
    [sym_struct_definition] = STATE(94),
    [sym_component_definition] = STATE(94),
    [sym_visibility_modifier] = STATE(175),
    [sym_user_type_identifier] = STATE(260),
    [sym__type_identifier] = STATE(260),
    [sym_builtin_type_identifier] = STATE(260),
    [aux_sym_source_file_repeat1] = STATE(94),
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
    [sym_field_declaration_list] = STATE(87),
    [sym_field_declaration_list_body] = STATE(317),
    [sym__expression] = STATE(189),
    [sym_expression_body_paren] = STATE(189),
    [sym__expression_body] = STATE(189),
    [sym_unary_expression] = STATE(189),
    [sym__binary_expression] = STATE(189),
    [sym_comparison_binary_expression] = STATE(189),
    [sym_mult_binary_expression] = STATE(189),
    [sym_ternary_expression] = STATE(189),
    [sym_add_binary_expression] = STATE(189),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(189),
    [sym_var_identifier] = STATE(189),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(189),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(189),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(189),
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
    [sym_list_definition] = STATE(349),
    [sym_list_definition_body] = STATE(348),
    [sym__expression] = STATE(216),
    [sym_expression_body_paren] = STATE(216),
    [sym__expression_body] = STATE(216),
    [sym_unary_expression] = STATE(216),
    [sym__binary_expression] = STATE(216),
    [sym_comparison_binary_expression] = STATE(216),
    [sym_mult_binary_expression] = STATE(216),
    [sym_ternary_expression] = STATE(216),
    [sym_add_binary_expression] = STATE(216),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(216),
    [sym_var_identifier] = STATE(216),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(216),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(216),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(216),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(310),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(283),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(310),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(310),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(294),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(310),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(275),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(310),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(310),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(207),
    [sym_expression_body_paren] = STATE(207),
    [sym__expression_body] = STATE(207),
    [sym_unary_expression] = STATE(207),
    [sym__binary_expression] = STATE(207),
    [sym_comparison_binary_expression] = STATE(207),
    [sym_mult_binary_expression] = STATE(207),
    [sym_ternary_expression] = STATE(207),
    [sym_add_binary_expression] = STATE(207),
    [sym_formal_parameter] = STATE(310),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(207),
    [sym_var_identifier] = STATE(207),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(207),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(207),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(207),
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
    [sym__expression] = STATE(215),
    [sym_expression_body_paren] = STATE(215),
    [sym__expression_body] = STATE(215),
    [sym_unary_expression] = STATE(215),
    [sym__binary_expression] = STATE(215),
    [sym_comparison_binary_expression] = STATE(215),
    [sym_mult_binary_expression] = STATE(215),
    [sym_ternary_expression] = STATE(215),
    [sym_add_binary_expression] = STATE(215),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(215),
    [sym_var_identifier] = STATE(215),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(215),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(215),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
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
  [15] = {
    [sym__expression] = STATE(146),
    [sym_expression_body_paren] = STATE(146),
    [sym__expression_body] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym__binary_expression] = STATE(146),
    [sym_comparison_binary_expression] = STATE(146),
    [sym_mult_binary_expression] = STATE(146),
    [sym_ternary_expression] = STATE(146),
    [sym_add_binary_expression] = STATE(146),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(146),
    [sym_var_identifier] = STATE(146),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(146),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(146),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(146),
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
  [16] = {
    [sym__expression] = STATE(125),
    [sym_expression_body_paren] = STATE(125),
    [sym__expression_body] = STATE(125),
    [sym_unary_expression] = STATE(125),
    [sym__binary_expression] = STATE(125),
    [sym_comparison_binary_expression] = STATE(125),
    [sym_mult_binary_expression] = STATE(125),
    [sym_ternary_expression] = STATE(125),
    [sym_add_binary_expression] = STATE(125),
    [sym_unary_prec_operator] = STATE(28),
    [sym_string] = STATE(125),
    [sym_var_identifier] = STATE(125),
    [sym_children_identifier] = STATE(152),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(125),
    [sym_reference_identifier] = STATE(117),
    [sym_value] = STATE(125),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(125),
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
  [17] = {
    [sym__expression] = STATE(220),
    [sym_expression_body_paren] = STATE(220),
    [sym__expression_body] = STATE(221),
    [sym_unary_expression] = STATE(221),
    [sym__binary_expression] = STATE(221),
    [sym_comparison_binary_expression] = STATE(221),
    [sym_mult_binary_expression] = STATE(221),
    [sym_ternary_expression] = STATE(221),
    [sym_add_binary_expression] = STATE(221),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(221),
    [sym_var_identifier] = STATE(221),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(221),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(221),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(221),
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
    [sym__expression] = STATE(128),
    [sym_expression_body_paren] = STATE(128),
    [sym__expression_body] = STATE(128),
    [sym_unary_expression] = STATE(128),
    [sym__binary_expression] = STATE(128),
    [sym_comparison_binary_expression] = STATE(128),
    [sym_mult_binary_expression] = STATE(128),
    [sym_ternary_expression] = STATE(128),
    [sym_add_binary_expression] = STATE(128),
    [sym_unary_prec_operator] = STATE(28),
    [sym_string] = STATE(128),
    [sym_var_identifier] = STATE(128),
    [sym_children_identifier] = STATE(152),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(128),
    [sym_reference_identifier] = STATE(117),
    [sym_value] = STATE(128),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(108),
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
  [19] = {
    [sym__expression] = STATE(139),
    [sym_expression_body_paren] = STATE(139),
    [sym__expression_body] = STATE(139),
    [sym_unary_expression] = STATE(139),
    [sym__binary_expression] = STATE(139),
    [sym_comparison_binary_expression] = STATE(139),
    [sym_mult_binary_expression] = STATE(139),
    [sym_ternary_expression] = STATE(139),
    [sym_add_binary_expression] = STATE(139),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(139),
    [sym_var_identifier] = STATE(139),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(139),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(139),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
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
  [20] = {
    [sym__expression] = STATE(132),
    [sym_expression_body_paren] = STATE(132),
    [sym__expression_body] = STATE(132),
    [sym_unary_expression] = STATE(132),
    [sym__binary_expression] = STATE(132),
    [sym_comparison_binary_expression] = STATE(132),
    [sym_mult_binary_expression] = STATE(132),
    [sym_ternary_expression] = STATE(132),
    [sym_add_binary_expression] = STATE(132),
    [sym_unary_prec_operator] = STATE(28),
    [sym_string] = STATE(132),
    [sym_var_identifier] = STATE(132),
    [sym_children_identifier] = STATE(152),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(132),
    [sym_reference_identifier] = STATE(117),
    [sym_value] = STATE(132),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(108),
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
  [21] = {
    [sym__expression] = STATE(130),
    [sym_expression_body_paren] = STATE(130),
    [sym__expression_body] = STATE(130),
    [sym_unary_expression] = STATE(130),
    [sym__binary_expression] = STATE(130),
    [sym_comparison_binary_expression] = STATE(130),
    [sym_mult_binary_expression] = STATE(130),
    [sym_ternary_expression] = STATE(130),
    [sym_add_binary_expression] = STATE(130),
    [sym_unary_prec_operator] = STATE(28),
    [sym_string] = STATE(130),
    [sym_var_identifier] = STATE(130),
    [sym_children_identifier] = STATE(152),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(130),
    [sym_reference_identifier] = STATE(117),
    [sym_value] = STATE(130),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(108),
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
  [22] = {
    [sym__expression] = STATE(212),
    [sym_expression_body_paren] = STATE(212),
    [sym__expression_body] = STATE(212),
    [sym_unary_expression] = STATE(212),
    [sym__binary_expression] = STATE(212),
    [sym_comparison_binary_expression] = STATE(212),
    [sym_mult_binary_expression] = STATE(212),
    [sym_ternary_expression] = STATE(212),
    [sym_add_binary_expression] = STATE(212),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(212),
    [sym_var_identifier] = STATE(212),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(212),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(212),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(212),
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
  [23] = {
    [sym__expression] = STATE(209),
    [sym_expression_body_paren] = STATE(209),
    [sym__expression_body] = STATE(209),
    [sym_unary_expression] = STATE(209),
    [sym__binary_expression] = STATE(209),
    [sym_comparison_binary_expression] = STATE(209),
    [sym_mult_binary_expression] = STATE(209),
    [sym_ternary_expression] = STATE(209),
    [sym_add_binary_expression] = STATE(209),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(209),
    [sym_var_identifier] = STATE(209),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(209),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(209),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
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
  [24] = {
    [sym__expression] = STATE(213),
    [sym_expression_body_paren] = STATE(213),
    [sym__expression_body] = STATE(213),
    [sym_unary_expression] = STATE(213),
    [sym__binary_expression] = STATE(213),
    [sym_comparison_binary_expression] = STATE(213),
    [sym_mult_binary_expression] = STATE(213),
    [sym_ternary_expression] = STATE(213),
    [sym_add_binary_expression] = STATE(213),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(213),
    [sym_var_identifier] = STATE(213),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(213),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(213),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
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
  [25] = {
    [sym__expression] = STATE(210),
    [sym_expression_body_paren] = STATE(210),
    [sym__expression_body] = STATE(210),
    [sym_unary_expression] = STATE(210),
    [sym__binary_expression] = STATE(210),
    [sym_comparison_binary_expression] = STATE(210),
    [sym_mult_binary_expression] = STATE(210),
    [sym_ternary_expression] = STATE(210),
    [sym_add_binary_expression] = STATE(210),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(210),
    [sym_var_identifier] = STATE(210),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(210),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(210),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
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
  [26] = {
    [sym__expression] = STATE(141),
    [sym_expression_body_paren] = STATE(141),
    [sym__expression_body] = STATE(141),
    [sym_unary_expression] = STATE(141),
    [sym__binary_expression] = STATE(141),
    [sym_comparison_binary_expression] = STATE(141),
    [sym_mult_binary_expression] = STATE(141),
    [sym_ternary_expression] = STATE(141),
    [sym_add_binary_expression] = STATE(141),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(141),
    [sym_var_identifier] = STATE(141),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(141),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(141),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(141),
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
    [sym__expression] = STATE(137),
    [sym_expression_body_paren] = STATE(137),
    [sym__expression_body] = STATE(137),
    [sym_unary_expression] = STATE(137),
    [sym__binary_expression] = STATE(137),
    [sym_comparison_binary_expression] = STATE(137),
    [sym_mult_binary_expression] = STATE(137),
    [sym_ternary_expression] = STATE(137),
    [sym_add_binary_expression] = STATE(137),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(137),
    [sym_var_identifier] = STATE(137),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(137),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(137),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(137),
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
    [sym__expression] = STATE(124),
    [sym_expression_body_paren] = STATE(124),
    [sym__expression_body] = STATE(124),
    [sym_unary_expression] = STATE(124),
    [sym__binary_expression] = STATE(124),
    [sym_comparison_binary_expression] = STATE(124),
    [sym_mult_binary_expression] = STATE(124),
    [sym_ternary_expression] = STATE(124),
    [sym_add_binary_expression] = STATE(124),
    [sym_unary_prec_operator] = STATE(28),
    [sym_string] = STATE(124),
    [sym_var_identifier] = STATE(124),
    [sym_children_identifier] = STATE(152),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(124),
    [sym_reference_identifier] = STATE(117),
    [sym_value] = STATE(124),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(124),
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
    [sym__expression] = STATE(138),
    [sym_expression_body_paren] = STATE(138),
    [sym__expression_body] = STATE(138),
    [sym_unary_expression] = STATE(138),
    [sym__binary_expression] = STATE(138),
    [sym_comparison_binary_expression] = STATE(138),
    [sym_mult_binary_expression] = STATE(138),
    [sym_ternary_expression] = STATE(138),
    [sym_add_binary_expression] = STATE(138),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(138),
    [sym_var_identifier] = STATE(138),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(138),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(138),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(138),
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
  [30] = {
    [sym__expression] = STATE(126),
    [sym_expression_body_paren] = STATE(126),
    [sym__expression_body] = STATE(126),
    [sym_unary_expression] = STATE(126),
    [sym__binary_expression] = STATE(126),
    [sym_comparison_binary_expression] = STATE(126),
    [sym_mult_binary_expression] = STATE(126),
    [sym_ternary_expression] = STATE(126),
    [sym_add_binary_expression] = STATE(126),
    [sym_unary_prec_operator] = STATE(28),
    [sym_string] = STATE(126),
    [sym_var_identifier] = STATE(126),
    [sym_children_identifier] = STATE(152),
    [sym_function_identifier] = STATE(278),
    [sym_function_call] = STATE(126),
    [sym_reference_identifier] = STATE(117),
    [sym_value] = STATE(126),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(121),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(126),
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
    [sym__expression] = STATE(217),
    [sym_expression_body_paren] = STATE(217),
    [sym__expression_body] = STATE(217),
    [sym_unary_expression] = STATE(217),
    [sym__binary_expression] = STATE(217),
    [sym_comparison_binary_expression] = STATE(217),
    [sym_mult_binary_expression] = STATE(217),
    [sym_ternary_expression] = STATE(217),
    [sym_add_binary_expression] = STATE(217),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(217),
    [sym_var_identifier] = STATE(217),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(217),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(217),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(217),
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
  [32] = {
    [sym__expression] = STATE(211),
    [sym_expression_body_paren] = STATE(211),
    [sym__expression_body] = STATE(211),
    [sym_unary_expression] = STATE(211),
    [sym__binary_expression] = STATE(211),
    [sym_comparison_binary_expression] = STATE(211),
    [sym_mult_binary_expression] = STATE(211),
    [sym_ternary_expression] = STATE(211),
    [sym_add_binary_expression] = STATE(211),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(211),
    [sym_var_identifier] = STATE(211),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(211),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(211),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
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
  [33] = {
    [sym__expression] = STATE(214),
    [sym_expression_body_paren] = STATE(214),
    [sym__expression_body] = STATE(214),
    [sym_unary_expression] = STATE(214),
    [sym__binary_expression] = STATE(214),
    [sym_comparison_binary_expression] = STATE(214),
    [sym_mult_binary_expression] = STATE(214),
    [sym_ternary_expression] = STATE(214),
    [sym_add_binary_expression] = STATE(214),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(214),
    [sym_var_identifier] = STATE(214),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(214),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(214),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
    [sym_builtin_type_identifier] = STATE(214),
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
    [sym__expression] = STATE(208),
    [sym_expression_body_paren] = STATE(208),
    [sym__expression_body] = STATE(208),
    [sym_unary_expression] = STATE(208),
    [sym__binary_expression] = STATE(208),
    [sym_comparison_binary_expression] = STATE(208),
    [sym_mult_binary_expression] = STATE(208),
    [sym_ternary_expression] = STATE(208),
    [sym_add_binary_expression] = STATE(208),
    [sym_unary_prec_operator] = STATE(19),
    [sym_string] = STATE(208),
    [sym_var_identifier] = STATE(208),
    [sym_children_identifier] = STATE(135),
    [sym_function_identifier] = STATE(293),
    [sym_function_call] = STATE(208),
    [sym_reference_identifier] = STATE(110),
    [sym_value] = STATE(208),
    [sym_color] = STATE(108),
    [sym_value_with_units] = STATE(108),
    [sym_number] = STATE(134),
    [sym_language_constant] = STATE(108),
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
    STATE(46), 1,
      sym_children_identifier,
    STATE(50), 1,
      sym_reference_identifier,
    STATE(64), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(319), 1,
      sym_function_identifier,
    ACTIONS(97), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(121), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(258), 3,
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
    STATE(46), 1,
      sym_children_identifier,
    STATE(50), 1,
      sym_reference_identifier,
    STATE(64), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(319), 1,
      sym_function_identifier,
    ACTIONS(137), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(258), 3,
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
    STATE(46), 1,
      sym_children_identifier,
    STATE(50), 1,
      sym_reference_identifier,
    STATE(64), 1,
      sym_var_identifier,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(319), 1,
      sym_function_identifier,
    ACTIONS(137), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(258), 3,
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
  [401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 9,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      sym_float_number,
    ACTIONS(167), 35,
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
  [453] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_EQ_GT,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_var_identifier_repeat1,
    STATE(56), 1,
      sym_index_operator,
    ACTIONS(169), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(171), 8,
      anon_sym_RBRACE,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(173), 29,
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
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 14,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_index_operator,
    ACTIONS(189), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
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
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_index_operator,
    ACTIONS(171), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(173), 28,
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
  [782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 14,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 14,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
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
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 14,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [932] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_var_identifier_repeat1,
    STATE(56), 1,
      sym_index_operator,
    ACTIONS(171), 10,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(173), 27,
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
  [989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_index_operator,
    STATE(57), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(201), 10,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
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
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 13,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(207), 28,
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
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
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
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
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
  [1191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
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
  [1239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 12,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
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
  [1287] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(197), 11,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [1339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 12,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 12,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_AT,
    ACTIONS(230), 27,
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
  [1433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 12,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [1480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 12,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [1527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 12,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [1574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 12,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
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
  [1621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_LT_EQ_GT,
    STATE(34), 1,
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
    ACTIONS(250), 27,
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
  [1675] = 3,
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
  [1713] = 3,
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
  [1751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(268), 26,
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
  [1789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(272), 26,
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
  [1827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(276), 26,
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
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(280), 26,
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
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(284), 26,
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
  [1941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(288), 26,
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
  [1979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(292), 26,
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
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(296), 26,
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
  [2055] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_global,
    ACTIONS(303), 1,
      anon_sym_import,
    ACTIONS(306), 1,
      anon_sym_export,
    ACTIONS(309), 1,
      anon_sym_struct,
    ACTIONS(312), 1,
      sym__identifier,
    STATE(175), 1,
      sym_visibility_modifier,
    STATE(260), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(75), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(315), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [2109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(320), 26,
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
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(324), 26,
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
  [2185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(328), 26,
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
  [2223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(332), 26,
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
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(336), 26,
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
  [2299] = 3,
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
  [2337] = 3,
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
  [2375] = 3,
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
  [2413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
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
  [2451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
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
  [2489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 4,
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
  [2527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 4,
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
  [2565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 4,
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
  [2603] = 3,
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
  [2641] = 3,
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
  [2679] = 3,
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
  [2717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 4,
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
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 4,
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
  [2793] = 11,
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
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_visibility_modifier,
    STATE(260), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(75), 7,
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
  [2847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 4,
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
  [2885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 4,
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
  [2923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
    ACTIONS(236), 19,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [2956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
    ACTIONS(224), 19,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [2989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
    ACTIONS(244), 19,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [3022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
    ACTIONS(228), 19,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
    ACTIONS(232), 19,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
    ACTIONS(240), 19,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_when,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [3120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 8,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(400), 16,
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
  [3152] = 3,
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
  [3183] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOT,
    STATE(118), 1,
      aux_sym_var_identifier_repeat1,
    STATE(182), 1,
      sym_index_operator,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 16,
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
  [3222] = 3,
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
  [3253] = 3,
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
  [3284] = 3,
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
  [3315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(424), 16,
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
  [3346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOT,
    STATE(105), 1,
      aux_sym_var_identifier_repeat1,
    STATE(173), 1,
      sym_index_operator,
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(171), 16,
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
  [3385] = 3,
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
  [3416] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      anon_sym_DOT,
    STATE(120), 1,
      aux_sym_var_identifier_repeat1,
    STATE(191), 1,
      sym_index_operator,
    ACTIONS(173), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(171), 11,
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
  [3457] = 3,
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
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3488] = 3,
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
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3519] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOT,
    STATE(105), 1,
      aux_sym_var_identifier_repeat1,
    STATE(173), 1,
      sym_index_operator,
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(171), 14,
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
  [3559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [3589] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      anon_sym_DOT,
    STATE(120), 1,
      aux_sym_var_identifier_repeat1,
    STATE(191), 1,
      sym_index_operator,
    ACTIONS(173), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(171), 11,
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
  [3627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DOT,
    STATE(118), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(199), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 17,
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
  [3661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
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
  [3693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_var_identifier_repeat1,
    STATE(190), 1,
      sym_index_operator,
    ACTIONS(203), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(201), 11,
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
  [3731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_PERCENT,
    STATE(106), 1,
      sym_unit_type,
    ACTIONS(451), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(422), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(420), 11,
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
  [3767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
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
  [3798] = 3,
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
  [3827] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_add_prec_operator,
    STATE(18), 1,
      sym_comparison_operator,
    STATE(30), 1,
      sym_mult_prec_operator,
    ACTIONS(457), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(455), 10,
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
  [3864] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_QMARK,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      sym_add_prec_operator,
    STATE(18), 1,
      sym_comparison_operator,
    STATE(30), 1,
      sym_mult_prec_operator,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(463), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(461), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
  [3905] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_add_prec_operator,
    STATE(18), 1,
      sym_comparison_operator,
    STATE(30), 1,
      sym_mult_prec_operator,
    ACTIONS(471), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(469), 10,
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
  [3942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(199), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(197), 12,
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
  [3975] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_QMARK,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      sym_add_prec_operator,
    STATE(18), 1,
      sym_comparison_operator,
    STATE(30), 1,
      sym_mult_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(476), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AT,
    ACTIONS(478), 6,
      anon_sym_LT,
      anon_sym_GT,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4018] = 3,
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
  [4047] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_QMARK,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym_add_prec_operator,
    STATE(18), 1,
      sym_comparison_operator,
    STATE(30), 1,
      sym_mult_prec_operator,
    ACTIONS(480), 2,
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
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(490), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 18,
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
  [4125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_add_prec_operator,
    STATE(18), 1,
      sym_comparison_operator,
    STATE(30), 1,
      sym_mult_prec_operator,
    ACTIONS(494), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(492), 11,
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
  [4160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    STATE(168), 1,
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
  [4193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(106), 1,
      sym_unit_type,
    ACTIONS(422), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(453), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(420), 14,
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
  [4226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_index_operator,
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(171), 16,
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
  [4259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 9,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(496), 12,
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
  [4288] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(471), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(469), 13,
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
  [4324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(463), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(461), 10,
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
  [4364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(457), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(455), 13,
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
  [4400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(205), 17,
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
  [4428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(494), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(492), 14,
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
  [4462] = 3,
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
  [4490] = 3,
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
    ACTIONS(228), 13,
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
  [4518] = 3,
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
  [4546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(322), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(341), 3,
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
  [4580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(478), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(476), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4622] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_export,
    STATE(77), 1,
      sym_component_definition,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(258), 3,
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
  [4658] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_export,
    STATE(69), 1,
      sym_component_definition,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(258), 3,
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
  [4694] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_struct_field_declaration_list,
    STATE(329), 1,
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
  [4730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
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
  [4762] = 3,
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
  [4790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_index_operator,
    ACTIONS(173), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(171), 11,
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
  [4822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(496), 17,
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
  [4850] = 3,
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
    ACTIONS(197), 13,
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
  [4878] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_export,
    STATE(82), 1,
      sym_component_definition,
    STATE(200), 1,
      sym_visibility_modifier,
    STATE(258), 3,
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
  [4914] = 3,
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
  [4942] = 3,
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
  [4970] = 3,
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
  [4998] = 3,
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
  [5026] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_struct_field_declaration_list,
    STATE(329), 1,
      sym_struct_field_declaration_list_body,
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
  [5062] = 3,
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
  [5089] = 3,
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
  [5116] = 3,
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
  [5143] = 3,
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
  [5170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 18,
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
  [5197] = 3,
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
  [5224] = 3,
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
  [5251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(209), 16,
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
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(205), 12,
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
  [5305] = 3,
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
  [5332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 18,
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
  [5359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(217), 16,
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
  [5386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 16,
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
  [5413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 18,
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
  [5440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(534), 1,
      anon_sym_global,
    ACTIONS(536), 1,
      anon_sym_struct,
    STATE(261), 3,
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
  [5473] = 3,
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
  [5500] = 3,
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
  [5527] = 3,
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
  [5554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 18,
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
  [5581] = 3,
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
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 18,
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
  [5635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(213), 16,
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
  [5662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
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
  [5689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(560), 18,
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
  [5716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    STATE(289), 3,
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
  [5746] = 3,
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
    ACTIONS(209), 11,
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
  [5772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
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
  [5802] = 3,
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
    ACTIONS(217), 11,
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
  [5828] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(566), 1,
      anon_sym_COLON,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    STATE(77), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5876] = 3,
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
    ACTIONS(213), 11,
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
  [5902] = 3,
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
    ACTIONS(201), 11,
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
  [5928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(568), 16,
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
  [5953] = 4,
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
  [5980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(339), 3,
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
  [6007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(296), 3,
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
  [6034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(280), 3,
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
  [6061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(346), 3,
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
  [6088] = 4,
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
  [6115] = 4,
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
  [6142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
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
  [6169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(351), 3,
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
  [6196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
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
  [6223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__identifier,
    STATE(338), 3,
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
  [6250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(327), 1,
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
  [6278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(327), 1,
      sym_builtin_type_identifier,
    ACTIONS(579), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(327), 1,
      sym_builtin_type_identifier,
    ACTIONS(579), 13,
      anon_sym_angle,
      anon_sym_bool,
      anon_sym_brush,
      anon_sym_duration,
      anon_sym_easing,
      anon_sym_float,
      anon_sym_image,
      anon_sym_int,
      anon_sym_length,
      anon_sym_percent,
      anon_sym_physical_DASHlength,
      anon_sym_physical_length,
      anon_sym_string,
  [6334] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6374] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(585), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6413] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(587), 1,
      anon_sym_COLON,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6452] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6491] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(591), 1,
      anon_sym_COLON,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6530] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6569] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(595), 1,
      anon_sym_COLON,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6608] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6647] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(599), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6686] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6725] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 14,
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
  [6784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 14,
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
  [6804] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_comparison_operator,
    STATE(27), 1,
      sym_mult_prec_operator,
    STATE(29), 1,
      sym_add_prec_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(611), 8,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6862] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      sym__identifier,
    ACTIONS(617), 1,
      anon_sym_AT,
    STATE(110), 1,
      sym_reference_identifier,
    STATE(135), 1,
      sym_children_identifier,
    STATE(227), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6895] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(224), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(331), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6928] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_children_identifier,
    STATE(225), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(331), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6961] = 10,
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
    STATE(225), 1,
      aux_sym_struct_field_declaration_list_body_repeat1,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(331), 1,
      sym_var_identifier,
    ACTIONS(638), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [6994] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(615), 1,
      sym__identifier,
    ACTIONS(617), 1,
      anon_sym_AT,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_reference_identifier,
    STATE(135), 1,
      sym_children_identifier,
    STATE(222), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7027] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    ACTIONS(645), 1,
      anon_sym_STAR,
    ACTIONS(648), 1,
      sym__identifier,
    ACTIONS(651), 1,
      anon_sym_AT,
    STATE(110), 1,
      sym_reference_identifier,
    STATE(135), 1,
      sym_children_identifier,
    STATE(227), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(326), 1,
      sym_var_identifier,
    ACTIONS(654), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7060] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(657), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_index_operator,
    STATE(230), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(171), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
  [7086] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    ACTIONS(659), 1,
      anon_sym_LT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(246), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7116] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(657), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_index_operator,
    STATE(238), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(201), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
  [7142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(336), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7169] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(308), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(345), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(318), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7250] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(252), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7277] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(315), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7304] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_children_identifier,
    STATE(228), 1,
      sym_reference_identifier,
    STATE(352), 1,
      sym_var_identifier,
    ACTIONS(153), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(661), 1,
      anon_sym_DOT,
    STATE(238), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(197), 6,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
  [7352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(615), 1,
      sym__identifier,
    ACTIONS(617), 1,
      anon_sym_AT,
    STATE(110), 1,
      sym_reference_identifier,
    STATE(135), 1,
      sym_children_identifier,
    STATE(337), 1,
      sym_var_identifier,
    ACTIONS(37), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
  [7392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(666), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(340), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(670), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [7437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(284), 1,
      sym_struct_field_declaration_list,
    STATE(329), 1,
      sym_struct_field_declaration_list_body,
  [7456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(284), 1,
      sym_struct_field_declaration_list,
    STATE(329), 1,
      sym_struct_field_declaration_list_body,
  [7475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    STATE(328), 1,
      sym_property_expr,
    ACTIONS(681), 3,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
  [7490] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym__identifier,
    ACTIONS(685), 1,
      anon_sym_AT,
    STATE(154), 1,
      sym_post_identifier,
    STATE(156), 1,
      sym_function_call,
    STATE(278), 1,
      sym_function_identifier,
  [7509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_list_definition_body_repeat1,
    STATE(284), 1,
      sym_struct_field_declaration_list,
    STATE(329), 1,
      sym_struct_field_declaration_list_body,
  [7528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(693), 1,
      anon_sym_DASH_GT,
    STATE(98), 1,
      sym_formal_parameters,
    STATE(312), 1,
      sym_call_signature,
  [7547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_AT,
    ACTIONS(695), 1,
      sym__identifier,
    STATE(48), 1,
      sym_post_identifier,
    STATE(49), 1,
      sym_function_call,
    STATE(293), 1,
      sym_function_identifier,
  [7566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_AT,
    ACTIONS(697), 1,
      sym__identifier,
    STATE(123), 1,
      sym_function_call,
    STATE(131), 1,
      sym_post_identifier,
    STATE(293), 1,
      sym_function_identifier,
  [7585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    STATE(333), 1,
      sym_property_expr,
    ACTIONS(681), 3,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ,
  [7600] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_AT,
    ACTIONS(695), 1,
      sym__identifier,
    STATE(48), 1,
      sym_post_identifier,
    STATE(49), 1,
      sym_function_call,
    STATE(292), 1,
      sym_function_identifier,
  [7619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(701), 2,
      anon_sym_in,
      anon_sym_out,
  [7633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(705), 2,
      anon_sym_in,
      anon_sym_out,
  [7647] = 4,
    ACTIONS(710), 1,
      anon_sym_SQUOTE,
    ACTIONS(715), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_string_repeat2,
    ACTIONS(712), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7661] = 4,
    ACTIONS(715), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      aux_sym_string_repeat2,
    ACTIONS(719), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(721), 1,
      anon_sym_COLON_EQ,
    STATE(71), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      anon_sym_COLON_EQ,
    STATE(79), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(725), 1,
      anon_sym_COLON_EQ,
    STATE(179), 1,
      sym_field_declaration_list,
    STATE(330), 1,
      sym_field_declaration_list_body,
  [7723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      anon_sym_COLON_EQ,
    STATE(165), 1,
      sym_field_declaration_list,
    STATE(330), 1,
      sym_field_declaration_list_body,
  [7739] = 4,
    ACTIONS(715), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      aux_sym_string_repeat1,
    ACTIONS(729), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7763] = 4,
    ACTIONS(715), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      aux_sym_string_repeat1,
    ACTIONS(735), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(701), 2,
      anon_sym_in,
      anon_sym_out,
  [7791] = 4,
    ACTIONS(715), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_repeat1,
    ACTIONS(742), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [7805] = 4,
    ACTIONS(715), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      aux_sym_string_repeat2,
    ACTIONS(744), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [7819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(746), 1,
      anon_sym_LBRACE,
    STATE(340), 1,
      sym_string,
  [7835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_field_declaration_list,
    STATE(330), 1,
      sym_field_declaration_list_body,
  [7848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_formal_parameters_repeat1,
  [7861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
  [7874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_formal_parameters_repeat1,
  [7887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(332), 1,
      sym_string,
  [7900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_formal_parameters_repeat1,
  [7913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_formal_parameters_repeat1,
  [7926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [7939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [7948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_call_signature,
    STATE(158), 1,
      sym_formal_parameters,
  [7961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(298), 1,
      sym_field_declaration_list,
    STATE(334), 1,
      sym_field_declaration_list_body,
  [7974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_field_declaration_list,
    STATE(330), 1,
      sym_field_declaration_list_body,
  [7987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(342), 1,
      sym_string,
  [8000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_struct_field_declaration_list,
    STATE(329), 1,
      sym_struct_field_declaration_list_body,
  [8013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_formal_parameters_repeat1,
  [8026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    ACTIONS(769), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
  [8050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_struct_field_declaration_list,
    STATE(329), 1,
      sym_struct_field_declaration_list_body,
  [8063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_field_declaration_list,
    STATE(330), 1,
      sym_field_declaration_list_body,
  [8076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
  [8089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      aux_sym_import_statement_repeat1,
  [8102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(335), 1,
      sym_string,
  [8115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [8128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_formal_parameters,
    STATE(62), 1,
      sym_call_signature,
  [8141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_formal_parameters,
    STATE(102), 1,
      sym_call_signature,
  [8154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_formal_parameters_repeat1,
  [8167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      aux_sym_color_token3,
    ACTIONS(787), 2,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [8178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_field_declaration_list,
    STATE(317), 1,
      sym_field_declaration_list_body,
  [8191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_formal_parameters_repeat1,
  [8204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [8222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_AT,
    ACTIONS(798), 1,
      sym__identifier,
    STATE(249), 1,
      sym_function_identifier,
  [8235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      aux_sym_import_statement_repeat1,
  [8248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_field_declaration_list,
    STATE(330), 1,
      sym_field_declaration_list_body,
  [8261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_field_declaration_list,
    STATE(343), 1,
      sym_field_declaration_list_body,
  [8274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_transitions_list_definition,
  [8292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__identifier,
    ACTIONS(806), 1,
      anon_sym_children,
  [8310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_animate_declaration_list,
  [8320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_states_list_definition,
  [8330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__identifier,
    ACTIONS(812), 1,
      anon_sym_children,
  [8348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SEMI,
    ACTIONS(816), 1,
      anon_sym_DASH_GT,
  [8358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__identifier,
    ACTIONS(818), 1,
      anon_sym_children,
  [8368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_GT,
  [8375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_COLON,
  [8382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_children,
  [8389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
  [8396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_SEMI,
  [8403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_EQ_GT,
  [8410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_SEMI,
  [8417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__identifier,
  [8424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_GT,
  [8431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_from,
  [8438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_from,
  [8445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_SEMI,
  [8452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_when,
  [8459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_COLON,
  [8466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_SEMI,
  [8473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
  [8480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
  [8487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COLON,
  [8494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [8501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
  [8508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
  [8515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SEMI,
  [8522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COLON_EQ,
  [8529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_in,
  [8536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_COLON_EQ,
  [8543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_COLON_EQ,
  [8550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [8557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_GT,
  [8564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_SEMI,
  [8571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
  [8578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_from,
  [8585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_COLON_EQ,
  [8592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_SEMI,
  [8599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_children,
  [8606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACK,
  [8613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SEMI,
  [8620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
  [8627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
  [8634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 99,
  [SMALL_STATE(37)] = 198,
  [SMALL_STATE(38)] = 297,
  [SMALL_STATE(39)] = 349,
  [SMALL_STATE(40)] = 401,
  [SMALL_STATE(41)] = 453,
  [SMALL_STATE(42)] = 517,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 621,
  [SMALL_STATE(45)] = 674,
  [SMALL_STATE(46)] = 728,
  [SMALL_STATE(47)] = 782,
  [SMALL_STATE(48)] = 832,
  [SMALL_STATE(49)] = 882,
  [SMALL_STATE(50)] = 932,
  [SMALL_STATE(51)] = 989,
  [SMALL_STATE(52)] = 1046,
  [SMALL_STATE(53)] = 1095,
  [SMALL_STATE(54)] = 1143,
  [SMALL_STATE(55)] = 1191,
  [SMALL_STATE(56)] = 1239,
  [SMALL_STATE(57)] = 1287,
  [SMALL_STATE(58)] = 1339,
  [SMALL_STATE(59)] = 1386,
  [SMALL_STATE(60)] = 1433,
  [SMALL_STATE(61)] = 1480,
  [SMALL_STATE(62)] = 1527,
  [SMALL_STATE(63)] = 1574,
  [SMALL_STATE(64)] = 1621,
  [SMALL_STATE(65)] = 1675,
  [SMALL_STATE(66)] = 1713,
  [SMALL_STATE(67)] = 1751,
  [SMALL_STATE(68)] = 1789,
  [SMALL_STATE(69)] = 1827,
  [SMALL_STATE(70)] = 1865,
  [SMALL_STATE(71)] = 1903,
  [SMALL_STATE(72)] = 1941,
  [SMALL_STATE(73)] = 1979,
  [SMALL_STATE(74)] = 2017,
  [SMALL_STATE(75)] = 2055,
  [SMALL_STATE(76)] = 2109,
  [SMALL_STATE(77)] = 2147,
  [SMALL_STATE(78)] = 2185,
  [SMALL_STATE(79)] = 2223,
  [SMALL_STATE(80)] = 2261,
  [SMALL_STATE(81)] = 2299,
  [SMALL_STATE(82)] = 2337,
  [SMALL_STATE(83)] = 2375,
  [SMALL_STATE(84)] = 2413,
  [SMALL_STATE(85)] = 2451,
  [SMALL_STATE(86)] = 2489,
  [SMALL_STATE(87)] = 2527,
  [SMALL_STATE(88)] = 2565,
  [SMALL_STATE(89)] = 2603,
  [SMALL_STATE(90)] = 2641,
  [SMALL_STATE(91)] = 2679,
  [SMALL_STATE(92)] = 2717,
  [SMALL_STATE(93)] = 2755,
  [SMALL_STATE(94)] = 2793,
  [SMALL_STATE(95)] = 2847,
  [SMALL_STATE(96)] = 2885,
  [SMALL_STATE(97)] = 2923,
  [SMALL_STATE(98)] = 2956,
  [SMALL_STATE(99)] = 2989,
  [SMALL_STATE(100)] = 3022,
  [SMALL_STATE(101)] = 3055,
  [SMALL_STATE(102)] = 3088,
  [SMALL_STATE(103)] = 3120,
  [SMALL_STATE(104)] = 3152,
  [SMALL_STATE(105)] = 3183,
  [SMALL_STATE(106)] = 3222,
  [SMALL_STATE(107)] = 3253,
  [SMALL_STATE(108)] = 3284,
  [SMALL_STATE(109)] = 3315,
  [SMALL_STATE(110)] = 3346,
  [SMALL_STATE(111)] = 3385,
  [SMALL_STATE(112)] = 3416,
  [SMALL_STATE(113)] = 3457,
  [SMALL_STATE(114)] = 3488,
  [SMALL_STATE(115)] = 3519,
  [SMALL_STATE(116)] = 3559,
  [SMALL_STATE(117)] = 3589,
  [SMALL_STATE(118)] = 3627,
  [SMALL_STATE(119)] = 3661,
  [SMALL_STATE(120)] = 3693,
  [SMALL_STATE(121)] = 3731,
  [SMALL_STATE(122)] = 3767,
  [SMALL_STATE(123)] = 3798,
  [SMALL_STATE(124)] = 3827,
  [SMALL_STATE(125)] = 3864,
  [SMALL_STATE(126)] = 3905,
  [SMALL_STATE(127)] = 3942,
  [SMALL_STATE(128)] = 3975,
  [SMALL_STATE(129)] = 4018,
  [SMALL_STATE(130)] = 4047,
  [SMALL_STATE(131)] = 4096,
  [SMALL_STATE(132)] = 4125,
  [SMALL_STATE(133)] = 4160,
  [SMALL_STATE(134)] = 4193,
  [SMALL_STATE(135)] = 4226,
  [SMALL_STATE(136)] = 4259,
  [SMALL_STATE(137)] = 4288,
  [SMALL_STATE(138)] = 4324,
  [SMALL_STATE(139)] = 4364,
  [SMALL_STATE(140)] = 4400,
  [SMALL_STATE(141)] = 4428,
  [SMALL_STATE(142)] = 4462,
  [SMALL_STATE(143)] = 4490,
  [SMALL_STATE(144)] = 4518,
  [SMALL_STATE(145)] = 4546,
  [SMALL_STATE(146)] = 4580,
  [SMALL_STATE(147)] = 4622,
  [SMALL_STATE(148)] = 4658,
  [SMALL_STATE(149)] = 4694,
  [SMALL_STATE(150)] = 4730,
  [SMALL_STATE(151)] = 4762,
  [SMALL_STATE(152)] = 4790,
  [SMALL_STATE(153)] = 4822,
  [SMALL_STATE(154)] = 4850,
  [SMALL_STATE(155)] = 4878,
  [SMALL_STATE(156)] = 4914,
  [SMALL_STATE(157)] = 4942,
  [SMALL_STATE(158)] = 4970,
  [SMALL_STATE(159)] = 4998,
  [SMALL_STATE(160)] = 5026,
  [SMALL_STATE(161)] = 5062,
  [SMALL_STATE(162)] = 5089,
  [SMALL_STATE(163)] = 5116,
  [SMALL_STATE(164)] = 5143,
  [SMALL_STATE(165)] = 5170,
  [SMALL_STATE(166)] = 5197,
  [SMALL_STATE(167)] = 5224,
  [SMALL_STATE(168)] = 5251,
  [SMALL_STATE(169)] = 5278,
  [SMALL_STATE(170)] = 5305,
  [SMALL_STATE(171)] = 5332,
  [SMALL_STATE(172)] = 5359,
  [SMALL_STATE(173)] = 5386,
  [SMALL_STATE(174)] = 5413,
  [SMALL_STATE(175)] = 5440,
  [SMALL_STATE(176)] = 5473,
  [SMALL_STATE(177)] = 5500,
  [SMALL_STATE(178)] = 5527,
  [SMALL_STATE(179)] = 5554,
  [SMALL_STATE(180)] = 5581,
  [SMALL_STATE(181)] = 5608,
  [SMALL_STATE(182)] = 5635,
  [SMALL_STATE(183)] = 5662,
  [SMALL_STATE(184)] = 5689,
  [SMALL_STATE(185)] = 5716,
  [SMALL_STATE(186)] = 5746,
  [SMALL_STATE(187)] = 5772,
  [SMALL_STATE(188)] = 5802,
  [SMALL_STATE(189)] = 5828,
  [SMALL_STATE(190)] = 5876,
  [SMALL_STATE(191)] = 5902,
  [SMALL_STATE(192)] = 5928,
  [SMALL_STATE(193)] = 5953,
  [SMALL_STATE(194)] = 5980,
  [SMALL_STATE(195)] = 6007,
  [SMALL_STATE(196)] = 6034,
  [SMALL_STATE(197)] = 6061,
  [SMALL_STATE(198)] = 6088,
  [SMALL_STATE(199)] = 6115,
  [SMALL_STATE(200)] = 6142,
  [SMALL_STATE(201)] = 6169,
  [SMALL_STATE(202)] = 6196,
  [SMALL_STATE(203)] = 6223,
  [SMALL_STATE(204)] = 6250,
  [SMALL_STATE(205)] = 6278,
  [SMALL_STATE(206)] = 6306,
  [SMALL_STATE(207)] = 6334,
  [SMALL_STATE(208)] = 6374,
  [SMALL_STATE(209)] = 6413,
  [SMALL_STATE(210)] = 6452,
  [SMALL_STATE(211)] = 6491,
  [SMALL_STATE(212)] = 6530,
  [SMALL_STATE(213)] = 6569,
  [SMALL_STATE(214)] = 6608,
  [SMALL_STATE(215)] = 6647,
  [SMALL_STATE(216)] = 6686,
  [SMALL_STATE(217)] = 6725,
  [SMALL_STATE(218)] = 6764,
  [SMALL_STATE(219)] = 6784,
  [SMALL_STATE(220)] = 6804,
  [SMALL_STATE(221)] = 6840,
  [SMALL_STATE(222)] = 6862,
  [SMALL_STATE(223)] = 6895,
  [SMALL_STATE(224)] = 6928,
  [SMALL_STATE(225)] = 6961,
  [SMALL_STATE(226)] = 6994,
  [SMALL_STATE(227)] = 7027,
  [SMALL_STATE(228)] = 7060,
  [SMALL_STATE(229)] = 7086,
  [SMALL_STATE(230)] = 7116,
  [SMALL_STATE(231)] = 7142,
  [SMALL_STATE(232)] = 7169,
  [SMALL_STATE(233)] = 7196,
  [SMALL_STATE(234)] = 7223,
  [SMALL_STATE(235)] = 7250,
  [SMALL_STATE(236)] = 7277,
  [SMALL_STATE(237)] = 7304,
  [SMALL_STATE(238)] = 7331,
  [SMALL_STATE(239)] = 7352,
  [SMALL_STATE(240)] = 7379,
  [SMALL_STATE(241)] = 7392,
  [SMALL_STATE(242)] = 7407,
  [SMALL_STATE(243)] = 7422,
  [SMALL_STATE(244)] = 7437,
  [SMALL_STATE(245)] = 7456,
  [SMALL_STATE(246)] = 7475,
  [SMALL_STATE(247)] = 7490,
  [SMALL_STATE(248)] = 7509,
  [SMALL_STATE(249)] = 7528,
  [SMALL_STATE(250)] = 7547,
  [SMALL_STATE(251)] = 7566,
  [SMALL_STATE(252)] = 7585,
  [SMALL_STATE(253)] = 7600,
  [SMALL_STATE(254)] = 7619,
  [SMALL_STATE(255)] = 7633,
  [SMALL_STATE(256)] = 7647,
  [SMALL_STATE(257)] = 7661,
  [SMALL_STATE(258)] = 7675,
  [SMALL_STATE(259)] = 7691,
  [SMALL_STATE(260)] = 7707,
  [SMALL_STATE(261)] = 7723,
  [SMALL_STATE(262)] = 7739,
  [SMALL_STATE(263)] = 7753,
  [SMALL_STATE(264)] = 7763,
  [SMALL_STATE(265)] = 7777,
  [SMALL_STATE(266)] = 7791,
  [SMALL_STATE(267)] = 7805,
  [SMALL_STATE(268)] = 7819,
  [SMALL_STATE(269)] = 7835,
  [SMALL_STATE(270)] = 7848,
  [SMALL_STATE(271)] = 7861,
  [SMALL_STATE(272)] = 7874,
  [SMALL_STATE(273)] = 7887,
  [SMALL_STATE(274)] = 7900,
  [SMALL_STATE(275)] = 7913,
  [SMALL_STATE(276)] = 7926,
  [SMALL_STATE(277)] = 7939,
  [SMALL_STATE(278)] = 7948,
  [SMALL_STATE(279)] = 7961,
  [SMALL_STATE(280)] = 7974,
  [SMALL_STATE(281)] = 7987,
  [SMALL_STATE(282)] = 8000,
  [SMALL_STATE(283)] = 8013,
  [SMALL_STATE(284)] = 8026,
  [SMALL_STATE(285)] = 8037,
  [SMALL_STATE(286)] = 8050,
  [SMALL_STATE(287)] = 8063,
  [SMALL_STATE(288)] = 8076,
  [SMALL_STATE(289)] = 8089,
  [SMALL_STATE(290)] = 8102,
  [SMALL_STATE(291)] = 8115,
  [SMALL_STATE(292)] = 8128,
  [SMALL_STATE(293)] = 8141,
  [SMALL_STATE(294)] = 8154,
  [SMALL_STATE(295)] = 8167,
  [SMALL_STATE(296)] = 8178,
  [SMALL_STATE(297)] = 8191,
  [SMALL_STATE(298)] = 8204,
  [SMALL_STATE(299)] = 8213,
  [SMALL_STATE(300)] = 8222,
  [SMALL_STATE(301)] = 8235,
  [SMALL_STATE(302)] = 8248,
  [SMALL_STATE(303)] = 8261,
  [SMALL_STATE(304)] = 8274,
  [SMALL_STATE(305)] = 8282,
  [SMALL_STATE(306)] = 8292,
  [SMALL_STATE(307)] = 8300,
  [SMALL_STATE(308)] = 8310,
  [SMALL_STATE(309)] = 8320,
  [SMALL_STATE(310)] = 8330,
  [SMALL_STATE(311)] = 8338,
  [SMALL_STATE(312)] = 8348,
  [SMALL_STATE(313)] = 8358,
  [SMALL_STATE(314)] = 8368,
  [SMALL_STATE(315)] = 8375,
  [SMALL_STATE(316)] = 8382,
  [SMALL_STATE(317)] = 8389,
  [SMALL_STATE(318)] = 8396,
  [SMALL_STATE(319)] = 8403,
  [SMALL_STATE(320)] = 8410,
  [SMALL_STATE(321)] = 8417,
  [SMALL_STATE(322)] = 8424,
  [SMALL_STATE(323)] = 8431,
  [SMALL_STATE(324)] = 8438,
  [SMALL_STATE(325)] = 8445,
  [SMALL_STATE(326)] = 8452,
  [SMALL_STATE(327)] = 8459,
  [SMALL_STATE(328)] = 8466,
  [SMALL_STATE(329)] = 8473,
  [SMALL_STATE(330)] = 8480,
  [SMALL_STATE(331)] = 8487,
  [SMALL_STATE(332)] = 8494,
  [SMALL_STATE(333)] = 8501,
  [SMALL_STATE(334)] = 8508,
  [SMALL_STATE(335)] = 8515,
  [SMALL_STATE(336)] = 8522,
  [SMALL_STATE(337)] = 8529,
  [SMALL_STATE(338)] = 8536,
  [SMALL_STATE(339)] = 8543,
  [SMALL_STATE(340)] = 8550,
  [SMALL_STATE(341)] = 8557,
  [SMALL_STATE(342)] = 8564,
  [SMALL_STATE(343)] = 8571,
  [SMALL_STATE(344)] = 8578,
  [SMALL_STATE(345)] = 8585,
  [SMALL_STATE(346)] = 8592,
  [SMALL_STATE(347)] = 8599,
  [SMALL_STATE(348)] = 8606,
  [SMALL_STATE(349)] = 8613,
  [SMALL_STATE(350)] = 8620,
  [SMALL_STATE(351)] = 8627,
  [SMALL_STATE(352)] = 8634,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_prec_operator, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_prec_operator, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(219),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(305),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(309),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(232),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(239),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(229),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(300),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(45),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(41),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(313),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(47),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 2), SHIFT_REPEAT(103),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list_body, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_prec_operator, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_prec_operator, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_prec_operator, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_prec_operator, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_prec_operator, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_prec_operator, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_operator, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_operator, 3),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(253),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 6),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_body_repeat1, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 16),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 3, .production_id = 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 3, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 16),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 14),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 13),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 8),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 4, .production_id = 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 4, .production_id = 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(251),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(247),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_binary_expression, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_binary_expression, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 3, .production_id = 13),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 8),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 12),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(103),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list_body, 2, .production_id = 7),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(45),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(228),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(347),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 2, .production_id = 11), SHIFT_REPEAT(47),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(133),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(110),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(316),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(129),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(250),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5, .production_id = 17),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_body_repeat1, 4, .production_id = 13),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2), SHIFT_REPEAT(223),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition_body, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(236),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(256),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(264),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(193),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_body_repeat1, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 15),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 10),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [890] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
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
