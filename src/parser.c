#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_BANG = 1,
  anon_sym_BANGinclude = 2,
  sym_include_open = 3,
  sym_include_close = 4,
  anon_sym_BANGtheme = 5,
  anon_sym_from = 6,
  sym_url = 7,
  sym_filepath = 8,
  anon_sym_as = 9,
  sym_block_open = 10,
  sym_block_close = 11,
  sym_attribute_sep = 12,
  sym_attribute_list_open = 13,
  sym_attribute_list_close = 14,
  sym_identifier = 15,
  sym_non_breakable_identifier = 16,
  sym_string = 17,
  sym_comment = 18,
  sym_delimiter = 19,
  sym_keyword = 20,
  anon_sym_skinparam = 21,
  sym_number = 22,
  sym_document = 23,
  sym_statement = 24,
  sym_preprocessor = 25,
  sym_include = 26,
  sym_theme = 27,
  sym_component = 28,
  sym_block = 29,
  sym_attribute_list = 30,
  sym_attribute = 31,
  sym_skinparameter = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_attribute_list_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_BANGinclude] = "!include",
  [sym_include_open] = "include_open",
  [sym_include_close] = "include_close",
  [anon_sym_BANGtheme] = "!theme",
  [anon_sym_from] = "from",
  [sym_url] = "url",
  [sym_filepath] = "filepath",
  [anon_sym_as] = "as",
  [sym_block_open] = "block_open",
  [sym_block_close] = "block_close",
  [sym_attribute_sep] = "attribute_sep",
  [sym_attribute_list_open] = "attribute_list_open",
  [sym_attribute_list_close] = "attribute_list_close",
  [sym_identifier] = "identifier",
  [sym_non_breakable_identifier] = "non_breakable_identifier",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_delimiter] = "delimiter",
  [sym_keyword] = "keyword",
  [anon_sym_skinparam] = "skinparam",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym_statement] = "statement",
  [sym_preprocessor] = "preprocessor",
  [sym_include] = "include",
  [sym_theme] = "theme",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [sym_skinparameter] = "skinparameter",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [sym_include_open] = sym_include_open,
  [sym_include_close] = sym_include_close,
  [anon_sym_BANGtheme] = anon_sym_BANGtheme,
  [anon_sym_from] = anon_sym_from,
  [sym_url] = sym_url,
  [sym_filepath] = sym_filepath,
  [anon_sym_as] = anon_sym_as,
  [sym_block_open] = sym_block_open,
  [sym_block_close] = sym_block_close,
  [sym_attribute_sep] = sym_attribute_sep,
  [sym_attribute_list_open] = sym_attribute_list_open,
  [sym_attribute_list_close] = sym_attribute_list_close,
  [sym_identifier] = sym_identifier,
  [sym_non_breakable_identifier] = sym_non_breakable_identifier,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_delimiter] = sym_delimiter,
  [sym_keyword] = sym_keyword,
  [anon_sym_skinparam] = anon_sym_skinparam,
  [sym_number] = sym_number,
  [sym_document] = sym_document,
  [sym_statement] = sym_statement,
  [sym_preprocessor] = sym_preprocessor,
  [sym_include] = sym_include,
  [sym_theme] = sym_theme,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [sym_skinparameter] = sym_skinparameter,
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
  [sym_include_open] = {
    .visible = true,
    .named = true,
  },
  [sym_include_close] = {
    .visible = true,
    .named = true,
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
  [sym_block_open] = {
    .visible = true,
    .named = true,
  },
  [sym_block_close] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list_open] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list_close] = {
    .visible = true,
    .named = true,
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
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_skinparam] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
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
  [sym_skinparameter] = {
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
  field_method = 5,
  field_name = 6,
  field_object = 7,
  field_tag = 8,
  field_url = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_component] = "component",
  [field_filepath] = "filepath",
  [field_library] = "library",
  [field_method] = "method",
  [field_name] = "name",
  [field_object] = "object",
  [field_tag] = "tag",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
  [1] =
    {field_filepath, 1},
  [2] =
    {field_method, 0},
    {field_tag, 1},
  [4] =
    {field_object, 0},
  [5] =
    {field_component, 0},
  [6] =
    {field_library, 1},
    {field_library, 2},
    {field_library, 3},
  [9] =
    {field_name, 1},
    {field_url, 3},
  [11] =
    {field_alias, 3},
    {field_method, 0},
    {field_tag, 1},
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
  [5] = 2,
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 3,
  [11] = 6,
  [12] = 12,
  [13] = 12,
  [14] = 9,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 21,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 30,
  [34] = 29,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 45,
  [53] = 39,
  [54] = 51,
  [55] = 49,
  [56] = 40,
  [57] = 42,
  [58] = 58,
  [59] = 48,
  [60] = 58,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 66,
  [70] = 63,
  [71] = 68,
  [72] = 64,
  [73] = 73,
  [74] = 73,
  [75] = 17,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 82,
  [88] = 83,
  [89] = 81,
  [90] = 77,
  [91] = 86,
  [92] = 85,
  [93] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '(', 65,
        ')', 66,
        ',', 64,
        '<', 46,
        '>', 47,
        '@', 81,
        'a', 33,
        'f', 31,
        'h', 35,
        's', 21,
        '{', 62,
        '}', 63,
        '.', 80,
        '[', 80,
        ']', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '(', 65,
        '@', 81,
        'a', 75,
        's', 70,
        '{', 62,
        '}', 63,
        ')', 80,
        '.', 80,
        '[', 80,
        ']', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '(', 65,
        '@', 81,
        's', 70,
        '{', 62,
        '}', 63,
        ')', 80,
        '.', 80,
        '[', 80,
        ']', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '@', 81,
        's', 70,
        '{', 62,
        '}', 63,
        '(', 80,
        ')', 80,
        '.', 80,
        '[', 80,
        ']', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '@', 81,
        's', 70,
        '}', 63,
        '(', 80,
        ')', 80,
        '.', 80,
        '[', 80,
        ']', 80,
        '{', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '{') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 37:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 39:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '(', 65,
        '@', 81,
        'a', 75,
        's', 70,
        '{', 62,
        ')', 80,
        '.', 80,
        '[', 80,
        ']', 80,
        '}', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 40:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '(', 65,
        '@', 81,
        's', 70,
        '{', 62,
        ')', 80,
        '.', 80,
        '[', 80,
        ']', 80,
        '}', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '!', 44,
        '"', 6,
        '\'', 79,
        '@', 81,
        's', 70,
        '{', 62,
        '(', 80,
        ')', 80,
        '.', 80,
        '[', 80,
        ']', 80,
        '}', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 's') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_include_open);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_include_close);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANGtheme);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_block_open);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_block_close);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_attribute_sep);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_attribute_list_open);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_attribute_list_close);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_non_breakable_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_skinparam);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 42},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 42},
  [46] = {.lex_state = 42},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 42},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 42},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 42},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
    [sym_include_open] = ACTIONS(1),
    [sym_include_close] = ACTIONS(1),
    [anon_sym_BANGtheme] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_block_open] = ACTIONS(1),
    [sym_block_close] = ACTIONS(1),
    [sym_attribute_sep] = ACTIONS(1),
    [sym_attribute_list_open] = ACTIONS(1),
    [sym_attribute_list_close] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_skinparam] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(79),
    [sym_statement] = STATE(8),
    [sym_preprocessor] = STATE(59),
    [sym_include] = STATE(59),
    [sym_theme] = STATE(59),
    [sym_component] = STATE(30),
    [sym_block] = STATE(59),
    [sym_skinparameter] = STATE(59),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_BANGinclude] = ACTIONS(7),
    [anon_sym_BANGtheme] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_delimiter] = ACTIONS(13),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_skinparam] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(22), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_skinparam,
    STATE(30), 1,
      sym_component,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    ACTIONS(31), 3,
      sym_comment,
      sym_delimiter,
      sym_keyword,
    STATE(59), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [38] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(43), 1,
      sym_block_close,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(7), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [78] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(53), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(5), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [118] = 11,
    ACTIONS(17), 1,
      sym_block_close,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(58), 1,
      anon_sym_BANGinclude,
    ACTIONS(61), 1,
      anon_sym_BANGtheme,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_delimiter,
    ACTIONS(73), 1,
      anon_sym_skinparam,
    STATE(33), 1,
      sym_component,
    ACTIONS(67), 2,
      sym_comment,
      sym_keyword,
    STATE(5), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [158] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(76), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(12), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [198] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(78), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(5), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [238] = 10,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_skinparam,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_component,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    ACTIONS(13), 3,
      sym_comment,
      sym_delimiter,
      sym_keyword,
    STATE(59), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [276] = 6,
    ACTIONS(86), 1,
      sym_string,
    STATE(30), 1,
      sym_component,
    STATE(40), 1,
      sym_statement,
    ACTIONS(84), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    STATE(59), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [306] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(88), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(4), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [346] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(90), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(13), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [386] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(92), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(5), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [426] = 11,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_BANGinclude,
    ACTIONS(41), 1,
      anon_sym_BANGtheme,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      anon_sym_skinparam,
    ACTIONS(94), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(47), 2,
      sym_comment,
      sym_keyword,
    STATE(5), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [466] = 6,
    ACTIONS(96), 1,
      sym_string,
    STATE(33), 1,
      sym_component,
    STATE(56), 1,
      sym_statement,
    ACTIONS(84), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(82), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
    STATE(48), 5,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_skinparameter,
  [496] = 6,
    ACTIONS(102), 1,
      anon_sym_as,
    ACTIONS(104), 1,
      sym_attribute_list_open,
    ACTIONS(106), 1,
      sym_string,
    STATE(23), 1,
      sym_attribute_list,
    ACTIONS(100), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [523] = 6,
    ACTIONS(108), 1,
      anon_sym_as,
    ACTIONS(110), 1,
      sym_attribute_list_open,
    ACTIONS(112), 1,
      sym_string,
    STATE(22), 1,
      sym_attribute_list,
    ACTIONS(100), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(98), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [550] = 2,
    ACTIONS(114), 5,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(116), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_attribute_list_open,
      sym_string,
      sym_comment,
      sym_keyword,
  [568] = 2,
    ACTIONS(114), 5,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_attribute_list_open,
      sym_string,
      sym_comment,
      sym_keyword,
  [586] = 5,
    ACTIONS(110), 1,
      sym_attribute_list_open,
    ACTIONS(122), 1,
      sym_string,
    STATE(25), 1,
      sym_attribute_list,
    ACTIONS(118), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(120), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [610] = 5,
    ACTIONS(104), 1,
      sym_attribute_list_open,
    ACTIONS(124), 1,
      sym_string,
    STATE(26), 1,
      sym_attribute_list,
    ACTIONS(118), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [634] = 2,
    ACTIONS(126), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(128), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      sym_comment,
      sym_keyword,
  [650] = 3,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(130), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(132), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [668] = 3,
    ACTIONS(136), 1,
      sym_string,
    ACTIONS(130), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [686] = 2,
    ACTIONS(126), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      sym_comment,
      sym_keyword,
  [702] = 3,
    ACTIONS(142), 1,
      sym_string,
    ACTIONS(138), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(140), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [720] = 3,
    ACTIONS(144), 1,
      sym_string,
    ACTIONS(138), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [738] = 2,
    ACTIONS(146), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(148), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      sym_comment,
      sym_keyword,
  [754] = 2,
    ACTIONS(146), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      sym_comment,
      sym_keyword,
  [770] = 2,
    ACTIONS(150), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(152), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [785] = 3,
    ACTIONS(158), 1,
      sym_block_open,
    ACTIONS(156), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_keyword,
  [802] = 2,
    ACTIONS(130), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(132), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [817] = 2,
    ACTIONS(130), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [832] = 3,
    ACTIONS(160), 1,
      sym_block_open,
    ACTIONS(156), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(154), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [849] = 2,
    ACTIONS(150), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [864] = 2,
    ACTIONS(138), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(140), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [879] = 2,
    ACTIONS(138), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [894] = 2,
    ACTIONS(162), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(164), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [909] = 2,
    ACTIONS(162), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [924] = 2,
    ACTIONS(166), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(168), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [938] = 2,
    ACTIONS(172), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [952] = 2,
    ACTIONS(176), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [966] = 2,
    ACTIONS(180), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [980] = 2,
    ACTIONS(176), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(174), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [994] = 2,
    ACTIONS(184), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1008] = 2,
    ACTIONS(188), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1022] = 2,
    ACTIONS(192), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1036] = 2,
    ACTIONS(184), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(182), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1050] = 2,
    ACTIONS(156), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(154), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1064] = 2,
    ACTIONS(196), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1078] = 2,
    ACTIONS(192), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(190), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1092] = 2,
    ACTIONS(198), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(200), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1106] = 2,
    ACTIONS(188), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(186), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1120] = 2,
    ACTIONS(166), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1134] = 2,
    ACTIONS(198), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1148] = 2,
    ACTIONS(196), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(194), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1162] = 2,
    ACTIONS(172), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1176] = 2,
    ACTIONS(180), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(178), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1190] = 2,
    ACTIONS(204), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1204] = 2,
    ACTIONS(156), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1218] = 2,
    ACTIONS(204), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(202), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [1232] = 3,
    ACTIONS(206), 1,
      sym_block_open,
    STATE(16), 1,
      sym_attribute,
    ACTIONS(208), 2,
      sym_identifier,
      sym_string,
  [1243] = 3,
    ACTIONS(210), 1,
      sym_block_open,
    STATE(15), 1,
      sym_attribute,
    ACTIONS(212), 2,
      sym_identifier,
      sym_string,
  [1254] = 3,
    ACTIONS(214), 1,
      sym_attribute_sep,
    ACTIONS(216), 1,
      sym_attribute_list_close,
    STATE(65), 1,
      aux_sym_attribute_list_repeat1,
  [1264] = 3,
    ACTIONS(218), 1,
      sym_include_open,
    ACTIONS(220), 1,
      sym_url,
    ACTIONS(222), 1,
      sym_filepath,
  [1274] = 3,
    ACTIONS(224), 1,
      sym_attribute_sep,
    ACTIONS(227), 1,
      sym_attribute_list_close,
    STATE(65), 1,
      aux_sym_attribute_list_repeat1,
  [1284] = 2,
    STATE(71), 1,
      sym_attribute,
    ACTIONS(229), 2,
      sym_identifier,
      sym_string,
  [1292] = 2,
    STATE(76), 1,
      sym_attribute,
    ACTIONS(229), 2,
      sym_identifier,
      sym_string,
  [1300] = 3,
    ACTIONS(214), 1,
      sym_attribute_sep,
    ACTIONS(231), 1,
      sym_attribute_list_close,
    STATE(63), 1,
      aux_sym_attribute_list_repeat1,
  [1310] = 2,
    STATE(68), 1,
      sym_attribute,
    ACTIONS(229), 2,
      sym_identifier,
      sym_string,
  [1318] = 3,
    ACTIONS(214), 1,
      sym_attribute_sep,
    ACTIONS(233), 1,
      sym_attribute_list_close,
    STATE(65), 1,
      aux_sym_attribute_list_repeat1,
  [1328] = 3,
    ACTIONS(214), 1,
      sym_attribute_sep,
    ACTIONS(235), 1,
      sym_attribute_list_close,
    STATE(70), 1,
      aux_sym_attribute_list_repeat1,
  [1338] = 3,
    ACTIONS(237), 1,
      sym_include_open,
    ACTIONS(239), 1,
      sym_url,
    ACTIONS(241), 1,
      sym_filepath,
  [1348] = 1,
    ACTIONS(243), 2,
      sym_identifier,
      sym_number,
  [1353] = 1,
    ACTIONS(245), 2,
      sym_identifier,
      sym_number,
  [1358] = 1,
    ACTIONS(116), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [1363] = 1,
    ACTIONS(227), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [1368] = 1,
    ACTIONS(247), 1,
      sym_non_breakable_identifier,
  [1372] = 1,
    ACTIONS(249), 1,
      sym_identifier,
  [1376] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [1380] = 1,
    ACTIONS(253), 1,
      sym_identifier,
  [1384] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [1388] = 1,
    ACTIONS(257), 1,
      sym_include_close,
  [1392] = 1,
    ACTIONS(259), 1,
      sym_url,
  [1396] = 1,
    ACTIONS(261), 1,
      sym_identifier,
  [1400] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [1404] = 1,
    ACTIONS(265), 1,
      anon_sym_from,
  [1408] = 1,
    ACTIONS(267), 1,
      sym_include_close,
  [1412] = 1,
    ACTIONS(269), 1,
      sym_url,
  [1416] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [1420] = 1,
    ACTIONS(273), 1,
      sym_non_breakable_identifier,
  [1424] = 1,
    ACTIONS(275), 1,
      anon_sym_from,
  [1428] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [1432] = 1,
    ACTIONS(279), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 276,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 386,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 466,
  [SMALL_STATE(15)] = 496,
  [SMALL_STATE(16)] = 523,
  [SMALL_STATE(17)] = 550,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 610,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 650,
  [SMALL_STATE(23)] = 668,
  [SMALL_STATE(24)] = 686,
  [SMALL_STATE(25)] = 702,
  [SMALL_STATE(26)] = 720,
  [SMALL_STATE(27)] = 738,
  [SMALL_STATE(28)] = 754,
  [SMALL_STATE(29)] = 770,
  [SMALL_STATE(30)] = 785,
  [SMALL_STATE(31)] = 802,
  [SMALL_STATE(32)] = 817,
  [SMALL_STATE(33)] = 832,
  [SMALL_STATE(34)] = 849,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 879,
  [SMALL_STATE(37)] = 894,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 924,
  [SMALL_STATE(40)] = 938,
  [SMALL_STATE(41)] = 952,
  [SMALL_STATE(42)] = 966,
  [SMALL_STATE(43)] = 980,
  [SMALL_STATE(44)] = 994,
  [SMALL_STATE(45)] = 1008,
  [SMALL_STATE(46)] = 1022,
  [SMALL_STATE(47)] = 1036,
  [SMALL_STATE(48)] = 1050,
  [SMALL_STATE(49)] = 1064,
  [SMALL_STATE(50)] = 1078,
  [SMALL_STATE(51)] = 1092,
  [SMALL_STATE(52)] = 1106,
  [SMALL_STATE(53)] = 1120,
  [SMALL_STATE(54)] = 1134,
  [SMALL_STATE(55)] = 1148,
  [SMALL_STATE(56)] = 1162,
  [SMALL_STATE(57)] = 1176,
  [SMALL_STATE(58)] = 1190,
  [SMALL_STATE(59)] = 1204,
  [SMALL_STATE(60)] = 1218,
  [SMALL_STATE(61)] = 1232,
  [SMALL_STATE(62)] = 1243,
  [SMALL_STATE(63)] = 1254,
  [SMALL_STATE(64)] = 1264,
  [SMALL_STATE(65)] = 1274,
  [SMALL_STATE(66)] = 1284,
  [SMALL_STATE(67)] = 1292,
  [SMALL_STATE(68)] = 1300,
  [SMALL_STATE(69)] = 1310,
  [SMALL_STATE(70)] = 1318,
  [SMALL_STATE(71)] = 1328,
  [SMALL_STATE(72)] = 1338,
  [SMALL_STATE(73)] = 1348,
  [SMALL_STATE(74)] = 1353,
  [SMALL_STATE(75)] = 1358,
  [SMALL_STATE(76)] = 1363,
  [SMALL_STATE(77)] = 1368,
  [SMALL_STATE(78)] = 1372,
  [SMALL_STATE(79)] = 1376,
  [SMALL_STATE(80)] = 1380,
  [SMALL_STATE(81)] = 1384,
  [SMALL_STATE(82)] = 1388,
  [SMALL_STATE(83)] = 1392,
  [SMALL_STATE(84)] = 1396,
  [SMALL_STATE(85)] = 1400,
  [SMALL_STATE(86)] = 1404,
  [SMALL_STATE(87)] = 1408,
  [SMALL_STATE(88)] = 1412,
  [SMALL_STATE(89)] = 1416,
  [SMALL_STATE(90)] = 1420,
  [SMALL_STATE(91)] = 1424,
  [SMALL_STATE(92)] = 1428,
  [SMALL_STATE(93)] = 1432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 8),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, 0, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, 0, 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 8),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, 0, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, 0, 8),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, 0, 7),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, 0, 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, 0, 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, 0, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparameter, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparameter, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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
