#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_BANG = 1,
  anon_sym_BANGinclude = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_BANGtheme = 5,
  anon_sym_from = 6,
  sym_url = 7,
  sym_filepath = 8,
  anon_sym_as = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  sym_identifier = 15,
  sym_non_breakable_identifier = 16,
  sym_string = 17,
  sym_comment = 18,
  sym_type = 19,
  sym_keyword = 20,
  sym_source_file = 21,
  sym_statement = 22,
  sym_preprocessor = 23,
  sym_include = 24,
  sym_theme = 25,
  sym_component = 26,
  sym_block = 27,
  sym_attribute_list = 28,
  sym_attribute = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_attribute_list_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_BANGinclude] = "!include",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_BANGtheme] = "!theme",
  [anon_sym_from] = "from",
  [sym_url] = "url",
  [sym_filepath] = "filepath",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_non_breakable_identifier] = "non_breakable_identifier",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_type] = "type",
  [sym_keyword] = "keyword",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_preprocessor] = "preprocessor",
  [sym_include] = "include",
  [sym_theme] = "theme",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BANGtheme] = anon_sym_BANGtheme,
  [anon_sym_from] = anon_sym_from,
  [sym_url] = sym_url,
  [sym_filepath] = sym_filepath,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_non_breakable_identifier] = sym_non_breakable_identifier,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_type] = sym_type,
  [sym_keyword] = sym_keyword,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_preprocessor] = sym_preprocessor,
  [sym_include] = sym_include,
  [sym_theme] = sym_theme,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
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
  [anon_sym_BANGtheme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_non_breakable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_theme] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_component = 2,
  field_filepath = 3,
  field_library = 4,
  field_name = 5,
  field_tag = 6,
  field_type = 7,
  field_url = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_component] = "component",
  [field_filepath] = "filepath",
  [field_library] = "library",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_type] = "type",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
  [1] =
    {field_filepath, 1},
  [2] =
    {field_tag, 1},
    {field_type, 0},
  [4] =
    {field_component, 0},
  [5] =
    {field_library, 2},
  [6] =
    {field_name, 1},
    {field_url, 3},
  [8] =
    {field_alias, 3},
    {field_tag, 1},
    {field_type, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(261);
      ADVANCE_MAP(
        '!', 262,
        '"', 1,
        '\'', 442,
        '(', 282,
        ')', 284,
        ',', 283,
        '<', 264,
        '>', 265,
        '@', 83,
        'a', 43,
        'b', 174,
        'c', 7,
        'd', 20,
        'e', 155,
        'f', 115,
        'h', 75,
        'i', 167,
        'j', 213,
        'l', 13,
        'm', 8,
        'n', 173,
        'o', 41,
        'p', 9,
        'q', 245,
        'r', 76,
        's', 219,
        'u', 214,
        '{', 280,
        '}', 281,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(441);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(258);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        'b', 186,
        'c', 110,
        'd', 82,
        'e', 47,
        'f', 126,
        'g', 38,
        'h', 55,
        'j', 59,
        'l', 39,
        'm', 30,
        'n', 252,
        'p', 205,
        'r', 97,
        's', 26,
        't', 208,
        'u', 149,
        'w', 44,
        'y', 24,
      );
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(443);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(444);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(444);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 129:
      if (lookahead == 'j') ADVANCE(86);
      END_STATE();
    case 130:
      if (lookahead == 'j') ADVANCE(100);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(443);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(124);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(444);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 251:
      if (lookahead == 'w') ADVANCE(444);
      END_STATE();
    case 252:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 253:
      if (lookahead == 'x') ADVANCE(444);
      END_STATE();
    case 254:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(443);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(444);
      END_STATE();
    case 257:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(257);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(268);
      END_STATE();
    case 259:
      if (eof) ADVANCE(261);
      ADVANCE_MAP(
        '!', 262,
        '"', 1,
        '\'', 442,
        '(', 282,
        ')', 284,
        ',', 283,
        '@', 83,
        'a', 310,
        'b', 386,
        'c', 285,
        'd', 293,
        'e', 375,
        'f', 350,
        'h', 331,
        'i', 380,
        'j', 409,
        'l', 290,
        'm', 286,
        'n', 385,
        'o', 308,
        'p', 287,
        'q', 434,
        'r', 332,
        's', 416,
        'u', 410,
        '{', 280,
        '}', 281,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 260:
      if (eof) ADVANCE(261);
      ADVANCE_MAP(
        '!', 262,
        '"', 1,
        '\'', 442,
        '(', 282,
        '@', 83,
        'a', 309,
        'b', 386,
        'c', 285,
        'd', 293,
        'e', 375,
        'f', 350,
        'h', 331,
        'i', 380,
        'j', 409,
        'l', 290,
        'm', 286,
        'n', 385,
        'o', 308,
        'p', 287,
        'q', 434,
        'r', 332,
        's', 416,
        'u', 410,
        '{', 280,
        '}', 281,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_BANGtheme);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(268);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'o') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 's') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 's') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == 'x') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_non_breakable_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 260},
  [2] = {.lex_state = 260},
  [3] = {.lex_state = 260},
  [4] = {.lex_state = 260},
  [5] = {.lex_state = 260},
  [6] = {.lex_state = 260},
  [7] = {.lex_state = 259},
  [8] = {.lex_state = 260},
  [9] = {.lex_state = 259},
  [10] = {.lex_state = 260},
  [11] = {.lex_state = 260},
  [12] = {.lex_state = 260},
  [13] = {.lex_state = 260},
  [14] = {.lex_state = 260},
  [15] = {.lex_state = 260},
  [16] = {.lex_state = 260},
  [17] = {.lex_state = 260},
  [18] = {.lex_state = 260},
  [19] = {.lex_state = 260},
  [20] = {.lex_state = 260},
  [21] = {.lex_state = 260},
  [22] = {.lex_state = 260},
  [23] = {.lex_state = 260},
  [24] = {.lex_state = 260},
  [25] = {.lex_state = 260},
  [26] = {.lex_state = 260},
  [27] = {.lex_state = 260},
  [28] = {.lex_state = 260},
  [29] = {.lex_state = 260},
  [30] = {.lex_state = 260},
  [31] = {.lex_state = 260},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 260},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 257},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 260},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 260},
  [45] = {.lex_state = 260},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BANGtheme] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_statement] = STATE(3),
    [sym_preprocessor] = STATE(22),
    [sym_include] = STATE(22),
    [sym_theme] = STATE(22),
    [sym_component] = STATE(18),
    [sym_block] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_BANGinclude] = ACTIONS(7),
    [anon_sym_BANGtheme] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_type] = ACTIONS(15),
    [sym_keyword] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(22), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_comment,
    STATE(18), 1,
      sym_component,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(34), 2,
      sym_type,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [37] = 10,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_component,
    ACTIONS(15), 2,
      sym_type,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [73] = 10,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(15), 2,
      sym_type,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [109] = 10,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(15), 2,
      sym_type,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [145] = 10,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(15), 2,
      sym_type,
      sym_keyword,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [181] = 2,
    ACTIONS(47), 5,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      sym_type,
      sym_keyword,
    ACTIONS(45), 10,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string,
      sym_comment,
  [201] = 10,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(15), 2,
      sym_type,
      sym_keyword,
    STATE(4), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [237] = 6,
    ACTIONS(55), 1,
      anon_sym_as,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_string,
    STATE(14), 1,
      sym_attribute_list,
    ACTIONS(53), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_type,
      sym_keyword,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
  [264] = 5,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      sym_string,
    STATE(13), 1,
      sym_attribute_list,
    ACTIONS(63), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [288] = 2,
    ACTIONS(69), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
      sym_comment,
  [304] = 2,
    ACTIONS(73), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
      sym_comment,
  [320] = 3,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(77), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [338] = 3,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(83), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [356] = 2,
    ACTIONS(89), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [371] = 2,
    ACTIONS(77), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [386] = 2,
    ACTIONS(93), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [401] = 3,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [418] = 2,
    ACTIONS(83), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [433] = 2,
    ACTIONS(103), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [447] = 2,
    ACTIONS(107), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [461] = 2,
    ACTIONS(97), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [475] = 2,
    ACTIONS(111), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [489] = 2,
    ACTIONS(115), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [503] = 2,
    ACTIONS(119), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [517] = 2,
    ACTIONS(123), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [531] = 2,
    ACTIONS(127), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [545] = 2,
    ACTIONS(131), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [559] = 2,
    ACTIONS(135), 3,
      anon_sym_BANG,
      sym_type,
      sym_keyword,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [573] = 3,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_attribute,
    ACTIONS(139), 2,
      sym_identifier,
      sym_string,
  [584] = 2,
    STATE(37), 1,
      sym_attribute,
    ACTIONS(139), 2,
      sym_identifier,
      sym_string,
  [592] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_attribute_list_repeat1,
  [602] = 2,
    STATE(32), 1,
      sym_attribute,
    ACTIONS(139), 2,
      sym_identifier,
      sym_string,
  [610] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_attribute_list_repeat1,
  [620] = 3,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      sym_url,
    ACTIONS(151), 1,
      sym_filepath,
  [630] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_attribute_list_repeat1,
  [640] = 1,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [645] = 1,
    ACTIONS(158), 1,
      sym_url,
  [649] = 1,
    ACTIONS(160), 1,
      sym_non_breakable_identifier,
  [653] = 1,
    ACTIONS(162), 1,
      anon_sym_from,
  [657] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [661] = 1,
    ACTIONS(166), 1,
      sym_identifier,
  [665] = 1,
    ACTIONS(168), 1,
      anon_sym_GT,
  [669] = 1,
    ACTIONS(170), 1,
      sym_identifier,
  [673] = 1,
    ACTIONS(172), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 320,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 356,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 418,
  [SMALL_STATE(20)] = 433,
  [SMALL_STATE(21)] = 447,
  [SMALL_STATE(22)] = 461,
  [SMALL_STATE(23)] = 475,
  [SMALL_STATE(24)] = 489,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 517,
  [SMALL_STATE(27)] = 531,
  [SMALL_STATE(28)] = 545,
  [SMALL_STATE(29)] = 559,
  [SMALL_STATE(30)] = 573,
  [SMALL_STATE(31)] = 584,
  [SMALL_STATE(32)] = 592,
  [SMALL_STATE(33)] = 602,
  [SMALL_STATE(34)] = 610,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 640,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 649,
  [SMALL_STATE(40)] = 653,
  [SMALL_STATE(41)] = 657,
  [SMALL_STATE(42)] = 661,
  [SMALL_STATE(43)] = 665,
  [SMALL_STATE(44)] = 669,
  [SMALL_STATE(45)] = 673,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 7),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, 0, 7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, 0, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, 0, 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, 0, 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, 0, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, 0, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, 0, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, 0, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_plantuml(void) {
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
