#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_root = 3,
  anon_sym_selector = 4,
  anon_sym_action = 5,
  anon_sym_condition = 6,
  anon_sym_lotto = 7,
  anon_sym_while = 8,
  anon_sym_sequence = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  sym_identifier = 13,
  sym_string = 14,
  aux_sym_expression_token1 = 15,
  sym_source_file = 16,
  sym__block_statement = 17,
  sym_block = 18,
  sym_keyword = 19,
  sym_sequence_block = 20,
  sym_lotto_block = 21,
  sym_condition = 22,
  sym_action = 23,
  sym_expression = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_block_repeat1 = 26,
  aux_sym_lotto_block_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_root] = "root",
  [anon_sym_selector] = "selector",
  [anon_sym_action] = "action",
  [anon_sym_condition] = "condition",
  [anon_sym_lotto] = "lotto",
  [anon_sym_while] = "while",
  [anon_sym_sequence] = "sequence",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [aux_sym_expression_token1] = "expression_token1",
  [sym_source_file] = "source_file",
  [sym__block_statement] = "_block_statement",
  [sym_block] = "block",
  [sym_keyword] = "keyword",
  [sym_sequence_block] = "sequence_block",
  [sym_lotto_block] = "lotto_block",
  [sym_condition] = "condition",
  [sym_action] = "action",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_lotto_block_repeat1] = "lotto_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_root] = anon_sym_root,
  [anon_sym_selector] = anon_sym_selector,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_lotto] = anon_sym_lotto,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [sym_source_file] = sym_source_file,
  [sym__block_statement] = sym__block_statement,
  [sym_block] = sym_block,
  [sym_keyword] = sym_keyword,
  [sym_sequence_block] = sym_sequence_block,
  [sym_lotto_block] = sym_lotto_block,
  [sym_condition] = sym_condition,
  [sym_action] = sym_action,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_lotto_block_repeat1] = aux_sym_lotto_block_repeat1,
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_root] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lotto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_block] = {
    .visible = true,
    .named = true,
  },
  [sym_lotto_block] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lotto_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_parameter = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parameter] = "parameter",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_name, 2},
    {field_parameter, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 1,
        ',', 59,
        '[', 58,
        ']', 60,
        'a', 61,
        'c', 81,
        'l', 84,
        'r', 88,
        's', 65,
        'w', 70,
        '{', 42,
        '}', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'q') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 1,
        'a', 2,
        'c', 22,
        'l', 25,
        'r', 29,
        's', 6,
        'w', 11,
        '}', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_root);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_selector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_condition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_lotto);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_lotto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'q') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_root] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_lotto] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_block] = STATE(11),
    [sym_keyword] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_root] = ACTIONS(5),
    [anon_sym_selector] = ACTIONS(5),
    [anon_sym_action] = ACTIONS(5),
    [anon_sym_condition] = ACTIONS(5),
    [anon_sym_lotto] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(5),
  },
  [2] = {
    [sym__block_statement] = STATE(6),
    [sym_block] = STATE(6),
    [sym_keyword] = STATE(34),
    [sym_sequence_block] = STATE(6),
    [sym_lotto_block] = STATE(6),
    [sym_condition] = STATE(6),
    [sym_action] = STATE(6),
    [sym_expression] = STATE(6),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_root] = ACTIONS(5),
    [anon_sym_selector] = ACTIONS(5),
    [anon_sym_action] = ACTIONS(9),
    [anon_sym_condition] = ACTIONS(11),
    [anon_sym_lotto] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(5),
    [anon_sym_sequence] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_expression_token1] = ACTIONS(17),
  },
  [3] = {
    [sym__block_statement] = STATE(4),
    [sym_block] = STATE(4),
    [sym_keyword] = STATE(34),
    [sym_sequence_block] = STATE(4),
    [sym_lotto_block] = STATE(4),
    [sym_condition] = STATE(4),
    [sym_action] = STATE(4),
    [sym_expression] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_root] = ACTIONS(5),
    [anon_sym_selector] = ACTIONS(5),
    [anon_sym_action] = ACTIONS(9),
    [anon_sym_condition] = ACTIONS(11),
    [anon_sym_lotto] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(5),
    [anon_sym_sequence] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_expression_token1] = ACTIONS(17),
  },
  [4] = {
    [sym__block_statement] = STATE(5),
    [sym_block] = STATE(5),
    [sym_keyword] = STATE(34),
    [sym_sequence_block] = STATE(5),
    [sym_lotto_block] = STATE(5),
    [sym_condition] = STATE(5),
    [sym_action] = STATE(5),
    [sym_expression] = STATE(5),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_root] = ACTIONS(5),
    [anon_sym_selector] = ACTIONS(5),
    [anon_sym_action] = ACTIONS(9),
    [anon_sym_condition] = ACTIONS(11),
    [anon_sym_lotto] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(5),
    [anon_sym_sequence] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_expression_token1] = ACTIONS(17),
  },
  [5] = {
    [sym__block_statement] = STATE(5),
    [sym_block] = STATE(5),
    [sym_keyword] = STATE(34),
    [sym_sequence_block] = STATE(5),
    [sym_lotto_block] = STATE(5),
    [sym_condition] = STATE(5),
    [sym_action] = STATE(5),
    [sym_expression] = STATE(5),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_root] = ACTIONS(25),
    [anon_sym_selector] = ACTIONS(25),
    [anon_sym_action] = ACTIONS(28),
    [anon_sym_condition] = ACTIONS(31),
    [anon_sym_lotto] = ACTIONS(34),
    [anon_sym_while] = ACTIONS(25),
    [anon_sym_sequence] = ACTIONS(37),
    [sym_string] = ACTIONS(40),
    [aux_sym_expression_token1] = ACTIONS(40),
  },
  [6] = {
    [sym__block_statement] = STATE(5),
    [sym_block] = STATE(5),
    [sym_keyword] = STATE(34),
    [sym_sequence_block] = STATE(5),
    [sym_lotto_block] = STATE(5),
    [sym_condition] = STATE(5),
    [sym_action] = STATE(5),
    [sym_expression] = STATE(5),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_root] = ACTIONS(5),
    [anon_sym_selector] = ACTIONS(5),
    [anon_sym_action] = ACTIONS(9),
    [anon_sym_condition] = ACTIONS(11),
    [anon_sym_lotto] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(5),
    [anon_sym_sequence] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_expression_token1] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(45), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [14] = 1,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [28] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_keyword,
    STATE(9), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(51), 6,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
  [47] = 1,
    ACTIONS(54), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [60] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_keyword,
    STATE(9), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 6,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
  [79] = 1,
    ACTIONS(58), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [92] = 1,
    ACTIONS(60), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [105] = 1,
    ACTIONS(62), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [118] = 1,
    ACTIONS(64), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [131] = 1,
    ACTIONS(66), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [144] = 1,
    ACTIONS(68), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [157] = 1,
    ACTIONS(70), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [170] = 1,
    ACTIONS(72), 10,
      anon_sym_RBRACE,
      anon_sym_root,
      anon_sym_selector,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_lotto,
      anon_sym_while,
      anon_sym_sequence,
      sym_string,
      aux_sym_expression_token1,
  [183] = 3,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_action,
    STATE(21), 2,
      sym_action,
      aux_sym_lotto_block_repeat1,
  [194] = 3,
    ACTIONS(76), 1,
      anon_sym_action,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_action,
      aux_sym_lotto_block_repeat1,
  [205] = 3,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_action,
    STATE(22), 2,
      sym_action,
      aux_sym_lotto_block_repeat1,
  [216] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
  [223] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
  [230] = 2,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
  [237] = 2,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
  [244] = 1,
    ACTIONS(99), 1,
      sym_string,
  [248] = 1,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
  [252] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [256] = 1,
    ACTIONS(103), 1,
      sym_string,
  [260] = 1,
    ACTIONS(105), 1,
      sym_identifier,
  [264] = 1,
    ACTIONS(107), 1,
      sym_identifier,
  [268] = 1,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
  [272] = 1,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
  [276] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
  [280] = 1,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
  [284] = 1,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
  [288] = 1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 14,
  [SMALL_STATE(9)] = 28,
  [SMALL_STATE(10)] = 47,
  [SMALL_STATE(11)] = 60,
  [SMALL_STATE(12)] = 79,
  [SMALL_STATE(13)] = 92,
  [SMALL_STATE(14)] = 105,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 131,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 157,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 183,
  [SMALL_STATE(21)] = 194,
  [SMALL_STATE(22)] = 205,
  [SMALL_STATE(23)] = 216,
  [SMALL_STATE(24)] = 223,
  [SMALL_STATE(25)] = 230,
  [SMALL_STATE(26)] = 237,
  [SMALL_STATE(27)] = 244,
  [SMALL_STATE(28)] = 248,
  [SMALL_STATE(29)] = 252,
  [SMALL_STATE(30)] = 256,
  [SMALL_STATE(31)] = 260,
  [SMALL_STATE(32)] = 264,
  [SMALL_STATE(33)] = 268,
  [SMALL_STATE(34)] = 272,
  [SMALL_STATE(35)] = 276,
  [SMALL_STATE(36)] = 280,
  [SMALL_STATE(37)] = 284,
  [SMALL_STATE(38)] = 288,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lotto_block, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_block, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_block, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lotto_block, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 6, 0, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lotto_block_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lotto_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0), SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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

TS_PUBLIC const TSLanguage *tree_sitter_mdsl(void) {
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
