#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym_keyword = 19,
  sym_document = 20,
  sym_statement = 21,
  sym_preprocessor = 22,
  sym_include = 23,
  sym_theme = 24,
  sym_component = 25,
  sym_block = 26,
  sym_attribute_list = 27,
  sym_attribute = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_attribute_list_repeat1 = 30,
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
  [sym_keyword] = "keyword",
  [sym_document] = "document",
  [sym_statement] = "statement",
  [sym_preprocessor] = "preprocessor",
  [sym_include] = "include",
  [sym_theme] = "theme",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [aux_sym_document_repeat1] = "document_repeat1",
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
  [sym_keyword] = sym_keyword,
  [sym_document] = sym_document,
  [sym_statement] = sym_statement,
  [sym_preprocessor] = sym_preprocessor,
  [sym_include] = sym_include,
  [sym_theme] = sym_theme,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
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
  [aux_sym_document_repeat1] = {
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
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 29,
        '"', 1,
        '\'', 56,
        '(', 49,
        ')', 51,
        ',', 50,
        '<', 31,
        '>', 32,
        '@', 57,
        'a', 20,
        'f', 19,
        'h', 22,
        '{', 47,
        '}', 48,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(25);
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
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 24:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(35);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 29,
        '"', 1,
        '\'', 56,
        '(', 49,
        ')', 51,
        ',', 50,
        '@', 57,
        'a', 52,
        '{', 47,
        '}', 48,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BANGtheme);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_non_breakable_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
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
    [sym_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(41),
    [sym_statement] = STATE(3),
    [sym_preprocessor] = STATE(22),
    [sym_include] = STATE(22),
    [sym_theme] = STATE(22),
    [sym_component] = STATE(18),
    [sym_block] = STATE(22),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_BANGinclude] = ACTIONS(7),
    [anon_sym_BANGtheme] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_keyword] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(20), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(18), 1,
      sym_component,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(29), 2,
      sym_comment,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [34] = 9,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_component,
    ACTIONS(13), 2,
      sym_comment,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [67] = 9,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(13), 2,
      sym_comment,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [100] = 9,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(13), 2,
      sym_comment,
      sym_keyword,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [133] = 9,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(13), 2,
      sym_comment,
      sym_keyword,
    STATE(5), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [166] = 2,
    ACTIONS(42), 3,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
    ACTIONS(40), 11,
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
      sym_keyword,
  [185] = 9,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_component,
    ACTIONS(13), 2,
      sym_comment,
      sym_keyword,
    STATE(4), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(22), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [218] = 6,
    ACTIONS(50), 1,
      anon_sym_as,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_string,
    STATE(14), 1,
      sym_attribute_list,
    ACTIONS(48), 2,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
      sym_keyword,
  [244] = 5,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_BANG,
    ACTIONS(60), 1,
      sym_string,
    STATE(13), 1,
      sym_attribute_list,
    ACTIONS(56), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [267] = 2,
    ACTIONS(64), 1,
      anon_sym_BANG,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
      sym_comment,
      sym_keyword,
  [282] = 2,
    ACTIONS(68), 1,
      anon_sym_BANG,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
      sym_comment,
      sym_keyword,
  [297] = 3,
    ACTIONS(72), 1,
      anon_sym_BANG,
    ACTIONS(74), 1,
      sym_string,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [314] = 3,
    ACTIONS(78), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      sym_string,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [331] = 2,
    ACTIONS(84), 1,
      anon_sym_BANG,
    ACTIONS(82), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [345] = 2,
    ACTIONS(72), 1,
      anon_sym_BANG,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [359] = 2,
    ACTIONS(88), 1,
      anon_sym_BANG,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [373] = 3,
    ACTIONS(92), 1,
      anon_sym_BANG,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [389] = 2,
    ACTIONS(78), 1,
      anon_sym_BANG,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [403] = 2,
    ACTIONS(98), 1,
      anon_sym_BANG,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [416] = 2,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [429] = 2,
    ACTIONS(92), 1,
      anon_sym_BANG,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [442] = 2,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [455] = 2,
    ACTIONS(110), 1,
      anon_sym_BANG,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [468] = 2,
    ACTIONS(114), 1,
      anon_sym_BANG,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [481] = 2,
    ACTIONS(118), 1,
      anon_sym_BANG,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [494] = 2,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [507] = 2,
    ACTIONS(126), 1,
      anon_sym_BANG,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [520] = 2,
    ACTIONS(130), 1,
      anon_sym_BANG,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [533] = 3,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_attribute,
    ACTIONS(134), 2,
      sym_identifier,
      sym_string,
  [544] = 2,
    STATE(37), 1,
      sym_attribute,
    ACTIONS(134), 2,
      sym_identifier,
      sym_string,
  [552] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_attribute_list_repeat1,
  [562] = 2,
    STATE(32), 1,
      sym_attribute,
    ACTIONS(134), 2,
      sym_identifier,
      sym_string,
  [570] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_attribute_list_repeat1,
  [580] = 3,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(144), 1,
      sym_url,
    ACTIONS(146), 1,
      sym_filepath,
  [590] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_attribute_list_repeat1,
  [600] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [605] = 1,
    ACTIONS(153), 1,
      sym_url,
  [609] = 1,
    ACTIONS(155), 1,
      sym_non_breakable_identifier,
  [613] = 1,
    ACTIONS(157), 1,
      anon_sym_from,
  [617] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [621] = 1,
    ACTIONS(161), 1,
      sym_identifier,
  [625] = 1,
    ACTIONS(163), 1,
      anon_sym_GT,
  [629] = 1,
    ACTIONS(165), 1,
      sym_identifier,
  [633] = 1,
    ACTIONS(167), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 133,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 185,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 244,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 314,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 373,
  [SMALL_STATE(19)] = 389,
  [SMALL_STATE(20)] = 403,
  [SMALL_STATE(21)] = 416,
  [SMALL_STATE(22)] = 429,
  [SMALL_STATE(23)] = 442,
  [SMALL_STATE(24)] = 455,
  [SMALL_STATE(25)] = 468,
  [SMALL_STATE(26)] = 481,
  [SMALL_STATE(27)] = 494,
  [SMALL_STATE(28)] = 507,
  [SMALL_STATE(29)] = 520,
  [SMALL_STATE(30)] = 533,
  [SMALL_STATE(31)] = 544,
  [SMALL_STATE(32)] = 552,
  [SMALL_STATE(33)] = 562,
  [SMALL_STATE(34)] = 570,
  [SMALL_STATE(35)] = 580,
  [SMALL_STATE(36)] = 590,
  [SMALL_STATE(37)] = 600,
  [SMALL_STATE(38)] = 605,
  [SMALL_STATE(39)] = 609,
  [SMALL_STATE(40)] = 613,
  [SMALL_STATE(41)] = 617,
  [SMALL_STATE(42)] = 621,
  [SMALL_STATE(43)] = 625,
  [SMALL_STATE(44)] = 629,
  [SMALL_STATE(45)] = 633,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 7),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 7),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 7),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, 0, 7),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, 0, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, 0, 7),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, 0, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, 0, 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, 0, 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, 0, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, 0, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
