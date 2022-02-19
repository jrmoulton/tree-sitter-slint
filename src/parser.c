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
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
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
  anon_sym_ease_in = 68,
  anon_sym_ease_in_out = 69,
  anon_sym_ease_out = 70,
  anon_sym_end = 71,
  anon_sym_green = 72,
  anon_sym_red = 73,
  anon_sym_start = 74,
  anon_sym_yellow = 75,
  anon_sym_true = 76,
  anon_sym_false = 77,
  anon_sym_transparent = 78,
  anon_sym_angle = 79,
  anon_sym_bool = 80,
  anon_sym_brush = 81,
  anon_sym_duration = 82,
  anon_sym_easing = 83,
  anon_sym_float = 84,
  anon_sym_image = 85,
  anon_sym_int = 86,
  anon_sym_length = 87,
  anon_sym_percent = 88,
  anon_sym_physical_DASHlength = 89,
  anon_sym_string = 90,
  sym_comment = 91,
  sym_source_file = 92,
  sym__definition = 93,
  sym_global_definition = 94,
  sym_import_statement = 95,
  sym_export_statement = 96,
  sym_struct_definition = 97,
  sym_struct_field_declaration_list = 98,
  sym_component_definition = 99,
  sym_component_field_declaration_list = 100,
  sym_transitions_definition = 101,
  sym_transitions_list_definition = 102,
  sym_states_definition = 103,
  sym_states_list_definition = 104,
  sym_animate_statement = 105,
  sym_animate_declaration_list = 106,
  sym_callback_event = 107,
  sym_callback_call = 108,
  sym_if_statement_definition = 109,
  sym_for_loop_definition = 110,
  sym_for_loop_index = 111,
  sym_property_definition = 112,
  sym_property_expr = 113,
  sym__propterty_kind = 114,
  sym_property_type_list = 115,
  sym_list_definition = 116,
  sym_variable_definition = 117,
  sym_variable_set_equal = 118,
  sym__expression = 119,
  sym_expression_body_paren = 120,
  sym__expression_body = 121,
  sym_unary_expression = 122,
  sym__binary_expression = 123,
  sym_mult_binary_expression = 124,
  sym_ternary_expression = 125,
  sym_add_binary_expression = 126,
  sym_callback_definition = 127,
  sym_call_signature = 128,
  sym_formal_parameters = 129,
  sym_formal_parameter = 130,
  sym_string = 131,
  sym_visibility_modifier = 132,
  sym_post_identifier = 133,
  sym_user_type_identifier = 134,
  sym__type_identifier = 135,
  sym_var_identifier = 136,
  sym_children_identifier = 137,
  sym_function_identifier = 138,
  sym_function_call = 139,
  sym_reference_identifier = 140,
  sym_value = 141,
  sym_color = 142,
  sym_value_with_units = 143,
  sym_number = 144,
  sym_unit_type = 145,
  sym_language_constant = 146,
  sym_builtin_type_identifier = 147,
  aux_sym_source_file_repeat1 = 148,
  aux_sym_import_statement_repeat1 = 149,
  aux_sym_struct_field_declaration_list_repeat1 = 150,
  aux_sym_component_field_declaration_list_repeat1 = 151,
  aux_sym_transitions_list_definition_repeat1 = 152,
  aux_sym_states_list_definition_repeat1 = 153,
  aux_sym_animate_declaration_list_repeat1 = 154,
  aux_sym_list_definition_repeat1 = 155,
  aux_sym_formal_parameters_repeat1 = 156,
  aux_sym_string_repeat1 = 157,
  aux_sym_string_repeat2 = 158,
  aux_sym_var_identifier_repeat1 = 159,
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
  [6] = 3,
  [7] = 5,
  [8] = 8,
  [9] = 3,
  [10] = 8,
  [11] = 5,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 18,
  [24] = 16,
  [25] = 14,
  [26] = 26,
  [27] = 19,
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 31,
  [35] = 32,
  [36] = 32,
  [37] = 31,
  [38] = 32,
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
  [96] = 56,
  [97] = 55,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 51,
  [102] = 52,
  [103] = 103,
  [104] = 104,
  [105] = 53,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 61,
  [110] = 110,
  [111] = 66,
  [112] = 112,
  [113] = 79,
  [114] = 106,
  [115] = 62,
  [116] = 65,
  [117] = 64,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 60,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 90,
  [131] = 63,
  [132] = 132,
  [133] = 54,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 49,
  [140] = 140,
  [141] = 141,
  [142] = 45,
  [143] = 40,
  [144] = 144,
  [145] = 145,
  [146] = 48,
  [147] = 45,
  [148] = 148,
  [149] = 149,
  [150] = 135,
  [151] = 49,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 148,
  [156] = 153,
  [157] = 157,
  [158] = 40,
  [159] = 152,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 48,
  [165] = 162,
  [166] = 44,
  [167] = 43,
  [168] = 42,
  [169] = 169,
  [170] = 52,
  [171] = 42,
  [172] = 138,
  [173] = 50,
  [174] = 137,
  [175] = 46,
  [176] = 176,
  [177] = 44,
  [178] = 47,
  [179] = 43,
  [180] = 54,
  [181] = 53,
  [182] = 51,
  [183] = 55,
  [184] = 184,
  [185] = 56,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 50,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 95,
  [198] = 46,
  [199] = 199,
  [200] = 200,
  [201] = 47,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 186,
  [206] = 194,
  [207] = 188,
  [208] = 187,
  [209] = 196,
  [210] = 202,
  [211] = 193,
  [212] = 189,
  [213] = 199,
  [214] = 203,
  [215] = 95,
  [216] = 195,
  [217] = 191,
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
  [235] = 45,
  [236] = 236,
  [237] = 48,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 49,
  [243] = 243,
  [244] = 243,
  [245] = 245,
  [246] = 236,
  [247] = 247,
  [248] = 248,
  [249] = 79,
  [250] = 64,
  [251] = 251,
  [252] = 252,
  [253] = 252,
  [254] = 252,
  [255] = 252,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 258,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 263,
  [272] = 272,
  [273] = 262,
  [274] = 260,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 64,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 278,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 284,
  [291] = 284,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 278,
  [297] = 282,
  [298] = 282,
  [299] = 79,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 303,
  [308] = 303,
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
  [321] = 309,
  [322] = 310,
  [323] = 301,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 319,
  [328] = 315,
  [329] = 313,
  [330] = 325,
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
  [355] = 337,
  [356] = 356,
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
      if (eof) ADVANCE(254);
      if (lookahead == '!') ADVANCE(306);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '#') ADVANCE(534);
      if (lookahead == '%') ADVANCE(541);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead == '+') ADVANCE(315);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '<') ADVANCE(292);
      if (lookahead == '=') ADVANCE(295);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '\\') SKIP(250)
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(102);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
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
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(50)
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
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead != 0) ADVANCE(333);
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
      if (lookahead == '!') ADVANCE(306);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '#') ADVANCE(534);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'b') ADVANCE(421);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'g') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == 'y') ADVANCE(383);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '/') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(541);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(302);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(541);
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 36:
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 37:
      if (lookahead == '&') ADVANCE(38);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '&') ADVANCE(309);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '=') ADVANCE(295);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'b') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 41:
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(597);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(597);
      if (lookahead == '=') ADVANCE(299);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(596);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'b') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 48:
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'b') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(379);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'b') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(379);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'b') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'g') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(379);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '@') ADVANCE(525);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(296);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(282);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(182);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(539);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(556);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(560);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(285);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(594);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(221);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(576);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(588);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(592);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(544);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(316);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 232:
      if (lookahead == 'w') ADVANCE(564);
      END_STATE();
    case 233:
      if (lookahead == 'x') ADVANCE(539);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 235:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 236:
      if (lookahead == '{') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 237:
      if (lookahead == '|') ADVANCE(310);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 248:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(597);
      if (lookahead == '\r') ADVANCE(598);
      END_STATE();
    case 249:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 250:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(249)
      END_STATE();
    case 251:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(253)
      END_STATE();
    case 252:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') SKIP(253)
      if (lookahead == '\r') SKIP(251)
      END_STATE();
    case 253:
      if (eof) ADVANCE(254);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') SKIP(252)
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'b') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'g') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(379);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_transitions);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_transitions);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_states);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_states);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_animate);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_animate);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(282);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(298);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(597);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(597);
      if (lookahead == '=') ADVANCE(299);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(296);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == 'x') ADVANCE(465);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'x') ADVANCE(465);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'u') ADVANCE(374);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'x') ADVANCE(540);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(344);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(561);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(581);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(595);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(422);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(371);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(507);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(577);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(589);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(593);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(410);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(545);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(317);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(527);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(486);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(495);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(388);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(571);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(468);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(482);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(504);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(565);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(291);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(489);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_int_number);
      if (lookahead == '.') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '_') ADVANCE(409);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_ease_out);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_angle);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_brush);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_easing);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_percent);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(597);
      if (lookahead == '\\') ADVANCE(248);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 253},
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
  [59] = {.lex_state = 46},
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
  [80] = {.lex_state = 253},
  [81] = {.lex_state = 253},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 253},
  [94] = {.lex_state = 253},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 37},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 50},
  [99] = {.lex_state = 48},
  [100] = {.lex_state = 50},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 50},
  [104] = {.lex_state = 50},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 48},
  [107] = {.lex_state = 48},
  [108] = {.lex_state = 253},
  [109] = {.lex_state = 253},
  [110] = {.lex_state = 253},
  [111] = {.lex_state = 253},
  [112] = {.lex_state = 253},
  [113] = {.lex_state = 253},
  [114] = {.lex_state = 48},
  [115] = {.lex_state = 253},
  [116] = {.lex_state = 253},
  [117] = {.lex_state = 253},
  [118] = {.lex_state = 48},
  [119] = {.lex_state = 48},
  [120] = {.lex_state = 253},
  [121] = {.lex_state = 253},
  [122] = {.lex_state = 253},
  [123] = {.lex_state = 253},
  [124] = {.lex_state = 253},
  [125] = {.lex_state = 253},
  [126] = {.lex_state = 51},
  [127] = {.lex_state = 253},
  [128] = {.lex_state = 253},
  [129] = {.lex_state = 253},
  [130] = {.lex_state = 253},
  [131] = {.lex_state = 253},
  [132] = {.lex_state = 253},
  [133] = {.lex_state = 34},
  [134] = {.lex_state = 48},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 48},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 48},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 48},
  [145] = {.lex_state = 48},
  [146] = {.lex_state = 34},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 48},
  [149] = {.lex_state = 48},
  [150] = {.lex_state = 34},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 48},
  [153] = {.lex_state = 48},
  [154] = {.lex_state = 48},
  [155] = {.lex_state = 48},
  [156] = {.lex_state = 48},
  [157] = {.lex_state = 48},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 48},
  [160] = {.lex_state = 48},
  [161] = {.lex_state = 48},
  [162] = {.lex_state = 48},
  [163] = {.lex_state = 48},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 48},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 34},
  [173] = {.lex_state = 34},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 36},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 36},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 36},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 41},
  [185] = {.lex_state = 36},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 48},
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
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 41},
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
  [227] = {.lex_state = 47},
  [228] = {.lex_state = 47},
  [229] = {.lex_state = 47},
  [230] = {.lex_state = 47},
  [231] = {.lex_state = 47},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 47},
  [234] = {.lex_state = 47},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 34},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 34},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 34},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 34},
  [246] = {.lex_state = 34},
  [247] = {.lex_state = 47},
  [248] = {.lex_state = 47},
  [249] = {.lex_state = 47},
  [250] = {.lex_state = 47},
  [251] = {.lex_state = 34},
  [252] = {.lex_state = 52},
  [253] = {.lex_state = 52},
  [254] = {.lex_state = 52},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 39},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 33},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 39},
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 33},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 33},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 39},
  [274] = {.lex_state = 33},
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
  [289] = {.lex_state = 52},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
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
  [303] = {.lex_state = 53},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 41},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 53},
  [308] = {.lex_state = 53},
  [309] = {.lex_state = 54},
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
  [334] = {.lex_state = 52},
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
    [sym_source_file] = STATE(361),
    [sym__definition] = STATE(80),
    [sym_global_definition] = STATE(80),
    [sym_import_statement] = STATE(80),
    [sym_export_statement] = STATE(80),
    [sym_struct_definition] = STATE(80),
    [sym_component_definition] = STATE(80),
    [sym_visibility_modifier] = STATE(126),
    [sym_user_type_identifier] = STATE(119),
    [sym__type_identifier] = STATE(119),
    [sym_builtin_type_identifier] = STATE(119),
    [aux_sym_source_file_repeat1] = STATE(80),
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
    [anon_sym_string] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(92), 1,
      sym_component_field_declaration_list,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(224), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [113] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [223] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(332), 1,
      sym_list_definition,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(245), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [333] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [443] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [553] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [663] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(278), 1,
      sym_formal_parameter,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [773] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [883] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(285), 1,
      sym_formal_parameter,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [993] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [1103] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(296), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [1213] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(318), 1,
      sym_formal_parameter,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(232), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [1320] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(212), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [1424] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(240), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [1528] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(246), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [1632] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__identifier,
    ACTIONS(87), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_int_number,
    ACTIONS(95), 1,
      sym_float_number,
    STATE(135), 1,
      sym_number,
    STATE(147), 1,
      sym_reference_identifier,
    STATE(201), 1,
      sym_children_identifier,
    STATE(291), 1,
      sym_function_identifier,
    ACTIONS(89), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(186), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(99), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(200), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(97), 14,
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
  [1736] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(251), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(244), 11,
      sym__expression_body,
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
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    ACTIONS(49), 14,
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
  [1842] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__identifier,
    ACTIONS(87), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_int_number,
    ACTIONS(95), 1,
      sym_float_number,
    STATE(135), 1,
      sym_number,
    STATE(147), 1,
      sym_reference_identifier,
    STATE(201), 1,
      sym_children_identifier,
    STATE(291), 1,
      sym_function_identifier,
    ACTIONS(89), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(186), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(99), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(188), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(97), 14,
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
  [1946] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__identifier,
    ACTIONS(87), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_int_number,
    ACTIONS(95), 1,
      sym_float_number,
    STATE(135), 1,
      sym_number,
    STATE(147), 1,
      sym_reference_identifier,
    STATE(201), 1,
      sym_children_identifier,
    STATE(291), 1,
      sym_function_identifier,
    ACTIONS(89), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(186), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(99), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(187), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(97), 14,
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
  [2050] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(210), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [2154] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__identifier,
    ACTIONS(87), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_int_number,
    ACTIONS(95), 1,
      sym_float_number,
    STATE(135), 1,
      sym_number,
    STATE(147), 1,
      sym_reference_identifier,
    STATE(201), 1,
      sym_children_identifier,
    STATE(291), 1,
      sym_function_identifier,
    ACTIONS(89), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(186), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(99), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(202), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(97), 14,
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
  [2258] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    STATE(251), 2,
      sym__expression,
      sym_expression_body_paren,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    STATE(243), 11,
      sym__expression_body,
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
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    ACTIONS(49), 14,
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
  [2364] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(236), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [2468] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__identifier,
    ACTIONS(87), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_int_number,
    ACTIONS(95), 1,
      sym_float_number,
    STATE(135), 1,
      sym_number,
    STATE(147), 1,
      sym_reference_identifier,
    STATE(201), 1,
      sym_children_identifier,
    STATE(291), 1,
      sym_function_identifier,
    ACTIONS(89), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(186), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(99), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(189), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(97), 14,
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
  [2572] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(241), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [2676] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(207), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [2780] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(208), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [2884] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(238), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [2988] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_int_number,
    ACTIONS(47), 1,
      sym_float_number,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(150), 1,
      sym_number,
    STATE(178), 1,
      sym_children_identifier,
    STATE(290), 1,
      sym_function_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(205), 3,
      sym_color,
      sym_value_with_units,
      sym_language_constant,
    ACTIONS(51), 12,
      anon_sym_angle,
      anon_sym_bool,
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
    STATE(239), 13,
      sym__expression,
      sym_expression_body_paren,
      sym__expression_body,
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
    ACTIONS(49), 14,
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
  [3092] = 24,
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
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_component_field_declaration_list_repeat1,
  [3193] = 24,
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
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_component_field_declaration_list_repeat1,
  [3294] = 24,
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
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [3395] = 24,
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
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [3496] = 24,
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
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_component_field_declaration_list_repeat1,
  [3597] = 24,
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
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_component_field_declaration_list_repeat1,
  [3698] = 24,
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
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [3799] = 24,
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
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(113), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_component_field_declaration_list_repeat1,
  [3900] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COLON_EQ,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      anon_sym_export,
    ACTIONS(153), 1,
      anon_sym_transitions,
    ACTIONS(156), 1,
      anon_sym_states,
    ACTIONS(159), 1,
      anon_sym_animate,
    ACTIONS(165), 1,
      anon_sym_elseif,
    ACTIONS(168), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_property,
    ACTIONS(174), 1,
      anon_sym_STAR,
    ACTIONS(177), 1,
      anon_sym_callback,
    ACTIONS(180), 1,
      sym__identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_reference_identifier,
    STATE(47), 1,
      sym_children_identifier,
    STATE(57), 1,
      sym_var_identifier,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(364), 1,
      sym_function_identifier,
    ACTIONS(162), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(186), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(189), 12,
      anon_sym_angle,
      anon_sym_bool,
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
      aux_sym_component_field_declaration_list_repeat1,
  [4001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 13,
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
    ACTIONS(194), 27,
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
      anon_sym_string,
  [4052] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_EQ_GT,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(198), 2,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
    ACTIONS(200), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AT,
    ACTIONS(204), 13,
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
    ACTIONS(202), 15,
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
  [4111] = 3,
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
    ACTIONS(210), 27,
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
      anon_sym_string,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 13,
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
    ACTIONS(194), 27,
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
      anon_sym_string,
  [4207] = 3,
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
    ACTIONS(214), 27,
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
      anon_sym_string,
  [4255] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(200), 10,
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
    ACTIONS(202), 27,
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
      anon_sym_string,
  [4306] = 3,
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
    ACTIONS(218), 27,
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
      anon_sym_string,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 12,
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
    ACTIONS(202), 27,
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
      anon_sym_string,
  [4400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
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
    ACTIONS(222), 27,
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
      anon_sym_string,
  [4451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(212), 10,
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
    ACTIONS(214), 27,
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
      anon_sym_string,
  [4502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 12,
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
    ACTIONS(229), 27,
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
      anon_sym_string,
  [4549] = 3,
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
    ACTIONS(233), 27,
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
      anon_sym_string,
  [4595] = 3,
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
    ACTIONS(237), 27,
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
      anon_sym_string,
  [4641] = 3,
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
    ACTIONS(241), 27,
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
      anon_sym_string,
  [4687] = 3,
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
    ACTIONS(245), 27,
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
      anon_sym_string,
  [4733] = 3,
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
    ACTIONS(249), 27,
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
      anon_sym_string,
  [4779] = 3,
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
    ACTIONS(253), 27,
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
      anon_sym_string,
  [4825] = 6,
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
    ACTIONS(259), 26,
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
      anon_sym_string,
  [4876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(267), 25,
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
      anon_sym_string,
  [4914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(271), 25,
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
      anon_sym_string,
  [4952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(275), 25,
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
      anon_sym_string,
  [4990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(279), 25,
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
      anon_sym_string,
  [5028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(283), 25,
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
      anon_sym_string,
  [5066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(287), 25,
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
      anon_sym_string,
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(291), 25,
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
      anon_sym_string,
  [5142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(295), 25,
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
      anon_sym_string,
  [5180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(299), 25,
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
      anon_sym_string,
  [5218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(303), 25,
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
      anon_sym_string,
  [5256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(307), 25,
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
      anon_sym_string,
  [5294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(311), 25,
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
      anon_sym_string,
  [5332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(315), 25,
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
      anon_sym_string,
  [5370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(319), 25,
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
      anon_sym_string,
  [5408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(323), 25,
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
      anon_sym_string,
  [5446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(327), 25,
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
      anon_sym_string,
  [5484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(331), 25,
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
      anon_sym_string,
  [5522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(335), 25,
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
      anon_sym_string,
  [5560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(339), 25,
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
      anon_sym_string,
  [5598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(343), 25,
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
      anon_sym_string,
  [5636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(347), 25,
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
      anon_sym_string,
  [5674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(351), 25,
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
      anon_sym_string,
  [5712] = 12,
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
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_visibility_modifier,
    STATE(119), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(81), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [5768] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      anon_sym_global,
    ACTIONS(360), 1,
      anon_sym_COLON_EQ,
    ACTIONS(363), 1,
      anon_sym_import,
    ACTIONS(366), 1,
      anon_sym_export,
    ACTIONS(369), 1,
      anon_sym_struct,
    ACTIONS(372), 1,
      sym__identifier,
    STATE(126), 1,
      sym_visibility_modifier,
    STATE(119), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    STATE(81), 7,
      sym__definition,
      sym_global_definition,
      sym_import_statement,
      sym_export_statement,
      sym_struct_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(375), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [5824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(380), 25,
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
      anon_sym_string,
  [5862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(384), 25,
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
      anon_sym_string,
  [5900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(388), 25,
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
      anon_sym_string,
  [5938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(392), 25,
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
      anon_sym_string,
  [5976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(396), 25,
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
      anon_sym_string,
  [6014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(400), 25,
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
      anon_sym_string,
  [6052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(404), 25,
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
      anon_sym_string,
  [6090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(408), 25,
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
      anon_sym_string,
  [6128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(412), 25,
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
      anon_sym_string,
  [6166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(416), 25,
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
      anon_sym_string,
  [6204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 5,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
      anon_sym_elseif,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(420), 25,
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
      anon_sym_string,
  [6242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(424), 17,
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
      anon_sym_string,
  [6272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(428), 17,
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
      anon_sym_string,
  [6302] = 3,
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
    ACTIONS(432), 14,
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
  [6331] = 3,
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
  [6359] = 3,
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
  [6387] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(88), 1,
      sym_component_definition,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [6425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 7,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_GT,
    ACTIONS(204), 13,
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
  [6453] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(69), 1,
      sym_component_definition,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [6491] = 3,
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
  [6519] = 3,
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
  [6547] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(70), 1,
      sym_component_definition,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [6585] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(101), 1,
      anon_sym_COLON_EQ,
    ACTIONS(105), 1,
      anon_sym_export,
    STATE(59), 1,
      sym_component_definition,
    STATE(144), 1,
      sym_visibility_modifier,
    STATE(118), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [6623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_COLON,
      anon_sym_DASH,
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
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [6651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(434), 1,
      anon_sym_COLON_EQ,
    STATE(65), 1,
      sym_component_field_declaration_list,
    STATE(328), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [6686] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    STATE(358), 2,
      sym__propterty_kind,
      sym_property_type_list,
    STATE(357), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [6719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(440), 17,
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
      anon_sym_string,
  [6746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(279), 17,
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
      anon_sym_string,
  [6773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(444), 17,
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
      anon_sym_string,
  [6800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(299), 17,
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
      anon_sym_string,
  [6827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(448), 17,
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
      anon_sym_string,
  [6854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(351), 17,
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
      anon_sym_string,
  [6881] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(450), 1,
      anon_sym_COLON_EQ,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_component_field_declaration_list,
    STATE(315), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [6916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(283), 17,
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
      anon_sym_string,
  [6943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(295), 17,
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
      anon_sym_string,
  [6970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(291), 17,
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
      anon_sym_string,
  [6997] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(454), 1,
      anon_sym_COLON_EQ,
    STATE(66), 1,
      sym_component_field_declaration_list,
    STATE(325), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7032] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    ACTIONS(456), 1,
      anon_sym_COLON_EQ,
    STATE(111), 1,
      sym_component_field_declaration_list,
    STATE(330), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(460), 17,
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
      anon_sym_string,
  [7094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(275), 17,
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
      anon_sym_string,
  [7121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(464), 17,
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
      anon_sym_string,
  [7148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(468), 17,
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
      anon_sym_string,
  [7175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(472), 17,
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
      anon_sym_string,
  [7202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(476), 17,
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
      anon_sym_string,
  [7229] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(478), 1,
      anon_sym_global,
    ACTIONS(480), 1,
      anon_sym_COLON_EQ,
    ACTIONS(482), 1,
      anon_sym_struct,
    STATE(114), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(486), 17,
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
      anon_sym_string,
  [7291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(490), 17,
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
      anon_sym_string,
  [7318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(494), 17,
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
      anon_sym_string,
  [7345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(412), 17,
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
      anon_sym_string,
  [7372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(287), 17,
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
      anon_sym_string,
  [7399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
    ACTIONS(498), 17,
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
      anon_sym_string,
  [7426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_COLON,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
  [7453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_struct_field_declaration_list,
    STATE(316), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7485] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_PERCENT,
    STATE(199), 1,
      sym_unit_type,
    ACTIONS(506), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(504), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(502), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [7517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_struct_field_declaration_list,
    STATE(314), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(510), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
  [7574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(164), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(202), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(200), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [7605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_SLASH,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(139), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(212), 14,
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
  [7634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON_EQ,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 15,
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
      anon_sym_string,
  [7661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(294), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    ACTIONS(527), 1,
      anon_sym_DOT,
    STATE(146), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(200), 14,
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
  [7719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 15,
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
  [7746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(529), 1,
      anon_sym_COLON_EQ,
    STATE(106), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    STATE(295), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    ACTIONS(527), 1,
      anon_sym_DOT,
    STATE(139), 1,
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
  [7833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(164), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(202), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(200), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [7861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(322), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(339), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    STATE(213), 1,
      sym_unit_type,
    ACTIONS(533), 3,
      anon_sym_px,
      anon_sym_PERCENT,
      anon_sym_ms,
    ACTIONS(502), 11,
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
  [7941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(214), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(212), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [7969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(329), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [7995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(319), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(317), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(310), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(327), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(352), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(192), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [8151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(313), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(348), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(353), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(301), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(346), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(151), 1,
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
  [8309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(323), 3,
      sym_user_type_identifier,
      sym__type_identifier,
      sym_builtin_type_identifier,
    ACTIONS(19), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8335] = 3,
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
  [8359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SLASH,
    ACTIONS(192), 15,
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
  [8383] = 3,
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
  [8407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(338), 1,
      sym_builtin_type_identifier,
    ACTIONS(540), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8434] = 3,
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
  [8457] = 3,
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
  [8480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    ACTIONS(527), 1,
      anon_sym_DOT,
    STATE(146), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(200), 11,
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
  [8509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(227), 14,
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
  [8532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SLASH,
    ACTIONS(510), 14,
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
  [8555] = 3,
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
  [8578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(338), 1,
      sym_builtin_type_identifier,
    ACTIONS(544), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8605] = 3,
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
  [8628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SLASH,
    ACTIONS(200), 14,
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
  [8651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(192), 9,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_AT,
  [8674] = 3,
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
  [8697] = 3,
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
  [8720] = 3,
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
  [8743] = 3,
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
  [8766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_animate_declaration_list_repeat1,
    STATE(338), 1,
      sym_builtin_type_identifier,
    ACTIONS(540), 12,
      anon_sym_angle,
      anon_sym_bool,
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
  [8793] = 3,
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
  [8816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(502), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [8838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_QMARK,
    ACTIONS(551), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(549), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_AT,
  [8862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_QMARK,
    ACTIONS(561), 1,
      anon_sym_SLASH,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(555), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_AT,
    ACTIONS(557), 5,
      anon_sym_DASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [8890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_QMARK,
    ACTIONS(565), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(563), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_AT,
  [8914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON_EQ,
    ACTIONS(519), 13,
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
  [8936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(567), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [8958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(227), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [8980] = 3,
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
  [9002] = 3,
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
  [9024] = 3,
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
  [9046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(583), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [9068] = 3,
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
  [9090] = 3,
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
  [9112] = 3,
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
  [9134] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_QMARK,
    ACTIONS(561), 1,
      anon_sym_SLASH,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(599), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(200), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [9190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(601), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [9212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_AT,
  [9234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 13,
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
  [9253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(502), 11,
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
  [9273] = 3,
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
  [9293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(555), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
  [9317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(549), 10,
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
  [9339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SLASH,
    ACTIONS(583), 11,
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
  [9359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SLASH,
    ACTIONS(601), 11,
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
  [9379] = 3,
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
  [9399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(563), 10,
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
  [9421] = 3,
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
  [9441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH,
    ACTIONS(605), 11,
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
  [9461] = 3,
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
  [9481] = 3,
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
  [9501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SLASH,
    ACTIONS(567), 11,
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
  [9521] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    ACTIONS(619), 1,
      anon_sym_STAR,
    ACTIONS(622), 1,
      sym__identifier,
    ACTIONS(625), 1,
      anon_sym_AT,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(178), 1,
      sym_children_identifier,
    STATE(218), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(362), 1,
      sym_var_identifier,
    ACTIONS(628), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9554] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(221), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(350), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9587] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      anon_sym_STAR,
    ACTIONS(642), 1,
      sym__identifier,
    ACTIONS(645), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(220), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(350), 1,
      sym_var_identifier,
    ACTIONS(648), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9620] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_children_identifier,
    STATE(220), 1,
      aux_sym_struct_field_declaration_list_repeat1,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(350), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9653] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    ACTIONS(655), 1,
      sym__identifier,
    ACTIONS(657), 1,
      anon_sym_AT,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(178), 1,
      sym_children_identifier,
    STATE(223), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(362), 1,
      sym_var_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9686] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      sym__identifier,
    ACTIONS(657), 1,
      anon_sym_AT,
    ACTIONS(659), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(178), 1,
      sym_children_identifier,
    STATE(218), 1,
      aux_sym_states_list_definition_repeat1,
    STATE(362), 1,
      sym_var_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9719] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(661), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_component_field_declaration_list,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9747] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(340), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9774] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(304), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9801] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      sym__identifier,
    ACTIONS(657), 1,
      anon_sym_AT,
    STATE(142), 1,
      sym_reference_identifier,
    STATE(178), 1,
      sym_children_identifier,
    STATE(293), 1,
      sym_var_identifier,
    ACTIONS(41), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9828] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(336), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9855] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(264), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9882] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(354), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9909] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(363), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9959] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(341), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [9986] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(633), 1,
      sym__identifier,
    ACTIONS(635), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_children_identifier,
    STATE(235), 1,
      sym_reference_identifier,
    STATE(342), 1,
      sym_var_identifier,
    ACTIONS(129), 3,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [10013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(667), 1,
      anon_sym_DOT,
    STATE(237), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(200), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [10033] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(669), 1,
      anon_sym_COLON,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(667), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(220), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [10075] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(673), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10119] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      anon_sym_COLON,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(679), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_var_identifier_repeat1,
    ACTIONS(212), 5,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [10183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(686), 1,
      anon_sym_SLASH,
    ACTIONS(684), 6,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [10201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SLASH,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(684), 6,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [10219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10263] = 3,
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
  [10278] = 3,
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
  [10293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(351), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [10308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_AT,
    ACTIONS(291), 4,
      sym__identifier,
      anon_sym_parent,
      anon_sym_root,
      anon_sym_this,
  [10323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_QMARK,
    ACTIONS(663), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__identifier,
    ACTIONS(704), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_post_identifier,
    STATE(179), 1,
      sym_function_call,
    STATE(291), 1,
      sym_function_identifier,
  [10361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(706), 1,
      sym__identifier,
    STATE(166), 1,
      sym_post_identifier,
    STATE(167), 1,
      sym_function_call,
    STATE(290), 1,
      sym_function_identifier,
  [10380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(708), 1,
      sym__identifier,
    STATE(43), 1,
      sym_function_call,
    STATE(44), 1,
      sym_post_identifier,
    STATE(290), 1,
      sym_function_identifier,
  [10399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(708), 1,
      sym__identifier,
    STATE(43), 1,
      sym_function_call,
    STATE(44), 1,
      sym_post_identifier,
    STATE(284), 1,
      sym_function_identifier,
  [10418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    ACTIONS(714), 1,
      anon_sym_DASH_GT,
    STATE(105), 1,
      sym_formal_parameters,
    STATE(305), 1,
      sym_call_signature,
  [10437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_list_definition_repeat1,
    STATE(292), 1,
      sym_struct_field_declaration_list,
  [10453] = 4,
    ACTIONS(721), 1,
      anon_sym_SQUOTE,
    ACTIONS(725), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym_string_repeat2,
    ACTIONS(723), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(727), 2,
      anon_sym_in,
      anon_sym_out,
  [10481] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(268), 1,
      aux_sym_string_repeat1,
    ACTIONS(733), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [10495] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      aux_sym_string_repeat2,
    ACTIONS(723), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10509] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
    STATE(261), 1,
      aux_sym_string_repeat2,
    ACTIONS(737), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10523] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_string_repeat1,
    ACTIONS(739), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [10537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_SEMI,
    STATE(344), 1,
      sym_property_expr,
    ACTIONS(743), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [10551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_list_definition_repeat1,
    STATE(292), 1,
      sym_struct_field_declaration_list,
  [10567] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      aux_sym_string_repeat2,
    ACTIONS(749), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(727), 2,
      anon_sym_in,
      anon_sym_out,
  [10595] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    STATE(268), 1,
      aux_sym_string_repeat1,
    ACTIONS(756), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [10609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [10619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_transitions_list_definition_repeat1,
    ACTIONS(761), 2,
      anon_sym_in,
      anon_sym_out,
  [10633] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_DQUOTE,
    STATE(274), 1,
      aux_sym_string_repeat1,
    ACTIONS(768), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [10647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_list_definition_repeat1,
    STATE(292), 1,
      sym_struct_field_declaration_list,
  [10663] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      aux_sym_string_repeat2,
    ACTIONS(772), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10677] = 4,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym_string_repeat1,
    ACTIONS(733), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [10691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      aux_sym_import_statement_repeat1,
  [10704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [10713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      aux_sym_import_statement_repeat1,
  [10726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_formal_parameters_repeat1,
  [10739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [10748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      sym_string,
  [10761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(331), 1,
      sym_string,
  [10774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_formal_parameters_repeat1,
  [10787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [10796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_formal_parameters,
    STATE(54), 1,
      sym_call_signature,
  [10809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_formal_parameters_repeat1,
  [10822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_formal_parameters_repeat1,
  [10835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      aux_sym_import_statement_repeat1,
  [10848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(356), 1,
      sym_string,
  [10861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_AT,
    ACTIONS(804), 1,
      sym__identifier,
    STATE(256), 1,
      sym_function_identifier,
  [10874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_formal_parameters,
    STATE(133), 1,
      sym_call_signature,
  [10887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_call_signature,
    STATE(181), 1,
      sym_formal_parameters,
  [10900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(808), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [10911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LBRACK,
    ACTIONS(814), 1,
      anon_sym_in,
    STATE(359), 1,
      sym_for_loop_index,
  [10924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [10937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      aux_sym_import_statement_repeat1,
  [10950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_formal_parameters_repeat1,
  [10963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_formal_parameters_repeat1,
  [10976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_formal_parameters_repeat1,
  [10989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_RBRACK,
  [10998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_component_field_declaration_list,
  [11008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_component_field_declaration_list,
  [11018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [11026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__identifier,
    ACTIONS(830), 1,
      anon_sym_children,
  [11036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_animate_declaration_list,
  [11046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SEMI,
    ACTIONS(836), 1,
      anon_sym_DASH_GT,
  [11056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    STATE(283), 1,
      sym_component_field_declaration_list,
  [11066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__identifier,
    ACTIONS(840), 1,
      anon_sym_children,
  [11076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__identifier,
    ACTIONS(842), 1,
      anon_sym_children,
  [11086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      aux_sym_color_token1,
    ACTIONS(846), 1,
      aux_sym_color_token2,
  [11096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_component_field_declaration_list,
  [11106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_states_list_definition,
  [11116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_transitions_list_definition,
  [11126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_component_field_declaration_list,
  [11136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_struct_field_declaration_list,
  [11146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_component_field_declaration_list,
  [11156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_struct_field_declaration_list,
  [11166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_component_field_declaration_list,
  [11192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_component_field_declaration_list,
  [11202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_color_token1,
    ACTIONS(854), 1,
      aux_sym_color_token2,
  [11212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_component_field_declaration_list,
  [11222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_component_field_declaration_list,
  [11232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_component_field_declaration_list,
  [11242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_component_field_declaration_list,
  [11252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_component_field_declaration_list,
  [11262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_component_field_declaration_list,
  [11272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_component_field_declaration_list,
  [11282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_component_field_declaration_list,
  [11292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_component_field_declaration_list,
  [11302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
  [11309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SEMI,
  [11316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_GT,
  [11323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__identifier,
  [11330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_from,
  [11337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_COLON,
  [11344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_children,
  [11351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_COLON,
  [11358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [11365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COLON_EQ,
  [11372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACK,
  [11379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_COLON,
  [11386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
  [11393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SEMI,
  [11400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_from,
  [11407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COLON_EQ,
  [11414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_from,
  [11421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COLON_EQ,
  [11428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_LT,
  [11435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_COLON,
  [11442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SEMI,
  [11449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [11456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_SEMI,
  [11463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COLON_EQ,
  [11470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_children,
  [11477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_SEMI,
  [11484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_GT,
  [11491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_GT,
  [11498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_in,
  [11505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_in,
  [11512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
  [11519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_when,
  [11526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_COLON,
  [11533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_EQ_GT,
  [11540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LBRACE,
  [11547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 223,
  [SMALL_STATE(5)] = 333,
  [SMALL_STATE(6)] = 443,
  [SMALL_STATE(7)] = 553,
  [SMALL_STATE(8)] = 663,
  [SMALL_STATE(9)] = 773,
  [SMALL_STATE(10)] = 883,
  [SMALL_STATE(11)] = 993,
  [SMALL_STATE(12)] = 1103,
  [SMALL_STATE(13)] = 1213,
  [SMALL_STATE(14)] = 1320,
  [SMALL_STATE(15)] = 1424,
  [SMALL_STATE(16)] = 1528,
  [SMALL_STATE(17)] = 1632,
  [SMALL_STATE(18)] = 1736,
  [SMALL_STATE(19)] = 1842,
  [SMALL_STATE(20)] = 1946,
  [SMALL_STATE(21)] = 2050,
  [SMALL_STATE(22)] = 2154,
  [SMALL_STATE(23)] = 2258,
  [SMALL_STATE(24)] = 2364,
  [SMALL_STATE(25)] = 2468,
  [SMALL_STATE(26)] = 2572,
  [SMALL_STATE(27)] = 2676,
  [SMALL_STATE(28)] = 2780,
  [SMALL_STATE(29)] = 2884,
  [SMALL_STATE(30)] = 2988,
  [SMALL_STATE(31)] = 3092,
  [SMALL_STATE(32)] = 3193,
  [SMALL_STATE(33)] = 3294,
  [SMALL_STATE(34)] = 3395,
  [SMALL_STATE(35)] = 3496,
  [SMALL_STATE(36)] = 3597,
  [SMALL_STATE(37)] = 3698,
  [SMALL_STATE(38)] = 3799,
  [SMALL_STATE(39)] = 3900,
  [SMALL_STATE(40)] = 4001,
  [SMALL_STATE(41)] = 4052,
  [SMALL_STATE(42)] = 4111,
  [SMALL_STATE(43)] = 4159,
  [SMALL_STATE(44)] = 4207,
  [SMALL_STATE(45)] = 4255,
  [SMALL_STATE(46)] = 4306,
  [SMALL_STATE(47)] = 4353,
  [SMALL_STATE(48)] = 4400,
  [SMALL_STATE(49)] = 4451,
  [SMALL_STATE(50)] = 4502,
  [SMALL_STATE(51)] = 4549,
  [SMALL_STATE(52)] = 4595,
  [SMALL_STATE(53)] = 4641,
  [SMALL_STATE(54)] = 4687,
  [SMALL_STATE(55)] = 4733,
  [SMALL_STATE(56)] = 4779,
  [SMALL_STATE(57)] = 4825,
  [SMALL_STATE(58)] = 4876,
  [SMALL_STATE(59)] = 4914,
  [SMALL_STATE(60)] = 4952,
  [SMALL_STATE(61)] = 4990,
  [SMALL_STATE(62)] = 5028,
  [SMALL_STATE(63)] = 5066,
  [SMALL_STATE(64)] = 5104,
  [SMALL_STATE(65)] = 5142,
  [SMALL_STATE(66)] = 5180,
  [SMALL_STATE(67)] = 5218,
  [SMALL_STATE(68)] = 5256,
  [SMALL_STATE(69)] = 5294,
  [SMALL_STATE(70)] = 5332,
  [SMALL_STATE(71)] = 5370,
  [SMALL_STATE(72)] = 5408,
  [SMALL_STATE(73)] = 5446,
  [SMALL_STATE(74)] = 5484,
  [SMALL_STATE(75)] = 5522,
  [SMALL_STATE(76)] = 5560,
  [SMALL_STATE(77)] = 5598,
  [SMALL_STATE(78)] = 5636,
  [SMALL_STATE(79)] = 5674,
  [SMALL_STATE(80)] = 5712,
  [SMALL_STATE(81)] = 5768,
  [SMALL_STATE(82)] = 5824,
  [SMALL_STATE(83)] = 5862,
  [SMALL_STATE(84)] = 5900,
  [SMALL_STATE(85)] = 5938,
  [SMALL_STATE(86)] = 5976,
  [SMALL_STATE(87)] = 6014,
  [SMALL_STATE(88)] = 6052,
  [SMALL_STATE(89)] = 6090,
  [SMALL_STATE(90)] = 6128,
  [SMALL_STATE(91)] = 6166,
  [SMALL_STATE(92)] = 6204,
  [SMALL_STATE(93)] = 6242,
  [SMALL_STATE(94)] = 6272,
  [SMALL_STATE(95)] = 6302,
  [SMALL_STATE(96)] = 6331,
  [SMALL_STATE(97)] = 6359,
  [SMALL_STATE(98)] = 6387,
  [SMALL_STATE(99)] = 6425,
  [SMALL_STATE(100)] = 6453,
  [SMALL_STATE(101)] = 6491,
  [SMALL_STATE(102)] = 6519,
  [SMALL_STATE(103)] = 6547,
  [SMALL_STATE(104)] = 6585,
  [SMALL_STATE(105)] = 6623,
  [SMALL_STATE(106)] = 6651,
  [SMALL_STATE(107)] = 6686,
  [SMALL_STATE(108)] = 6719,
  [SMALL_STATE(109)] = 6746,
  [SMALL_STATE(110)] = 6773,
  [SMALL_STATE(111)] = 6800,
  [SMALL_STATE(112)] = 6827,
  [SMALL_STATE(113)] = 6854,
  [SMALL_STATE(114)] = 6881,
  [SMALL_STATE(115)] = 6916,
  [SMALL_STATE(116)] = 6943,
  [SMALL_STATE(117)] = 6970,
  [SMALL_STATE(118)] = 6997,
  [SMALL_STATE(119)] = 7032,
  [SMALL_STATE(120)] = 7067,
  [SMALL_STATE(121)] = 7094,
  [SMALL_STATE(122)] = 7121,
  [SMALL_STATE(123)] = 7148,
  [SMALL_STATE(124)] = 7175,
  [SMALL_STATE(125)] = 7202,
  [SMALL_STATE(126)] = 7229,
  [SMALL_STATE(127)] = 7264,
  [SMALL_STATE(128)] = 7291,
  [SMALL_STATE(129)] = 7318,
  [SMALL_STATE(130)] = 7345,
  [SMALL_STATE(131)] = 7372,
  [SMALL_STATE(132)] = 7399,
  [SMALL_STATE(133)] = 7426,
  [SMALL_STATE(134)] = 7453,
  [SMALL_STATE(135)] = 7485,
  [SMALL_STATE(136)] = 7517,
  [SMALL_STATE(137)] = 7549,
  [SMALL_STATE(138)] = 7574,
  [SMALL_STATE(139)] = 7605,
  [SMALL_STATE(140)] = 7634,
  [SMALL_STATE(141)] = 7661,
  [SMALL_STATE(142)] = 7690,
  [SMALL_STATE(143)] = 7719,
  [SMALL_STATE(144)] = 7746,
  [SMALL_STATE(145)] = 7775,
  [SMALL_STATE(146)] = 7804,
  [SMALL_STATE(147)] = 7833,
  [SMALL_STATE(148)] = 7861,
  [SMALL_STATE(149)] = 7887,
  [SMALL_STATE(150)] = 7913,
  [SMALL_STATE(151)] = 7941,
  [SMALL_STATE(152)] = 7969,
  [SMALL_STATE(153)] = 7995,
  [SMALL_STATE(154)] = 8021,
  [SMALL_STATE(155)] = 8047,
  [SMALL_STATE(156)] = 8073,
  [SMALL_STATE(157)] = 8099,
  [SMALL_STATE(158)] = 8125,
  [SMALL_STATE(159)] = 8151,
  [SMALL_STATE(160)] = 8177,
  [SMALL_STATE(161)] = 8203,
  [SMALL_STATE(162)] = 8229,
  [SMALL_STATE(163)] = 8255,
  [SMALL_STATE(164)] = 8281,
  [SMALL_STATE(165)] = 8309,
  [SMALL_STATE(166)] = 8335,
  [SMALL_STATE(167)] = 8359,
  [SMALL_STATE(168)] = 8383,
  [SMALL_STATE(169)] = 8407,
  [SMALL_STATE(170)] = 8434,
  [SMALL_STATE(171)] = 8457,
  [SMALL_STATE(172)] = 8480,
  [SMALL_STATE(173)] = 8509,
  [SMALL_STATE(174)] = 8532,
  [SMALL_STATE(175)] = 8555,
  [SMALL_STATE(176)] = 8578,
  [SMALL_STATE(177)] = 8605,
  [SMALL_STATE(178)] = 8628,
  [SMALL_STATE(179)] = 8651,
  [SMALL_STATE(180)] = 8674,
  [SMALL_STATE(181)] = 8697,
  [SMALL_STATE(182)] = 8720,
  [SMALL_STATE(183)] = 8743,
  [SMALL_STATE(184)] = 8766,
  [SMALL_STATE(185)] = 8793,
  [SMALL_STATE(186)] = 8816,
  [SMALL_STATE(187)] = 8838,
  [SMALL_STATE(188)] = 8862,
  [SMALL_STATE(189)] = 8890,
  [SMALL_STATE(190)] = 8914,
  [SMALL_STATE(191)] = 8936,
  [SMALL_STATE(192)] = 8958,
  [SMALL_STATE(193)] = 8980,
  [SMALL_STATE(194)] = 9002,
  [SMALL_STATE(195)] = 9024,
  [SMALL_STATE(196)] = 9046,
  [SMALL_STATE(197)] = 9068,
  [SMALL_STATE(198)] = 9090,
  [SMALL_STATE(199)] = 9112,
  [SMALL_STATE(200)] = 9134,
  [SMALL_STATE(201)] = 9168,
  [SMALL_STATE(202)] = 9190,
  [SMALL_STATE(203)] = 9212,
  [SMALL_STATE(204)] = 9234,
  [SMALL_STATE(205)] = 9253,
  [SMALL_STATE(206)] = 9273,
  [SMALL_STATE(207)] = 9293,
  [SMALL_STATE(208)] = 9317,
  [SMALL_STATE(209)] = 9339,
  [SMALL_STATE(210)] = 9359,
  [SMALL_STATE(211)] = 9379,
  [SMALL_STATE(212)] = 9399,
  [SMALL_STATE(213)] = 9421,
  [SMALL_STATE(214)] = 9441,
  [SMALL_STATE(215)] = 9461,
  [SMALL_STATE(216)] = 9481,
  [SMALL_STATE(217)] = 9501,
  [SMALL_STATE(218)] = 9521,
  [SMALL_STATE(219)] = 9554,
  [SMALL_STATE(220)] = 9587,
  [SMALL_STATE(221)] = 9620,
  [SMALL_STATE(222)] = 9653,
  [SMALL_STATE(223)] = 9686,
  [SMALL_STATE(224)] = 9719,
  [SMALL_STATE(225)] = 9747,
  [SMALL_STATE(226)] = 9774,
  [SMALL_STATE(227)] = 9801,
  [SMALL_STATE(228)] = 9828,
  [SMALL_STATE(229)] = 9855,
  [SMALL_STATE(230)] = 9882,
  [SMALL_STATE(231)] = 9909,
  [SMALL_STATE(232)] = 9936,
  [SMALL_STATE(233)] = 9959,
  [SMALL_STATE(234)] = 9986,
  [SMALL_STATE(235)] = 10013,
  [SMALL_STATE(236)] = 10033,
  [SMALL_STATE(237)] = 10055,
  [SMALL_STATE(238)] = 10075,
  [SMALL_STATE(239)] = 10097,
  [SMALL_STATE(240)] = 10119,
  [SMALL_STATE(241)] = 10141,
  [SMALL_STATE(242)] = 10163,
  [SMALL_STATE(243)] = 10183,
  [SMALL_STATE(244)] = 10201,
  [SMALL_STATE(245)] = 10219,
  [SMALL_STATE(246)] = 10241,
  [SMALL_STATE(247)] = 10263,
  [SMALL_STATE(248)] = 10278,
  [SMALL_STATE(249)] = 10293,
  [SMALL_STATE(250)] = 10308,
  [SMALL_STATE(251)] = 10323,
  [SMALL_STATE(252)] = 10342,
  [SMALL_STATE(253)] = 10361,
  [SMALL_STATE(254)] = 10380,
  [SMALL_STATE(255)] = 10399,
  [SMALL_STATE(256)] = 10418,
  [SMALL_STATE(257)] = 10437,
  [SMALL_STATE(258)] = 10453,
  [SMALL_STATE(259)] = 10467,
  [SMALL_STATE(260)] = 10481,
  [SMALL_STATE(261)] = 10495,
  [SMALL_STATE(262)] = 10509,
  [SMALL_STATE(263)] = 10523,
  [SMALL_STATE(264)] = 10537,
  [SMALL_STATE(265)] = 10551,
  [SMALL_STATE(266)] = 10567,
  [SMALL_STATE(267)] = 10581,
  [SMALL_STATE(268)] = 10595,
  [SMALL_STATE(269)] = 10609,
  [SMALL_STATE(270)] = 10619,
  [SMALL_STATE(271)] = 10633,
  [SMALL_STATE(272)] = 10647,
  [SMALL_STATE(273)] = 10663,
  [SMALL_STATE(274)] = 10677,
  [SMALL_STATE(275)] = 10691,
  [SMALL_STATE(276)] = 10704,
  [SMALL_STATE(277)] = 10713,
  [SMALL_STATE(278)] = 10726,
  [SMALL_STATE(279)] = 10739,
  [SMALL_STATE(280)] = 10748,
  [SMALL_STATE(281)] = 10761,
  [SMALL_STATE(282)] = 10774,
  [SMALL_STATE(283)] = 10787,
  [SMALL_STATE(284)] = 10796,
  [SMALL_STATE(285)] = 10809,
  [SMALL_STATE(286)] = 10822,
  [SMALL_STATE(287)] = 10835,
  [SMALL_STATE(288)] = 10848,
  [SMALL_STATE(289)] = 10861,
  [SMALL_STATE(290)] = 10874,
  [SMALL_STATE(291)] = 10887,
  [SMALL_STATE(292)] = 10900,
  [SMALL_STATE(293)] = 10911,
  [SMALL_STATE(294)] = 10924,
  [SMALL_STATE(295)] = 10937,
  [SMALL_STATE(296)] = 10950,
  [SMALL_STATE(297)] = 10963,
  [SMALL_STATE(298)] = 10976,
  [SMALL_STATE(299)] = 10989,
  [SMALL_STATE(300)] = 10998,
  [SMALL_STATE(301)] = 11008,
  [SMALL_STATE(302)] = 11018,
  [SMALL_STATE(303)] = 11026,
  [SMALL_STATE(304)] = 11036,
  [SMALL_STATE(305)] = 11046,
  [SMALL_STATE(306)] = 11056,
  [SMALL_STATE(307)] = 11066,
  [SMALL_STATE(308)] = 11076,
  [SMALL_STATE(309)] = 11086,
  [SMALL_STATE(310)] = 11096,
  [SMALL_STATE(311)] = 11106,
  [SMALL_STATE(312)] = 11116,
  [SMALL_STATE(313)] = 11126,
  [SMALL_STATE(314)] = 11136,
  [SMALL_STATE(315)] = 11146,
  [SMALL_STATE(316)] = 11156,
  [SMALL_STATE(317)] = 11166,
  [SMALL_STATE(318)] = 11174,
  [SMALL_STATE(319)] = 11182,
  [SMALL_STATE(320)] = 11192,
  [SMALL_STATE(321)] = 11202,
  [SMALL_STATE(322)] = 11212,
  [SMALL_STATE(323)] = 11222,
  [SMALL_STATE(324)] = 11232,
  [SMALL_STATE(325)] = 11242,
  [SMALL_STATE(326)] = 11252,
  [SMALL_STATE(327)] = 11262,
  [SMALL_STATE(328)] = 11272,
  [SMALL_STATE(329)] = 11282,
  [SMALL_STATE(330)] = 11292,
  [SMALL_STATE(331)] = 11302,
  [SMALL_STATE(332)] = 11309,
  [SMALL_STATE(333)] = 11316,
  [SMALL_STATE(334)] = 11323,
  [SMALL_STATE(335)] = 11330,
  [SMALL_STATE(336)] = 11337,
  [SMALL_STATE(337)] = 11344,
  [SMALL_STATE(338)] = 11351,
  [SMALL_STATE(339)] = 11358,
  [SMALL_STATE(340)] = 11365,
  [SMALL_STATE(341)] = 11372,
  [SMALL_STATE(342)] = 11379,
  [SMALL_STATE(343)] = 11386,
  [SMALL_STATE(344)] = 11393,
  [SMALL_STATE(345)] = 11400,
  [SMALL_STATE(346)] = 11407,
  [SMALL_STATE(347)] = 11414,
  [SMALL_STATE(348)] = 11421,
  [SMALL_STATE(349)] = 11428,
  [SMALL_STATE(350)] = 11435,
  [SMALL_STATE(351)] = 11442,
  [SMALL_STATE(352)] = 11449,
  [SMALL_STATE(353)] = 11456,
  [SMALL_STATE(354)] = 11463,
  [SMALL_STATE(355)] = 11470,
  [SMALL_STATE(356)] = 11477,
  [SMALL_STATE(357)] = 11484,
  [SMALL_STATE(358)] = 11491,
  [SMALL_STATE(359)] = 11498,
  [SMALL_STATE(360)] = 11505,
  [SMALL_STATE(361)] = 11512,
  [SMALL_STATE(362)] = 11519,
  [SMALL_STATE(363)] = 11526,
  [SMALL_STATE(364)] = 11533,
  [SMALL_STATE(365)] = 11540,
  [SMALL_STATE(366)] = 11547,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(148),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(190),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(312),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(311),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(226),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(227),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(349),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(50),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(289),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(41),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(307),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(42),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 2), SHIFT_REPEAT(95),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_identifier, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type_identifier, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_identifier, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_identifier, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_identifier_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_identifier, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children_identifier, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(255),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_identifier, 1, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_signature, 1, .production_id = 10),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_signature, 1, .production_id = 10),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 9),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_parameters, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_field_declaration_list_repeat1, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 8),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 4, .production_id = 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 3, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 2, .production_id = 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_set_equal, 4, .production_id = 18),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_set_equal, 4, .production_id = 18),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 7, .production_id = 20),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 7, .production_id = 20),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_definition, 7),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_definition, 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_statement, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_statement, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 6),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 6, .production_id = 20),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 6, .production_id = 20),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 17),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 17),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_event, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_event, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_field_declaration_list, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_field_declaration_list, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_call, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_call, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_list_definition, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_list_definition, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_list_definition, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_list_definition, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animate_declaration_list, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_animate_declaration_list, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 5),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 5),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transitions_definition, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transitions_definition, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_definition, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_definition, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 5, .production_id = 11),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_definition, 5, .production_id = 11),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement_definition, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement_definition, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 14),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 3, .production_id = 14),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_declaration_list, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_declaration_list, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_identifier, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type_identifier, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, .production_id = 16),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, .production_id = 16),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 11),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_definition, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, .production_id = 12),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, .production_id = 12),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(253),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifier, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(252),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 2), SHIFT_REPEAT(95),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_binary_expression, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_binary_expression, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_binary_expression, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_binary_expression, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body_paren, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_body_paren, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_constant, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_constant, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_with_units, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_with_units, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 17),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 3, .production_id = 17),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_type, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animate_declaration_list_repeat1, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(173),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(142),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(337),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 2), SHIFT_REPEAT(168),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(50),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(235),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(355),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(42),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_identifier_repeat1, 2), SHIFT_REPEAT(254),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expr, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_list_definition_repeat1, 5),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_states_list_definition_repeat1, 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 17),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_field_declaration_list_repeat1, 4, .production_id = 17),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2), SHIFT_REPEAT(219),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(266),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(268),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2), SHIFT_REPEAT(228),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transitions_list_definition_repeat1, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(154),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_definition_repeat1, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_type_list, 3, .production_id = 19),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_definition, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__propterty_kind, 1, .production_id = 13),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_index, 3),
  [916] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
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
