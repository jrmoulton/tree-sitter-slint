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
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 5
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 18

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
  anon_sym_property = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_EQ = 21,
  anon_sym_PLUS_EQ = 22,
  anon_sym_DASH_EQ = 23,
  anon_sym_STAR_EQ = 24,
  anon_sym_SLASH_EQ = 25,
  anon_sym_PERCENT_EQ = 26,
  anon_sym_AMP_EQ = 27,
  anon_sym_PIPE_EQ = 28,
  anon_sym_CARET_EQ = 29,
  anon_sym_LT_LT_EQ = 30,
  anon_sym_GT_GT_EQ = 31,
  anon_sym_DOT = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_DASH = 35,
  anon_sym_BANG = 36,
  anon_sym_AMP_AMP = 37,
  anon_sym_PIPE_PIPE = 38,
  anon_sym_AMP = 39,
  anon_sym_PIPE = 40,
  anon_sym_CARET = 41,
  anon_sym_EQ_EQ = 42,
  anon_sym_BANG_EQ = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_GT_EQ = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_PLUS = 48,
  anon_sym_STAR = 49,
  anon_sym_SLASH = 50,
  anon_sym_QMARK = 51,
  anon_sym_DQUOTE = 52,
  anon_sym_SQUOTE = 53,
  sym__unescaped_double_string_fragment = 54,
  sym__unescaped_single_string_fragment = 55,
  sym_escape_sequence = 56,
  sym_vis = 57,
  sym_identifier = 58,
  anon_sym_POUND = 59,
  aux_sym_color_literal_token1 = 60,
  aux_sym_color_literal_token2 = 61,
  aux_sym_color_literal_token3 = 62,
  sym_int_literal = 63,
  sym_float_literal = 64,
  anon_sym_px = 65,
  anon_sym_ms = 66,
  anon_sym_PERCENT = 67,
  anon_sym_black = 68,
  anon_sym_blue = 69,
  anon_sym_ease = 70,
  anon_sym_ease_DASHin = 71,
  anon_sym_ease_in = 72,
  anon_sym_ease_in_out = 73,
  anon_sym_ease_DASHin_DASHout = 74,
  anon_sym_ease_out = 75,
  anon_sym_ease_DASHout = 76,
  anon_sym_end = 77,
  anon_sym_green = 78,
  anon_sym_red = 79,
  anon_sym_start = 80,
  anon_sym_yellow = 81,
  anon_sym_transparent = 82,
  anon_sym_angle = 83,
  anon_sym_bool = 84,
  anon_sym_brush = 85,
  anon_sym_duration = 86,
  anon_sym_easing = 87,
  anon_sym_float = 88,
  anon_sym_image = 89,
  anon_sym_int = 90,
  anon_sym_length = 91,
  anon_sym_percent = 92,
  anon_sym_physical_DASHlength = 93,
  anon_sym_physical_length = 94,
  anon_sym_string = 95,
  sym_comment = 96,
  sym_source_file = 97,
  sym__item = 98,
  sym_export_statement = 99,
  sym_global_single = 100,
  sym_import_statement = 101,
  sym_component_item = 102,
  sym__conditional_element = 103,
  sym__component_body = 104,
  sym__property = 105,
  sym_call_back_definition = 106,
  sym_call_back_parameters = 107,
  sym_call_back_handler = 108,
  sym_handler_body = 109,
  sym_two_way_property = 110,
  sym_define_assign_property = 111,
  sym__define_property = 112,
  sym__assign_property = 113,
  sym__expression = 114,
  sym_assign_expression = 115,
  sym_comp_assign_expression = 116,
  sym_call_expression = 117,
  sym_function_call_args = 118,
  sym_field_expression = 119,
  sym_bool_literal = 120,
  sym_unary_expression = 121,
  sym_binary_expression = 122,
  sym_ternary_expression = 123,
  sym__literal = 124,
  sym_string_literal = 125,
  sym_color_literal = 126,
  sym__number = 127,
  sym_units = 128,
  sym__type_identifier = 129,
  sym__function_identifier = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_export_statement_repeat1 = 132,
  aux_sym_import_statement_repeat1 = 133,
  aux_sym__component_body_repeat1 = 134,
  aux_sym_call_back_parameters_repeat1 = 135,
  aux_sym_function_call_args_repeat1 = 136,
  aux_sym_string_literal_repeat1 = 137,
  aux_sym_string_literal_repeat2 = 138,
  alias_sym_assign_property = 139,
  alias_sym_comp_body = 140,
  alias_sym_define_property = 141,
  alias_sym_function_identifier = 142,
  alias_sym_type_identifier = 143,
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
  [anon_sym_property] = "property",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DASH] = "-",
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
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
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
  [sym_two_way_property] = "two_way_property",
  [sym_define_assign_property] = "define_assign_property",
  [sym__define_property] = "_define_property",
  [sym__assign_property] = "_assign_property",
  [sym__expression] = "_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_comp_assign_expression] = "comp_assign_expression",
  [sym_call_expression] = "call_expression",
  [sym_function_call_args] = "function_call_args",
  [sym_field_expression] = "field_expression",
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
  [anon_sym_property] = anon_sym_property,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_two_way_property] = sym_two_way_property,
  [sym_define_assign_property] = sym_define_assign_property,
  [sym__define_property] = sym__define_property,
  [sym__assign_property] = sym__assign_property,
  [sym__expression] = sym__expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_comp_assign_expression] = sym_comp_assign_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_function_call_args] = sym_function_call_args,
  [sym_field_expression] = sym_field_expression,
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
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
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
  [anon_sym_DASH] = {
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
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_args] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
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
  field_arguments = 2,
  field_field = 3,
  field_function = 4,
  field_left = 5,
  field_operator = 6,
  field_return_type = 7,
  field_right = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_arguments] = "arguments",
  [field_field] = "field",
  [field_function] = "function",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 2},
  [7] = {.index = 2, .length = 3},
  [8] = {.index = 5, .length = 2},
  [9] = {.index = 7, .length = 2},
  [14] = {.index = 9, .length = 1},
  [15] = {.index = 10, .length = 1},
  [16] = {.index = 11, .length = 1},
  [17] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 1},
    {field_function, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
    {field_left, 0},
    {field_right, 2},
  [7] =
    {field_field, 2},
    {field_value, 0},
  [9] =
    {field_return_type, 3},
  [10] =
    {field_alias, 3},
  [11] =
    {field_return_type, 4},
  [12] =
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
  [4] = {
    [2] = alias_sym_comp_body,
  },
  [5] = {
    [0] = alias_sym_function_identifier,
  },
  [6] = {
    [0] = alias_sym_assign_property,
  },
  [10] = {
    [3] = alias_sym_comp_body,
  },
  [11] = {
    [0] = alias_sym_define_property,
  },
  [12] = {
    [4] = alias_sym_comp_body,
  },
  [13] = {
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 64,
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
  [92] = 90,
  [93] = 83,
  [94] = 84,
  [95] = 89,
  [96] = 96,
  [97] = 86,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 87,
  [104] = 104,
  [105] = 88,
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
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 131,
  [143] = 143,
  [144] = 141,
  [145] = 138,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 140,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 162,
  [173] = 173,
  [174] = 164,
  [175] = 163,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 166,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 160,
  [189] = 170,
  [190] = 190,
  [191] = 191,
  [192] = 192,
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
      if (lookahead == '!') ADVANCE(242);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == '=') ADVANCE(222);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '?') ADVANCE(258);
      if (lookahead == '\\') SKIP(188)
      if (lookahead == '^') ADVANCE(247);
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
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
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
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(184);
      if (lookahead != 0) ADVANCE(273);
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
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(245);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '?') ADVANCE(258);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == '|') ADVANCE(246);
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
      if (lookahead == '!') ADVANCE(241);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(313);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(272);
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
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(313);
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
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(313);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(361);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(360);
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
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(313);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(313);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(313);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(227);
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
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(329);
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
      if (lookahead == 'g') ADVANCE(351);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(359);
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
      if (lookahead == 'h') ADVANCE(349);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(358);
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
      if (lookahead == 'k') ADVANCE(332);
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
      if (lookahead == 'l') ADVANCE(348);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
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
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(350);
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
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
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
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(346);
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
      if (lookahead == 'w') ADVANCE(345);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(329);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(215);
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
      if (lookahead == '}') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
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
          lookahead != '\r') ADVANCE(361);
      if (lookahead == '\r') ADVANCE(362);
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
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '&') ADVANCE(245);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '?') ADVANCE(258);
      if (lookahead == '\\') SKIP(190)
      if (lookahead == '^') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(313);
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
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
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
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
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
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
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
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_property);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(210);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(243);
      if (lookahead == '=') ADVANCE(228);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '|') ADVANCE(244);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(230);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(211);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(231);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(232);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(225);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(361);
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(264);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(263);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(269);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_vis);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_vis);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(282);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(313);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(290);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(313);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(291);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(313);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(292);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(313);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(277);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(276);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(288);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(300);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(205);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(209);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(306);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(293);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(281);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(280);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(301);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(299);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(303);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(295);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(285);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(297);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(307);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(310);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(308);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(296);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(309);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(284);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(275);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(312);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(283);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(298);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(216);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_color_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_color_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_color_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_color_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_color_literal_token3);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_color_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_ease);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_ease_DASHin);
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_ease_in);
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_ease_in_out);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_ease_DASHin_DASHout);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_ease_out);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_ease_DASHout);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_angle);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_brush);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_easing);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_percent);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_physical_DASHlength);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_physical_length);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(361);
      if (lookahead == '\\') ADVANCE(186);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 191},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 191},
  [4] = {.lex_state = 191},
  [5] = {.lex_state = 191},
  [6] = {.lex_state = 191},
  [7] = {.lex_state = 191},
  [8] = {.lex_state = 191},
  [9] = {.lex_state = 191},
  [10] = {.lex_state = 191},
  [11] = {.lex_state = 191},
  [12] = {.lex_state = 191},
  [13] = {.lex_state = 191},
  [14] = {.lex_state = 191},
  [15] = {.lex_state = 191},
  [16] = {.lex_state = 191},
  [17] = {.lex_state = 191},
  [18] = {.lex_state = 191},
  [19] = {.lex_state = 191},
  [20] = {.lex_state = 191},
  [21] = {.lex_state = 191},
  [22] = {.lex_state = 191},
  [23] = {.lex_state = 191},
  [24] = {.lex_state = 191},
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
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 191},
  [67] = {.lex_state = 191},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
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
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 191},
  [93] = {.lex_state = 191},
  [94] = {.lex_state = 191},
  [95] = {.lex_state = 191},
  [96] = {.lex_state = 191},
  [97] = {.lex_state = 191},
  [98] = {.lex_state = 191},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 191},
  [101] = {.lex_state = 191},
  [102] = {.lex_state = 191},
  [103] = {.lex_state = 191},
  [104] = {.lex_state = 191},
  [105] = {.lex_state = 191},
  [106] = {.lex_state = 191},
  [107] = {.lex_state = 191},
  [108] = {.lex_state = 191},
  [109] = {.lex_state = 191},
  [110] = {.lex_state = 191},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 28},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 28},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 21},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 21},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 26},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 21},
  [188] = {.lex_state = 21},
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
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 17},
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
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_vis] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_color_literal_token1] = ACTIONS(1),
    [aux_sym_color_literal_token2] = ACTIONS(1),
    [aux_sym_color_literal_token3] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
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
    [sym__item] = STATE(66),
    [sym_export_statement] = STATE(66),
    [sym_global_single] = STATE(66),
    [sym_import_statement] = STATE(66),
    [sym_component_item] = STATE(66),
    [sym__conditional_element] = STATE(142),
    [sym__type_identifier] = STATE(144),
    [aux_sym_source_file_repeat1] = STATE(66),
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
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    STATE(20), 1,
      sym_units,
    ACTIONS(21), 2,
      anon_sym_px,
      anon_sym_ms,
    ACTIONS(19), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(17), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [54] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(25), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [115] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(25), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [172] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [241] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [308] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 10,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
    ACTIONS(25), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(53), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(51), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [412] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 15,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [485] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 15,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [558] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(25), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [621] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(67), 16,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_QMARK,
  [692] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(25), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [751] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(25), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(29), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 22,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(75), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(83), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(87), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(91), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(95), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(99), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(103), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(107), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(111), 24,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1341] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_function_call_args,
    STATE(134), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1418] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1490] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1564] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1635] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1706] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1777] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1848] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    ACTIONS(143), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(141), 19,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [1961] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_function_call_args,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [2029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(143), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(141), 19,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
  [2071] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(29), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2122] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(27), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2170] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(12), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2215] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2260] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(11), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2305] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2350] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(9), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2395] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(34), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2440] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2485] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(6), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2530] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(5), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2575] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(4), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2620] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(3), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2665] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(13), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2710] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(14), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2755] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2800] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(32), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2845] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(37), 1,
      sym_field_expression,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(36), 12,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2892] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(35), 1,
      sym_field_expression,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(36), 12,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2939] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(28), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [2984] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(31), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [3029] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(30), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [3074] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(165), 1,
      sym_float_literal,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 13,
      sym__expression,
      sym_assign_expression,
      sym_comp_assign_expression,
      sym_call_expression,
      sym_field_expression,
      sym_bool_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym__literal,
      sym_string_literal,
      sym_color_literal,
      sym__number,
  [3119] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(216), 1,
      anon_sym_COLON,
    ACTIONS(219), 1,
      anon_sym_callback,
    ACTIONS(222), 1,
      anon_sym_property,
    ACTIONS(225), 1,
      sym_vis,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(72), 1,
      sym__assign_property,
    STATE(112), 1,
      sym__define_property,
    STATE(129), 1,
      sym__function_identifier,
    STATE(131), 1,
      sym__conditional_element,
    STATE(141), 1,
      sym__type_identifier,
    STATE(61), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [3168] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_callback,
    ACTIONS(237), 1,
      anon_sym_property,
    ACTIONS(239), 1,
      sym_vis,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(72), 1,
      sym__assign_property,
    STATE(112), 1,
      sym__define_property,
    STATE(129), 1,
      sym__function_identifier,
    STATE(131), 1,
      sym__conditional_element,
    STATE(141), 1,
      sym__type_identifier,
    STATE(61), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [3217] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_callback,
    ACTIONS(237), 1,
      anon_sym_property,
    ACTIONS(239), 1,
      sym_vis,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__assign_property,
    STATE(112), 1,
      sym__define_property,
    STATE(129), 1,
      sym__function_identifier,
    STATE(131), 1,
      sym__conditional_element,
    STATE(141), 1,
      sym__type_identifier,
    STATE(61), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [3266] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_callback,
    ACTIONS(237), 1,
      anon_sym_property,
    ACTIONS(239), 1,
      sym_vis,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__assign_property,
    STATE(112), 1,
      sym__define_property,
    STATE(129), 1,
      sym__function_identifier,
    STATE(131), 1,
      sym__conditional_element,
    STATE(141), 1,
      sym__type_identifier,
    STATE(63), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [3315] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_callback,
    ACTIONS(237), 1,
      anon_sym_property,
    ACTIONS(239), 1,
      sym_vis,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__assign_property,
    STATE(112), 1,
      sym__define_property,
    STATE(129), 1,
      sym__function_identifier,
    STATE(131), 1,
      sym__conditional_element,
    STATE(141), 1,
      sym__type_identifier,
    STATE(62), 7,
      sym_component_item,
      sym__property,
      sym_call_back_definition,
      sym_call_back_handler,
      sym_two_way_property,
      sym_define_assign_property,
      aux_sym__component_body_repeat1,
  [3364] = 10,
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
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym__conditional_element,
    STATE(144), 1,
      sym__type_identifier,
    STATE(67), 6,
      sym__item,
      sym_export_statement,
      sym_global_single,
      sym_import_statement,
      sym_component_item,
      aux_sym_source_file_repeat1,
  [3400] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      anon_sym_global,
    ACTIONS(256), 1,
      anon_sym_import,
    ACTIONS(259), 1,
      anon_sym_if,
    ACTIONS(262), 1,
      sym_vis,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(142), 1,
      sym__conditional_element,
    STATE(144), 1,
      sym__type_identifier,
    STATE(67), 6,
      sym__item,
      sym_export_statement,
      sym_global_single,
      sym_import_statement,
      sym_component_item,
      aux_sym_source_file_repeat1,
  [3436] = 3,
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
  [3451] = 3,
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
  [3466] = 3,
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
  [3481] = 3,
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
  [3496] = 3,
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
  [3511] = 3,
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
  [3526] = 3,
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
  [3541] = 3,
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
  [3556] = 3,
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
  [3571] = 3,
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
  [3586] = 3,
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
  [3601] = 3,
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
  [3616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(318), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(322), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(326), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(330), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(334), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(338), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(342), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(346), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(350), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(354), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(358), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(362), 5,
      anon_sym_if,
      anon_sym_callback,
      anon_sym_property,
      sym_vis,
      sym_identifier,
  [3796] = 3,
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
  [3810] = 3,
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
  [3824] = 3,
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
  [3838] = 3,
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
  [3852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3866] = 3,
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
  [3880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 6,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_GT,
  [3906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3948] = 3,
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
  [3962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [3976] = 3,
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
  [3990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [4004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(396), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [4018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [4032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 5,
      anon_sym_global,
      anon_sym_import,
      anon_sym_if,
      sym_vis,
      sym_identifier,
  [4060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      anon_sym_DASH_GT,
    ACTIONS(414), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_call_back_parameters,
  [4079] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(73), 1,
      sym__assign_property,
  [4098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(372), 2,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
    ACTIONS(426), 2,
      anon_sym_LPAREN,
      anon_sym_EQ_GT,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
      sym_identifier,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_GT,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LT_EQ_GT,
      sym_identifier,
  [4143] = 4,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(436), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4157] = 4,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(440), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [4171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_LPAREN,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_GT,
  [4191] = 4,
    ACTIONS(438), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(446), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [4205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_as,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      aux_sym_export_statement_repeat1,
  [4221] = 4,
    ACTIONS(438), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(454), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_global,
    STATE(154), 1,
      sym__type_identifier,
  [4251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_string_literal,
  [4267] = 4,
    ACTIONS(438), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(464), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [4281] = 4,
    ACTIONS(438), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(469), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_GT,
  [4305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_EQ_GT,
    STATE(212), 1,
      sym_call_back_parameters,
  [4318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_import_statement_repeat1,
  [4331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(480), 1,
      sym_vis,
    STATE(140), 1,
      sym__type_identifier,
  [4344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      aux_sym_import_statement_repeat1,
  [4357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      aux_sym_import_statement_repeat1,
  [4370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_function_call_args_repeat1,
  [4383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      aux_sym_export_statement_repeat1,
  [4396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_as,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_export_statement_repeat1,
  [4420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_COLON_EQ,
    STATE(87), 1,
      sym__component_body,
  [4433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym_export_statement_repeat1,
  [4446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      anon_sym_COLON_EQ,
    STATE(84), 1,
      sym__component_body,
  [4459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(508), 1,
      anon_sym_COLON_EQ,
    STATE(83), 1,
      sym__component_body,
  [4472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(510), 1,
      sym_vis,
    STATE(154), 1,
      sym__type_identifier,
  [4485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
    ACTIONS(516), 1,
      anon_sym_LT_EQ_GT,
  [4498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(520), 1,
      anon_sym_COLON_EQ,
    STATE(93), 1,
      sym__component_body,
  [4511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      anon_sym_COLON_EQ,
    STATE(103), 1,
      sym__component_body,
  [4524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_call_back_parameters_repeat1,
  [4537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(130), 1,
      sym__type_identifier,
  [4550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_color_literal_token3,
    ACTIONS(532), 2,
      aux_sym_color_literal_token1,
      aux_sym_color_literal_token2,
  [4561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_string_literal,
  [4574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    STATE(204), 1,
      sym_string_literal,
  [4587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym__type_identifier,
  [4600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_call_back_parameters_repeat1,
  [4613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_function_call_args_repeat1,
  [4626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(546), 1,
      anon_sym_COLON_EQ,
    STATE(94), 1,
      sym__component_body,
  [4639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    STATE(203), 1,
      sym_string_literal,
  [4652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym_export_statement_repeat1,
  [4665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_call_back_parameters_repeat1,
  [4678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(195), 1,
      sym__type_identifier,
  [4688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(178), 1,
      sym__type_identifier,
  [4698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(168), 1,
      sym__type_identifier,
  [4708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 2,
      sym_vis,
      sym_identifier,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym__component_body,
  [4726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(170), 1,
      sym__type_identifier,
  [4736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(172), 1,
      sym__type_identifier,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_handler_body,
  [4756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(138), 1,
      sym__type_identifier,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym__component_body,
  [4776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym__component_body,
  [4786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym_identifier,
  [4796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym__component_body,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym__component_body,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym__component_body,
  [4826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(136), 1,
      sym__type_identifier,
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(162), 1,
      sym__type_identifier,
  [4846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(189), 1,
      sym__type_identifier,
  [4856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(140), 1,
      sym__type_identifier,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(186), 1,
      sym__type_identifier,
  [4876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(145), 1,
      sym__type_identifier,
  [4894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(564), 1,
      sym_identifier,
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(111), 1,
      sym__function_identifier,
  [4914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(193), 1,
      sym__type_identifier,
  [4924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym__component_body,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(197), 1,
      sym__type_identifier,
  [4952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(135), 1,
      sym__type_identifier,
  [4970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(167), 1,
      sym__type_identifier,
  [4980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym__component_body,
  [4990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_handler_body,
  [5000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
  [5007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
  [5014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON_EQ,
  [5021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_SEMI,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COLON_EQ,
  [5035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_SEMI,
  [5042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_GT,
  [5049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
  [5056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SEMI,
  [5063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_from,
  [5070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
  [5077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SEMI,
  [5084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_SEMI,
  [5091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_SEMI,
  [5098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [5105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_identifier,
  [5112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_from,
  [5119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_identifier,
  [5126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_from,
  [5133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_identifier,
  [5140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym_identifier,
  [5147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 115,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 241,
  [SMALL_STATE(7)] = 308,
  [SMALL_STATE(8)] = 361,
  [SMALL_STATE(9)] = 412,
  [SMALL_STATE(10)] = 485,
  [SMALL_STATE(11)] = 558,
  [SMALL_STATE(12)] = 621,
  [SMALL_STATE(13)] = 692,
  [SMALL_STATE(14)] = 751,
  [SMALL_STATE(15)] = 806,
  [SMALL_STATE(16)] = 857,
  [SMALL_STATE(17)] = 901,
  [SMALL_STATE(18)] = 945,
  [SMALL_STATE(19)] = 989,
  [SMALL_STATE(20)] = 1033,
  [SMALL_STATE(21)] = 1077,
  [SMALL_STATE(22)] = 1121,
  [SMALL_STATE(23)] = 1165,
  [SMALL_STATE(24)] = 1209,
  [SMALL_STATE(25)] = 1253,
  [SMALL_STATE(26)] = 1297,
  [SMALL_STATE(27)] = 1341,
  [SMALL_STATE(28)] = 1418,
  [SMALL_STATE(29)] = 1490,
  [SMALL_STATE(30)] = 1564,
  [SMALL_STATE(31)] = 1635,
  [SMALL_STATE(32)] = 1706,
  [SMALL_STATE(33)] = 1777,
  [SMALL_STATE(34)] = 1848,
  [SMALL_STATE(35)] = 1919,
  [SMALL_STATE(36)] = 1961,
  [SMALL_STATE(37)] = 2029,
  [SMALL_STATE(38)] = 2071,
  [SMALL_STATE(39)] = 2122,
  [SMALL_STATE(40)] = 2170,
  [SMALL_STATE(41)] = 2215,
  [SMALL_STATE(42)] = 2260,
  [SMALL_STATE(43)] = 2305,
  [SMALL_STATE(44)] = 2350,
  [SMALL_STATE(45)] = 2395,
  [SMALL_STATE(46)] = 2440,
  [SMALL_STATE(47)] = 2485,
  [SMALL_STATE(48)] = 2530,
  [SMALL_STATE(49)] = 2575,
  [SMALL_STATE(50)] = 2620,
  [SMALL_STATE(51)] = 2665,
  [SMALL_STATE(52)] = 2710,
  [SMALL_STATE(53)] = 2755,
  [SMALL_STATE(54)] = 2800,
  [SMALL_STATE(55)] = 2845,
  [SMALL_STATE(56)] = 2892,
  [SMALL_STATE(57)] = 2939,
  [SMALL_STATE(58)] = 2984,
  [SMALL_STATE(59)] = 3029,
  [SMALL_STATE(60)] = 3074,
  [SMALL_STATE(61)] = 3119,
  [SMALL_STATE(62)] = 3168,
  [SMALL_STATE(63)] = 3217,
  [SMALL_STATE(64)] = 3266,
  [SMALL_STATE(65)] = 3315,
  [SMALL_STATE(66)] = 3364,
  [SMALL_STATE(67)] = 3400,
  [SMALL_STATE(68)] = 3436,
  [SMALL_STATE(69)] = 3451,
  [SMALL_STATE(70)] = 3466,
  [SMALL_STATE(71)] = 3481,
  [SMALL_STATE(72)] = 3496,
  [SMALL_STATE(73)] = 3511,
  [SMALL_STATE(74)] = 3526,
  [SMALL_STATE(75)] = 3541,
  [SMALL_STATE(76)] = 3556,
  [SMALL_STATE(77)] = 3571,
  [SMALL_STATE(78)] = 3586,
  [SMALL_STATE(79)] = 3601,
  [SMALL_STATE(80)] = 3616,
  [SMALL_STATE(81)] = 3631,
  [SMALL_STATE(82)] = 3646,
  [SMALL_STATE(83)] = 3661,
  [SMALL_STATE(84)] = 3676,
  [SMALL_STATE(85)] = 3691,
  [SMALL_STATE(86)] = 3706,
  [SMALL_STATE(87)] = 3721,
  [SMALL_STATE(88)] = 3736,
  [SMALL_STATE(89)] = 3751,
  [SMALL_STATE(90)] = 3766,
  [SMALL_STATE(91)] = 3781,
  [SMALL_STATE(92)] = 3796,
  [SMALL_STATE(93)] = 3810,
  [SMALL_STATE(94)] = 3824,
  [SMALL_STATE(95)] = 3838,
  [SMALL_STATE(96)] = 3852,
  [SMALL_STATE(97)] = 3866,
  [SMALL_STATE(98)] = 3880,
  [SMALL_STATE(99)] = 3894,
  [SMALL_STATE(100)] = 3906,
  [SMALL_STATE(101)] = 3920,
  [SMALL_STATE(102)] = 3934,
  [SMALL_STATE(103)] = 3948,
  [SMALL_STATE(104)] = 3962,
  [SMALL_STATE(105)] = 3976,
  [SMALL_STATE(106)] = 3990,
  [SMALL_STATE(107)] = 4004,
  [SMALL_STATE(108)] = 4018,
  [SMALL_STATE(109)] = 4032,
  [SMALL_STATE(110)] = 4046,
  [SMALL_STATE(111)] = 4060,
  [SMALL_STATE(112)] = 4079,
  [SMALL_STATE(113)] = 4098,
  [SMALL_STATE(114)] = 4113,
  [SMALL_STATE(115)] = 4123,
  [SMALL_STATE(116)] = 4133,
  [SMALL_STATE(117)] = 4143,
  [SMALL_STATE(118)] = 4157,
  [SMALL_STATE(119)] = 4171,
  [SMALL_STATE(120)] = 4181,
  [SMALL_STATE(121)] = 4191,
  [SMALL_STATE(122)] = 4205,
  [SMALL_STATE(123)] = 4221,
  [SMALL_STATE(124)] = 4235,
  [SMALL_STATE(125)] = 4251,
  [SMALL_STATE(126)] = 4267,
  [SMALL_STATE(127)] = 4281,
  [SMALL_STATE(128)] = 4295,
  [SMALL_STATE(129)] = 4305,
  [SMALL_STATE(130)] = 4318,
  [SMALL_STATE(131)] = 4331,
  [SMALL_STATE(132)] = 4344,
  [SMALL_STATE(133)] = 4357,
  [SMALL_STATE(134)] = 4370,
  [SMALL_STATE(135)] = 4383,
  [SMALL_STATE(136)] = 4396,
  [SMALL_STATE(137)] = 4407,
  [SMALL_STATE(138)] = 4420,
  [SMALL_STATE(139)] = 4433,
  [SMALL_STATE(140)] = 4446,
  [SMALL_STATE(141)] = 4459,
  [SMALL_STATE(142)] = 4472,
  [SMALL_STATE(143)] = 4485,
  [SMALL_STATE(144)] = 4498,
  [SMALL_STATE(145)] = 4511,
  [SMALL_STATE(146)] = 4524,
  [SMALL_STATE(147)] = 4537,
  [SMALL_STATE(148)] = 4550,
  [SMALL_STATE(149)] = 4561,
  [SMALL_STATE(150)] = 4574,
  [SMALL_STATE(151)] = 4587,
  [SMALL_STATE(152)] = 4600,
  [SMALL_STATE(153)] = 4613,
  [SMALL_STATE(154)] = 4626,
  [SMALL_STATE(155)] = 4639,
  [SMALL_STATE(156)] = 4652,
  [SMALL_STATE(157)] = 4665,
  [SMALL_STATE(158)] = 4678,
  [SMALL_STATE(159)] = 4688,
  [SMALL_STATE(160)] = 4698,
  [SMALL_STATE(161)] = 4708,
  [SMALL_STATE(162)] = 4716,
  [SMALL_STATE(163)] = 4726,
  [SMALL_STATE(164)] = 4736,
  [SMALL_STATE(165)] = 4746,
  [SMALL_STATE(166)] = 4756,
  [SMALL_STATE(167)] = 4766,
  [SMALL_STATE(168)] = 4776,
  [SMALL_STATE(169)] = 4786,
  [SMALL_STATE(170)] = 4796,
  [SMALL_STATE(171)] = 4806,
  [SMALL_STATE(172)] = 4816,
  [SMALL_STATE(173)] = 4826,
  [SMALL_STATE(174)] = 4836,
  [SMALL_STATE(175)] = 4846,
  [SMALL_STATE(176)] = 4856,
  [SMALL_STATE(177)] = 4866,
  [SMALL_STATE(178)] = 4876,
  [SMALL_STATE(179)] = 4884,
  [SMALL_STATE(180)] = 4894,
  [SMALL_STATE(181)] = 4904,
  [SMALL_STATE(182)] = 4914,
  [SMALL_STATE(183)] = 4924,
  [SMALL_STATE(184)] = 4934,
  [SMALL_STATE(185)] = 4942,
  [SMALL_STATE(186)] = 4952,
  [SMALL_STATE(187)] = 4960,
  [SMALL_STATE(188)] = 4970,
  [SMALL_STATE(189)] = 4980,
  [SMALL_STATE(190)] = 4990,
  [SMALL_STATE(191)] = 5000,
  [SMALL_STATE(192)] = 5007,
  [SMALL_STATE(193)] = 5014,
  [SMALL_STATE(194)] = 5021,
  [SMALL_STATE(195)] = 5028,
  [SMALL_STATE(196)] = 5035,
  [SMALL_STATE(197)] = 5042,
  [SMALL_STATE(198)] = 5049,
  [SMALL_STATE(199)] = 5056,
  [SMALL_STATE(200)] = 5063,
  [SMALL_STATE(201)] = 5070,
  [SMALL_STATE(202)] = 5077,
  [SMALL_STATE(203)] = 5084,
  [SMALL_STATE(204)] = 5091,
  [SMALL_STATE(205)] = 5098,
  [SMALL_STATE(206)] = 5105,
  [SMALL_STATE(207)] = 5112,
  [SMALL_STATE(208)] = 5119,
  [SMALL_STATE(209)] = 5126,
  [SMALL_STATE(210)] = 5133,
  [SMALL_STATE(211)] = 5140,
  [SMALL_STATE(212)] = 5147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_assign_expression, 3, .production_id = 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_assign_expression, 3, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3, .production_id = 8),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 9),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_literal, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_literal, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__component_body_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(45),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(41),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(181),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(180),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(176),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__component_body_repeat1, 2), SHIFT_REPEAT(113),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_handler, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_handler, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handler_body, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handler_body, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_property, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assign_property, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_two_way_property, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_two_way_property, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property, 1, .production_id = 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property, 1, .production_id = 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_assign_property, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_assign_property, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handler_body, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handler_body, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property, 2, .production_id = 11),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property, 2, .production_id = 11),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_handler, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_handler, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 5, .production_id = 14),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 5, .production_id = 14),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 5, .production_id = 15),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 5, .production_id = 15),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 6, .production_id = 16),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 6, .production_id = 16),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 6, .production_id = 17),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 6, .production_id = 17),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handler_body, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handler_body, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 2, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 2, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 3, .production_id = 4),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 3, .production_id = 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_definition, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_back_definition, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_body, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_body, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 4, .production_id = 10),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 4, .production_id = 10),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_body, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_body, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 5, .production_id = 12),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 5, .production_id = 12),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_item, 6, .production_id = 13),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_item, 6, .production_id = 13),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_property, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assign_property, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_single, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_single, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 6),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 6),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_single, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_single, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 7),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_identifier, 1, .production_id = 5),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__define_property, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_parameters, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__define_property, 5),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_parameters, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(126),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(127),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_back_parameters, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(177),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_statement_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_statement_repeat1, 2), SHIFT_REPEAT(173),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_back_parameters_repeat1, 2), SHIFT_REPEAT(208),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_back_parameters_repeat1, 2),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(57),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_element, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_statement_repeat1, 4),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [580] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
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
