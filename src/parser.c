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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 5
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_LBRACE = 1,
  anon_sym_as = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  anon_sym_global = 5,
  anon_sym_COLON_EQ = 6,
  anon_sym_import = 7,
  anon_sym_from = 8,
  anon_sym_SEMI = 9,
  anon_sym_if = 10,
  anon_sym_COLON = 11,
  anon_sym_callback = 12,
  anon_sym_DASH_GT = 13,
  anon_sym_LT_EQ_GT = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_EQ_GT = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_EQ = 22,
  anon_sym_property = 23,
  anon_sym_LT = 24,
  anon_sym_GT = 25,
  anon_sym_DOT = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_BANG = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_PIPE_PIPE = 31,
  anon_sym_AMP = 32,
  anon_sym_PIPE = 33,
  anon_sym_CARET = 34,
  anon_sym_EQ_EQ = 35,
  anon_sym_BANG_EQ = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_LT_LT = 39,
  anon_sym_GT_GT = 40,
  anon_sym_QMARK = 41,
  anon_sym_DQUOTE = 42,
  anon_sym_SQUOTE = 43,
  sym__unescaped_double_string_fragment = 44,
  sym__unescaped_single_string_fragment = 45,
  sym_escape_sequence = 46,
  sym_vis = 47,
  sym_identifier = 48,
  anon_sym_POUND = 49,
  aux_sym_color_literal_token1 = 50,
  aux_sym_color_literal_token2 = 51,
  aux_sym_color_literal_token3 = 52,
  sym_int_literal = 53,
  sym_float_literal = 54,
  anon_sym_px = 55,
  anon_sym_ms = 56,
  anon_sym_PERCENT = 57,
  anon_sym_black = 58,
  anon_sym_blue = 59,
  anon_sym_ease = 60,
  anon_sym_ease_DASHin = 61,
  anon_sym_ease_in = 62,
  anon_sym_ease_in_out = 63,
  anon_sym_ease_DASHin_DASHout = 64,
  anon_sym_ease_out = 65,
  anon_sym_ease_DASHout = 66,
  anon_sym_end = 67,
  anon_sym_green = 68,
  anon_sym_red = 69,
  anon_sym_start = 70,
  anon_sym_yellow = 71,
  anon_sym_transparent = 72,
  anon_sym_angle = 73,
  anon_sym_bool = 74,
  anon_sym_brush = 75,
  anon_sym_duration = 76,
  anon_sym_easing = 77,
  anon_sym_float = 78,
  anon_sym_image = 79,
  anon_sym_int = 80,
  anon_sym_length = 81,
  anon_sym_percent = 82,
  anon_sym_physical_DASHlength = 83,
  anon_sym_physical_length = 84,
  anon_sym_string = 85,
  sym_comment = 86,
  sym_source_file = 87,
  sym__item = 88,
  sym_export_statement = 89,
  sym_global_single = 90,
  sym_import_statement = 91,
  sym_component_item = 92,
  sym__conditional_element = 93,
  sym__component_body = 94,
  sym__property = 95,
  sym_call_back_definition = 96,
  sym_call_back_parameters = 97,
  sym_call_back_handler = 98,
  sym_handler_body = 99,
  sym__statement = 100,
  sym_assign_statement = 101,
  sym_two_way_property = 102,
  sym_define_assign_property = 103,
  sym__define_property = 104,
  sym__assign_property = 105,
  sym__expression = 106,
  sym_function_call = 107,
  sym_function_call_args = 108,
  sym__scoped_identifier = 109,
  sym_scoped_identifiers = 110,
  sym_bool_literal = 111,
  sym_unary_expression = 112,
  sym_binary_expression = 113,
  sym_ternary_expression = 114,
  sym__literal = 115,
  sym_string_literal = 116,
  sym_color_literal = 117,
  sym__number = 118,
  sym_units = 119,
  sym__type_identifier = 120,
  sym__function_identifier = 121,
  aux_sym_source_file_repeat1 = 122,
  aux_sym_export_statement_repeat1 = 123,
  aux_sym_import_statement_repeat1 = 124,
  aux_sym__component_body_repeat1 = 125,
  aux_sym_call_back_parameters_repeat1 = 126,
  aux_sym_function_call_args_repeat1 = 127,
  aux_sym_scoped_identifiers_repeat1 = 128,
  aux_sym_string_literal_repeat1 = 129,
  aux_sym_string_literal_repeat2 = 130,
  alias_sym_assign_property = 131,
  alias_sym_comp_body = 132,
  alias_sym_define_property = 133,
  alias_sym_function_identifier = 134,
  alias_sym_type_identifier = 135,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_as] = "as",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_global] = "global",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_COLON] = ":",
  [anon_sym_callback] = "callback",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_property] = "property",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym__unescaped_double_string_fragment] = "_unescaped_double_string_fragment",
  [sym__unescaped_single_string_fragment] = "_unescaped_single_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_vis] = "vis",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [aux_sym_color_literal_token1] = "color_literal_token1",
  [aux_sym_color_literal_token2] = "color_literal_token2",
  [aux_sym_color_literal_token3] = "color_literal_token3",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_px] = "px",
  [anon_sym_ms] = "ms",
  [anon_sym_PERCENT] = "%",
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
  [sym__item] = "_item",
  [sym_export_statement] = "export_statement",
  [sym_global_single] = "global_single",
  [sym_import_statement] = "import_statement",
  [sym_component_item] = "component_item",
  [sym__conditional_element] = "_conditional_element",
  [sym__component_body] = "_component_body",
  [sym__property] = "_property",
  [sym_call_back_definition] = "call_back_definition",
  [sym_call_back_parameters] = "call_back_parameters",
  [sym_call_back_handler] = "call_back_handler",
  [sym_handler_body] = "handler_body",
  [sym__statement] = "_statement",
  [sym_assign_statement] = "assign_statement",
  [sym_two_way_property] = "two_way_property",
  [sym_define_assign_property] = "define_assign_property",
  [sym__define_property] = "_define_property",
  [sym__assign_property] = "_assign_property",
  [sym__expression] = "_expression",
  [sym_function_call] = "function_call",
  [sym_function_call_args] = "function_call_args",
  [sym__scoped_identifier] = "_scoped_identifier",
  [sym_scoped_identifiers] = "scoped_identifiers",
  [sym_bool_literal] = "bool_literal",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_color_literal] = "color_literal",
  [sym__number] = "_number",
  [sym_units] = "units",
  [sym__type_identifier] = "_type_identifier",
  [sym__function_identifier] = "_function_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_export_statement_repeat1] = "export_statement_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym__component_body_repeat1] = "_component_body_repeat1",
  [aux_sym_call_back_parameters_repeat1] = "call_back_parameters_repeat1",
  [aux_sym_function_call_args_repeat1] = "function_call_args_repeat1",
  [aux_sym_scoped_identifiers_repeat1] = "scoped_identifiers_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
  [alias_sym_assign_property] = "assign_property",
  [alias_sym_comp_body] = "comp_body",
  [alias_sym_define_property] = "define_property",
  [alias_sym_function_identifier] = "function_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_callback] = anon_sym_callback,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__unescaped_double_string_fragment] = sym__unescaped_double_string_fragment,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_vis] = sym_vis,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_color_literal_token1] = aux_sym_color_literal_token1,
  [aux_sym_color_literal_token2] = aux_sym_color_literal_token2,
  [aux_sym_color_literal_token3] = aux_sym_color_literal_token3,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_px] = anon_sym_px,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [sym__item] = sym__item,
  [sym_export_statement] = sym_export_statement,
  [sym_global_single] = sym_global_single,
  [sym_import_statement] = sym_import_statement,
  [sym_component_item] = sym_component_item,
  [sym__conditional_element] = sym__conditional_element,
  [sym__component_body] = sym__component_body,
  [sym__property] = sym__property,
  [sym_call_back_definition] = sym_call_back_definition,
  [sym_call_back_parameters] = sym_call_back_parameters,
  [sym_call_back_handler] = sym_call_back_handler,
  [sym_handler_body] = sym_handler_body,
  [sym__statement] = sym__statement,
  [sym_assign_statement] = sym_assign_statement,
  [sym_two_way_property] = sym_two_way_property,
  [sym_define_assign_property] = sym_define_assign_property,
  [sym__define_property] = sym__define_property,
  [sym__assign_property] = sym__assign_property,
  [sym__expression] = sym__expression,
  [sym_function_call] = sym_function_call,
  [sym_function_call_args] = sym_function_call_args,
  [sym__scoped_identifier] = sym__scoped_identifier,
  [sym_scoped_identifiers] = sym_scoped_identifiers,
  [sym_bool_literal] = sym_bool_literal,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_color_literal] = sym_color_literal,
  [sym__number] = sym__number,
  [sym_units] = sym_units,
  [sym__type_identifier] = sym__type_identifier,
  [sym__function_identifier] = sym__function_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_export_statement_repeat1] = aux_sym_export_statement_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym__component_body_repeat1] = aux_sym__component_body_repeat1,
  [aux_sym_call_back_parameters_repeat1] = aux_sym_call_back_parameters_repeat1,
  [aux_sym_function_call_args_repeat1] = aux_sym_function_call_args_repeat1,
  [aux_sym_scoped_identifiers_repeat1] = aux_sym_scoped_identifiers_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
  [alias_sym_assign_property] = alias_sym_assign_property,
  [alias_sym_comp_body] = alias_sym_comp_body,
  [alias_sym_define_property] = alias_sym_define_property,
  [alias_sym_function_identifier] = alias_sym_function_identifier,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
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
  [anon_sym_from] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_LT_EQ_GT] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_EQ] = {
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
  [anon_sym_DOT] = {
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
  [anon_sym_BANG] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [sym__unescaped_double_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_vis] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_px] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
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
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_export_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_global_single] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_component_item] = {
    .visible = true,
    .named = true,
  },
  [sym__conditional_element] = {
    .visible = false,
    .named = true,
  },
  [sym__component_body] = {
    .visible = false,
    .named = true,
  },
  [sym__property] = {
    .visible = false,
    .named = true,
  },
  [sym_call_back_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_call_back_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_call_back_handler] = {
    .visible = true,
    .named = true,
  },
  [sym_handler_body] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assign_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_two_way_property] = {
    .visible = true,
    .named = true,
  },
  [sym_define_assign_property] = {
    .visible = true,
    .named = true,
  },
  [sym__define_property] = {
    .visible = false,
    .named = true,
  },
  [sym__assign_property] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_args] = {
    .visible = true,
    .named = true,
  },
  [sym__scoped_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_scoped_identifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_color_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_units] = {
    .visible = true,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__function_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__component_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_back_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scoped_identifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_assign_property] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_comp_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_define_property] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alias = 1,
  field_left = 2,
  field_operator = 3,
  field_return_type = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_return_type] = "return_type",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [6] = {.index = 0, .length = 3},
  [11] = {.index = 3, .length = 1},
  [12] = {.index = 4, .length = 1},
  [13] = {.index = 5, .length = 1},
  [14] = {.index = 6, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_return_type, 3},
  [4] =
    {field_alias, 3},
  [5] =
    {field_return_type, 4},
  [6] =
    {field_alias, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [2] = {
    [1] = alias_sym_comp_body,
  },
  [3] = {
    [2] = alias_sym_comp_body,
  },
  [4] = {
    [0] = alias_sym_function_identifier,
  },
  [5] = {
    [0] = alias_sym_assign_property,
  },
  [7] = {
    [3] = alias_sym_comp_body,
  },
  [8] = {
    [0] = alias_sym_define_property,
  },
  [9] = {
    [4] = alias_sym_comp_body,
  },
  [10] = {
    [5] = alias_sym_comp_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__component_body, 2,
    sym__component_body,
    alias_sym_comp_body,
  sym__define_property, 2,
    sym__define_property,
    alias_sym_define_property,
  sym__assign_property, 2,
    sym__assign_property,
    alias_sym_assign_property,
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
  [58] = 57,
  [59] = 56,
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
  [94] = 85,
  [95] = 83,
  [96] = 64,
  [97] = 84,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 82,
  [104] = 86,
  [105] = 79,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 135,
  [139] = 139,
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
  [150] = 134,
  [151] = 151,
  [152] = 136,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 158,
  [168] = 159,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 161,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 165,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 162,
  [186] = 186,
  [187] = 160,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 163,
  [193] = 193,
  [194] = 194,
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
  [205] = 205,
  [206] = 206,
  [207] = 207,
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
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2741
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2741
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(192);
      if (lookahead == '!') ADVANCE(234);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '&') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '>') ADVANCE(227);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '\\') SKIP(188)
      if (lookahead == '^') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'y') ADVANCE(57);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '\r') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(184);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '&') ADVANCE(237);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(227);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(293);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(349);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(224);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(210);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(211);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(317);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(343);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(346);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(320);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(208);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 170:
      if (lookahead == 'w') ADVANCE(333);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(317);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 174:
      if (lookahead == '{') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 175:
      if (lookahead == '}') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(349);
      if (lookahead == '\r') ADVANCE(350);
      END_STATE();
    case 187:
      if (eof) ADVANCE(192);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 188:
      if (eof) ADVANCE(192);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(187)
      END_STATE();
    case 189:
      if (eof) ADVANCE(192);
      if (lookahead == '\n') SKIP(191)
      END_STATE();
    case 190:
      if (eof) ADVANCE(192);
      if (lookahead == '\n') SKIP(191)
      if (lookahead == '\r') SKIP(189)
      END_STATE();
    case 191:
      if (eof) ADVANCE(192);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '&') ADVANCE(237);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == '>') ADVANCE(227);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '\\') SKIP(190)
      if (lookahead == '^') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(302);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_global);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_callback);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(210);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(349);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(240);
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_property);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(245);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(245);
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '>') ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(235);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(236);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(211);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '/') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_vis);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_vis);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(271);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(302);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(279);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(302);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(280);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(302);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(281);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(302);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(266);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(265);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(277);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(289);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(205);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(209);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(283);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(295);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(282);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(270);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(290);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(288);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(292);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(284);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(274);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(286);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(296);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(299);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(297);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(285);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(273);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(272);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(287);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(223);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_color_literal_token1);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_color_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_color_literal_token2);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_color_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_color_literal_token3);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_color_literal_token3);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_physical_length);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(186);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 191},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 191},
  [5] = {.lex_state = 191},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 191},
  [26] = {.lex_state = 191},
  [27] = {.lex_state = 191},
  [28] = {.lex_state = 191},
  [29] = {.lex_state = 191},
  [30] = {.lex_state = 191},
  [31] = {.lex_state = 191},
  [32] = {.lex_state = 191},
  [33] = {.lex_state = 191},
  [34] = {.lex_state = 191},
  [35] = {.lex_state = 191},
  [36] = {.lex_state = 191},
  [37] = {.lex_state = 191},
  [38] = {.lex_state = 191},
  [39] = {.lex_state = 191},
  [40] = {.lex_state = 191},
  [41] = {.lex_state = 191},
  [42] = {.lex_state = 191},
  [43] = {.lex_state = 191},
  [44] = {.lex_state = 191},
  [45] = {.lex_state = 191},
  [46] = {.lex_state = 191},
  [47] = {.lex_state = 191},
  [48] = {.lex_state = 191},
  [49] = {.lex_state = 191},
  [50] = {.lex_state = 191},
  [51] = {.lex_state = 191},
  [52] = {.lex_state = 191},
  [53] = {.lex_state = 191},
  [54] = {.lex_state = 191},
  [55] = {.lex_state = 191},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 191},
  [62] = {.lex_state = 191},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 191},
  [89] = {.lex_state = 191},
  [90] = {.lex_state = 191},
  [91] = {.lex_state = 191},
  [92] = {.lex_state = 191},
  [93] = {.lex_state = 191},
  [94] = {.lex_state = 191},
  [95] = {.lex_state = 191},
  [96] = {.lex_state = 191},
  [97] = {.lex_state = 191},
  [98] = {.lex_state = 191},
  [99] = {.lex_state = 191},
  [100] = {.lex_state = 191},
  [101] = {.lex_state = 191},
  [102] = {.lex_state = 191},
  [103] = {.lex_state = 191},
  [104] = {.lex_state = 191},
  [105] = {.lex_state = 191},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 18},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 21},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 28},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 21},
  [163] = {.lex_state = 21},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 28},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 26},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 21},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 21},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 21},
  [192] = {.lex_state = 21},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 191},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 21},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_callback] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_vis] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_color_literal_token1] = ACTIONS(1),
    [aux_sym_color_literal_token2] = ACTIONS(1),
    [aux_sym_color_literal_token3] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_px] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [anon_sym_transparent] = ACTIONS(1),
    [anon_sym_angle] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_brush] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_easing] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_percent] = ACTIONS(1),
    [anon_sym_physical_DASHlength] = ACTIONS(1),
    [anon_sym_physical_length] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(198),
    [sym__item] = STATE(61),
    [sym_export_statement] = STATE(61),
    [sym_global_single] = STATE(61),
    [sym_import_statement] = STATE(61),
    [sym_component_item] = STATE(61),
    [sym__conditional_element] = STATE(156),
    [sym__type_identifier] = STATE(138),
    [aux_sym_source_file_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_global] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [sym_vis] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym__scoped_identifier,
      sym_scoped_identifiers,
    STATE(173), 2,
      sym__statement,
      sym_assign_statement,
    STATE(49), 10,
      sym__expression,
      sym_function_call,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [62] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym_units,
    ACTIONS(41), 3,
      anon_sym_px,
      anon_sym_ms,
      anon_sym_PERCENT,
    ACTIONS(39), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(37), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [101] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_function_call_args,
    ACTIONS(47), 6,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(43), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 6,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(51), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [177] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [230] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [280] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [330] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [380] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [430] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [480] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [530] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [580] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [630] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [680] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [730] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [780] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [830] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [880] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [930] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [980] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [1030] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [1080] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 12,
      sym__expression,
      sym_function_call,
      sym__scoped_identifier,
      sym_scoped_identifiers,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(57), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(61), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1192] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(65), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1235] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(65), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(65), 15,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1311] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(65), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1352] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1401] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1448] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(65), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1493] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_QMARK,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(93), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(97), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(101), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(65), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(105), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(109), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(113), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(117), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(121), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(125), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(65), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1889] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    STATE(142), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1944] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(137), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(135), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
  [1979] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2029] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2081] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2131] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2181] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2230] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2279] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2328] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(161), 1,
      anon_sym_COLON,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2377] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      anon_sym_callback,
    ACTIONS(169), 1,
      anon_sym_property,
    ACTIONS(171), 1,
      sym_vis,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(87), 1,
      sym__assign_property,
    STATE(106), 1,
      sym__define_property,
    STATE(132), 1,
      sym__function_identifier,
    STATE(135), 1,
      sym__type_identifier,
    STATE(157), 1,
      sym__conditional_element,
    STATE(58), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [2426] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      anon_sym_callback,
    ACTIONS(169), 1,
      anon_sym_property,
    ACTIONS(171), 1,
      sym_vis,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym__assign_property,
    STATE(106), 1,
      sym__define_property,
    STATE(132), 1,
      sym__function_identifier,
    STATE(135), 1,
      sym__type_identifier,
    STATE(157), 1,
      sym__conditional_element,
    STATE(60), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [2475] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      anon_sym_callback,
    ACTIONS(169), 1,
      anon_sym_property,
    ACTIONS(171), 1,
      sym_vis,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym__assign_property,
    STATE(106), 1,
      sym__define_property,
    STATE(132), 1,
      sym__function_identifier,
    STATE(135), 1,
      sym__type_identifier,
    STATE(157), 1,
      sym__conditional_element,
    STATE(60), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [2524] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      anon_sym_callback,
    ACTIONS(169), 1,
      anon_sym_property,
    ACTIONS(171), 1,
      sym_vis,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym__assign_property,
    STATE(106), 1,
      sym__define_property,
    STATE(132), 1,
      sym__function_identifier,
    STATE(135), 1,
      sym__type_identifier,
    STATE(157), 1,
      sym__conditional_element,
    STATE(57), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [2573] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      anon_sym_if,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(189), 1,
      anon_sym_callback,
    ACTIONS(192), 1,
      anon_sym_property,
    ACTIONS(195), 1,
      sym_vis,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(87), 1,
      sym__assign_property,
    STATE(106), 1,
      sym__define_property,
    STATE(132), 1,
      sym__function_identifier,
    STATE(135), 1,
      sym__type_identifier,
    STATE(157), 1,
      sym__conditional_element,
    STATE(60), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [2622] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_global,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      sym_vis,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym__type_identifier,
    STATE(156), 1,
      sym__conditional_element,
    STATE(62), 6,
      sym__item,
      sym_export_statement,
      sym_global_single,
      sym_import_statement,
      sym_component_item,
      aux_sym_source_file_repeat1,
  [2658] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_global,
    ACTIONS(208), 1,
      anon_sym_import,
    ACTIONS(211), 1,
      anon_sym_if,
    ACTIONS(214), 1,
      sym_vis,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(138), 1,
      sym__type_identifier,
    STATE(156), 1,
      sym__conditional_element,
    STATE(62), 6,
      sym__item,
      sym_export_statement,
      sym_global_single,
      sym_import_statement,
      sym_component_item,
      aux_sym_source_file_repeat1,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(222), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(226), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(230), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(234), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(238), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(242), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(246), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(250), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(254), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(258), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(262), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(266), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 7,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_GT,
      anon_sym_DOT,
  [2887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(270), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(274), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(278), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(282), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(286), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(290), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(294), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [2992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(298), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(302), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(306), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(310), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(314), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3319] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(72), 1,
      sym__assign_property,
  [3338] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      anon_sym_DASH_GT,
    ACTIONS(370), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_call_back_parameters,
  [3357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    STATE(211), 2,
      sym__scoped_identifier,
      sym_scoped_identifiers,
  [3374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    STATE(199), 2,
      sym__scoped_identifier,
      sym_scoped_identifiers,
  [3391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(129), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
    STATE(218), 2,
      sym__scoped_identifier,
      sym_scoped_identifiers,
  [3408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COLON,
    ACTIONS(49), 2,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(378), 2,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_LPAREN,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
      sym_identifier,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_GT,
  [3453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_string_literal,
  [3469] = 4,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(388), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [3483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_GT,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
      sym_identifier,
  [3503] = 4,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(396), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [3517] = 4,
    ACTIONS(390), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(400), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [3531] = 4,
    ACTIONS(390), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(404), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [3545] = 4,
    ACTIONS(390), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(409), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [3559] = 4,
    ACTIONS(390), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(412), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [3573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      anon_sym_global,
    STATE(152), 1,
      sym__type_identifier,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_GT,
  [3599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_as,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_export_statement_repeat1,
  [3615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_export_statement_repeat1,
  [3628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_call_back_parameters_repeat1,
  [3641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
  [3654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_export_statement_repeat1,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_as,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_EQ_GT,
    STATE(196), 1,
      sym_call_back_parameters,
  [3691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_call_back_parameters_repeat1,
  [3704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      anon_sym_COLON_EQ,
    STATE(104), 1,
      sym__component_body,
  [3717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    ACTIONS(451), 1,
      anon_sym_COLON_EQ,
    STATE(79), 1,
      sym__component_body,
  [3730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      anon_sym_COLON_EQ,
    STATE(84), 1,
      sym__component_body,
  [3743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(155), 1,
      sym__type_identifier,
  [3756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      anon_sym_COLON_EQ,
    STATE(105), 1,
      sym__component_body,
  [3769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    ACTIONS(463), 1,
      anon_sym_DASH_GT,
    ACTIONS(465), 1,
      anon_sym_LT_EQ_GT,
  [3782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym__type_identifier,
  [3795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym_string_literal,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_function_call_args_repeat1,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_color_literal_token3,
    ACTIONS(471), 2,
      aux_sym_color_literal_token1,
      aux_sym_color_literal_token2,
  [3832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_scoped_identifiers_repeat1,
    STATE(217), 1,
      sym__type_identifier,
  [3845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      aux_sym_import_statement_repeat1,
  [3858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(203), 1,
      sym_string_literal,
  [3871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      aux_sym_import_statement_repeat1,
  [3884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_function_call_args_repeat1,
  [3897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym_string_literal,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 1,
      anon_sym_COLON_EQ,
    STATE(86), 1,
      sym__component_body,
  [3923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_export_statement_repeat1,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_COLON_EQ,
    STATE(97), 1,
      sym__component_body,
  [3949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_export_statement_repeat1,
  [3962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_call_back_parameters_repeat1,
  [3975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_import_statement_repeat1,
  [3988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(505), 1,
      sym_vis,
    STATE(152), 1,
      sym__type_identifier,
  [4001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym_vis,
    STATE(136), 1,
      sym__type_identifier,
  [4014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym__component_body,
  [4024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym__component_body,
  [4034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(165), 1,
      sym__type_identifier,
  [4044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(167), 1,
      sym__type_identifier,
  [4054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(168), 1,
      sym__type_identifier,
  [4064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(150), 1,
      sym__type_identifier,
  [4074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_handler_body,
  [4084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym__component_body,
  [4094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_DOT,
  [4104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym__component_body,
  [4114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym__component_body,
  [4124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      sym_vis,
      sym_identifier,
  [4132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(180), 1,
      sym__type_identifier,
  [4142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym__component_body,
  [4152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(158), 1,
      sym__type_identifier,
  [4162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_SEMI,
  [4172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(107), 1,
      sym__function_identifier,
  [4182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LT,
    ACTIONS(517), 1,
      sym_identifier,
  [4192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(136), 1,
      sym__type_identifier,
  [4202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym__component_body,
  [4212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(182), 1,
      sym__type_identifier,
  [4222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(209), 1,
      sym__type_identifier,
  [4232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(130), 1,
      sym__type_identifier,
  [4250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(131), 1,
      sym__type_identifier,
  [4268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym__component_body,
  [4278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(159), 1,
      sym__type_identifier,
  [4288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(177), 1,
      sym__type_identifier,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_handler_body,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      sym_identifier,
  [4326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(207), 1,
      sym__type_identifier,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(206), 1,
      sym__type_identifier,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(134), 1,
      sym__type_identifier,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COLON,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_EQ,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_EQ_GT,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SEMI,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
  [4398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_SEMI,
  [4405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SEMI,
  [4412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_from,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_from,
  [4426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_SEMI,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON_EQ,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_GT,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON_EQ,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SEMI,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SEMI,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_identifier,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_from,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_identifier,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DOT,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 330,
  [SMALL_STATE(10)] = 380,
  [SMALL_STATE(11)] = 430,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 530,
  [SMALL_STATE(14)] = 580,
  [SMALL_STATE(15)] = 630,
  [SMALL_STATE(16)] = 680,
  [SMALL_STATE(17)] = 730,
  [SMALL_STATE(18)] = 780,
  [SMALL_STATE(19)] = 830,
  [SMALL_STATE(20)] = 880,
  [SMALL_STATE(21)] = 930,
  [SMALL_STATE(22)] = 980,
  [SMALL_STATE(23)] = 1030,
  [SMALL_STATE(24)] = 1080,
  [SMALL_STATE(25)] = 1130,
  [SMALL_STATE(26)] = 1161,
  [SMALL_STATE(27)] = 1192,
  [SMALL_STATE(28)] = 1235,
  [SMALL_STATE(29)] = 1274,
  [SMALL_STATE(30)] = 1311,
  [SMALL_STATE(31)] = 1352,
  [SMALL_STATE(32)] = 1401,
  [SMALL_STATE(33)] = 1448,
  [SMALL_STATE(34)] = 1493,
  [SMALL_STATE(35)] = 1544,
  [SMALL_STATE(36)] = 1575,
  [SMALL_STATE(37)] = 1606,
  [SMALL_STATE(38)] = 1637,
  [SMALL_STATE(39)] = 1672,
  [SMALL_STATE(40)] = 1703,
  [SMALL_STATE(41)] = 1734,
  [SMALL_STATE(42)] = 1765,
  [SMALL_STATE(43)] = 1796,
  [SMALL_STATE(44)] = 1827,
  [SMALL_STATE(45)] = 1858,
  [SMALL_STATE(46)] = 1889,
  [SMALL_STATE(47)] = 1944,
  [SMALL_STATE(48)] = 1979,
  [SMALL_STATE(49)] = 2029,
  [SMALL_STATE(50)] = 2081,
  [SMALL_STATE(51)] = 2131,
  [SMALL_STATE(52)] = 2181,
  [SMALL_STATE(53)] = 2230,
  [SMALL_STATE(54)] = 2279,
  [SMALL_STATE(55)] = 2328,
  [SMALL_STATE(56)] = 2377,
  [SMALL_STATE(57)] = 2426,
  [SMALL_STATE(58)] = 2475,
  [SMALL_STATE(59)] = 2524,
  [SMALL_STATE(60)] = 2573,
  [SMALL_STATE(61)] = 2622,
  [SMALL_STATE(62)] = 2658,
  [SMALL_STATE(63)] = 2694,
  [SMALL_STATE(64)] = 2709,
  [SMALL_STATE(65)] = 2724,
  [SMALL_STATE(66)] = 2739,
  [SMALL_STATE(67)] = 2754,
  [SMALL_STATE(68)] = 2769,
  [SMALL_STATE(69)] = 2784,
  [SMALL_STATE(70)] = 2799,
  [SMALL_STATE(71)] = 2814,
  [SMALL_STATE(72)] = 2829,
  [SMALL_STATE(73)] = 2844,
  [SMALL_STATE(74)] = 2859,
  [SMALL_STATE(75)] = 2874,
  [SMALL_STATE(76)] = 2887,
  [SMALL_STATE(77)] = 2902,
  [SMALL_STATE(78)] = 2917,
  [SMALL_STATE(79)] = 2932,
  [SMALL_STATE(80)] = 2947,
  [SMALL_STATE(81)] = 2962,
  [SMALL_STATE(82)] = 2977,
  [SMALL_STATE(83)] = 2992,
  [SMALL_STATE(84)] = 3007,
  [SMALL_STATE(85)] = 3022,
  [SMALL_STATE(86)] = 3037,
  [SMALL_STATE(87)] = 3052,
  [SMALL_STATE(88)] = 3067,
  [SMALL_STATE(89)] = 3081,
  [SMALL_STATE(90)] = 3095,
  [SMALL_STATE(91)] = 3109,
  [SMALL_STATE(92)] = 3123,
  [SMALL_STATE(93)] = 3137,
  [SMALL_STATE(94)] = 3151,
  [SMALL_STATE(95)] = 3165,
  [SMALL_STATE(96)] = 3179,
  [SMALL_STATE(97)] = 3193,
  [SMALL_STATE(98)] = 3207,
  [SMALL_STATE(99)] = 3221,
  [SMALL_STATE(100)] = 3235,
  [SMALL_STATE(101)] = 3249,
  [SMALL_STATE(102)] = 3263,
  [SMALL_STATE(103)] = 3277,
  [SMALL_STATE(104)] = 3291,
  [SMALL_STATE(105)] = 3305,
  [SMALL_STATE(106)] = 3319,
  [SMALL_STATE(107)] = 3338,
  [SMALL_STATE(108)] = 3357,
  [SMALL_STATE(109)] = 3374,
  [SMALL_STATE(110)] = 3391,
  [SMALL_STATE(111)] = 3408,
  [SMALL_STATE(112)] = 3423,
  [SMALL_STATE(113)] = 3433,
  [SMALL_STATE(114)] = 3443,
  [SMALL_STATE(115)] = 3453,
  [SMALL_STATE(116)] = 3469,
  [SMALL_STATE(117)] = 3483,
  [SMALL_STATE(118)] = 3493,
  [SMALL_STATE(119)] = 3503,
  [SMALL_STATE(120)] = 3517,
  [SMALL_STATE(121)] = 3531,
  [SMALL_STATE(122)] = 3545,
  [SMALL_STATE(123)] = 3559,
  [SMALL_STATE(124)] = 3573,
  [SMALL_STATE(125)] = 3589,
  [SMALL_STATE(126)] = 3599,
  [SMALL_STATE(127)] = 3615,
  [SMALL_STATE(128)] = 3628,
  [SMALL_STATE(129)] = 3641,
  [SMALL_STATE(130)] = 3654,
  [SMALL_STATE(131)] = 3667,
  [SMALL_STATE(132)] = 3678,
  [SMALL_STATE(133)] = 3691,
  [SMALL_STATE(134)] = 3704,
  [SMALL_STATE(135)] = 3717,
  [SMALL_STATE(136)] = 3730,
  [SMALL_STATE(137)] = 3743,
  [SMALL_STATE(138)] = 3756,
  [SMALL_STATE(139)] = 3769,
  [SMALL_STATE(140)] = 3782,
  [SMALL_STATE(141)] = 3795,
  [SMALL_STATE(142)] = 3808,
  [SMALL_STATE(143)] = 3821,
  [SMALL_STATE(144)] = 3832,
  [SMALL_STATE(145)] = 3845,
  [SMALL_STATE(146)] = 3858,
  [SMALL_STATE(147)] = 3871,
  [SMALL_STATE(148)] = 3884,
  [SMALL_STATE(149)] = 3897,
  [SMALL_STATE(150)] = 3910,
  [SMALL_STATE(151)] = 3923,
  [SMALL_STATE(152)] = 3936,
  [SMALL_STATE(153)] = 3949,
  [SMALL_STATE(154)] = 3962,
  [SMALL_STATE(155)] = 3975,
  [SMALL_STATE(156)] = 3988,
  [SMALL_STATE(157)] = 4001,
  [SMALL_STATE(158)] = 4014,
  [SMALL_STATE(159)] = 4024,
  [SMALL_STATE(160)] = 4034,
  [SMALL_STATE(161)] = 4044,
  [SMALL_STATE(162)] = 4054,
  [SMALL_STATE(163)] = 4064,
  [SMALL_STATE(164)] = 4074,
  [SMALL_STATE(165)] = 4084,
  [SMALL_STATE(166)] = 4094,
  [SMALL_STATE(167)] = 4104,
  [SMALL_STATE(168)] = 4114,
  [SMALL_STATE(169)] = 4124,
  [SMALL_STATE(170)] = 4132,
  [SMALL_STATE(171)] = 4142,
  [SMALL_STATE(172)] = 4152,
  [SMALL_STATE(173)] = 4162,
  [SMALL_STATE(174)] = 4172,
  [SMALL_STATE(175)] = 4182,
  [SMALL_STATE(176)] = 4192,
  [SMALL_STATE(177)] = 4202,
  [SMALL_STATE(178)] = 4212,
  [SMALL_STATE(179)] = 4222,
  [SMALL_STATE(180)] = 4232,
  [SMALL_STATE(181)] = 4240,
  [SMALL_STATE(182)] = 4250,
  [SMALL_STATE(183)] = 4258,
  [SMALL_STATE(184)] = 4268,
  [SMALL_STATE(185)] = 4278,
  [SMALL_STATE(186)] = 4288,
  [SMALL_STATE(187)] = 4296,
  [SMALL_STATE(188)] = 4306,
  [SMALL_STATE(189)] = 4316,
  [SMALL_STATE(190)] = 4326,
  [SMALL_STATE(191)] = 4336,
  [SMALL_STATE(192)] = 4346,
  [SMALL_STATE(193)] = 4356,
  [SMALL_STATE(194)] = 4363,
  [SMALL_STATE(195)] = 4370,
  [SMALL_STATE(196)] = 4377,
  [SMALL_STATE(197)] = 4384,
  [SMALL_STATE(198)] = 4391,
  [SMALL_STATE(199)] = 4398,
  [SMALL_STATE(200)] = 4405,
  [SMALL_STATE(201)] = 4412,
  [SMALL_STATE(202)] = 4419,
  [SMALL_STATE(203)] = 4426,
  [SMALL_STATE(204)] = 4433,
  [SMALL_STATE(205)] = 4440,
  [SMALL_STATE(206)] = 4447,
  [SMALL_STATE(207)] = 4454,
  [SMALL_STATE(208)] = 4461,
  [SMALL_STATE(209)] = 4468,
  [SMALL_STATE(210)] = 4475,
  [SMALL_STATE(211)] = 4482,
  [SMALL_STATE(212)] = 4489,
  [SMALL_STATE(213)] = 4496,
  [SMALL_STATE(214)] = 4503,
  [SMALL_STATE(215)] = 4510,
  [SMALL_STATE(216)] = 4517,
  [SMALL_STATE(217)] = 4524,
  [SMALL_STATE(218)] = 4531,
  [SMALL_STATE(219)] = 4538,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scoped_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scoped_identifier, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifiers, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_identifiers, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_literal, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_literal, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__component_body_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(23),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(21),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(174),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(175),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(176),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(111),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property, 2, .production_id = 8),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property, 2, .production_id = 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_body, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_body, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 6, .production_id = 13),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 6, .production_id = 13),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_two_way_property, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_two_way_property, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_property, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assign_property, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 6, .production_id = 14),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 6, .production_id = 14),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handler_body, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handler_body, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handler_body, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handler_body, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_assign_property, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_assign_property, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_handler, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_handler, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handler_body, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handler_body, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_property, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assign_property, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_handler, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_handler, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 2, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 2, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 5, .production_id = 12),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 5, .production_id = 12),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 5, .production_id = 11),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 5, .production_id = 11),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 6, .production_id = 10),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 6, .production_id = 10),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 5, .production_id = 9),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 5, .production_id = 9),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 3, .production_id = 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 3, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_body, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_body, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 4, .production_id = 7),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 4, .production_id = 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property, 1, .production_id = 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property, 1, .production_id = 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_single, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_single, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 7),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 7),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_single, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_single, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 6),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_identifier, 1, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__define_property, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_parameters, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_parameters, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__define_property, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(121),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(122),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_parameters, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_statement_repeat1, 2), SHIFT_REPEAT(183),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_statement_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scoped_identifiers_repeat1, 2), SHIFT_REPEAT(75),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(178),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(24),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_back_parameters_repeat1, 2), SHIFT_REPEAT(212),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_back_parameters_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_element, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_statement_repeat1, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [535] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scoped_identifiers_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
