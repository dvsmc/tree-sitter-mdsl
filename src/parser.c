#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_root = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_sequence = 4,
  anon_sym_selector = 5,
  anon_sym_parallel = 6,
  anon_sym_race = 7,
  anon_sym_all = 8,
  anon_sym_lotto = 9,
  anon_sym_repeat = 10,
  anon_sym_retry = 11,
  anon_sym_flip = 12,
  anon_sym_succeed = 13,
  anon_sym_fail = 14,
  anon_sym_action = 15,
  anon_sym_condition = 16,
  anon_sym_wait = 17,
  anon_sym_branch = 18,
  anon_sym_LBRACK = 19,
  anon_sym_COMMA = 20,
  anon_sym_RBRACK = 21,
  anon_sym_null = 22,
  anon_sym_entry = 23,
  anon_sym_exit = 24,
  anon_sym_step = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_while = 28,
  anon_sym_until = 29,
  sym_comment = 30,
  sym_identifier = 31,
  sym_number = 32,
  sym_string = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  sym_source_file = 36,
  sym__definition = 37,
  sym_root_node = 38,
  sym_block = 39,
  sym__node = 40,
  sym_composite_node = 41,
  sym_decorator_node = 42,
  sym_leaf_node = 43,
  sym_node_args = 44,
  sym__value = 45,
  sym_callbacks = 46,
  sym_guards = 47,
  sym_boolean = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_block_repeat1 = 50,
  aux_sym_node_args_repeat1 = 51,
  aux_sym_callbacks_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_root] = "root",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_sequence] = "sequence",
  [anon_sym_selector] = "selector",
  [anon_sym_parallel] = "parallel",
  [anon_sym_race] = "race",
  [anon_sym_all] = "all",
  [anon_sym_lotto] = "lotto",
  [anon_sym_repeat] = "repeat",
  [anon_sym_retry] = "retry",
  [anon_sym_flip] = "flip",
  [anon_sym_succeed] = "succeed",
  [anon_sym_fail] = "fail",
  [anon_sym_action] = "action",
  [anon_sym_condition] = "condition",
  [anon_sym_wait] = "wait",
  [anon_sym_branch] = "branch",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_null] = "null",
  [anon_sym_entry] = "entry",
  [anon_sym_exit] = "exit",
  [anon_sym_step] = "step",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_while] = "while",
  [anon_sym_until] = "until",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_root_node] = "root_node",
  [sym_block] = "block",
  [sym__node] = "_node",
  [sym_composite_node] = "composite_node",
  [sym_decorator_node] = "decorator_node",
  [sym_leaf_node] = "leaf_node",
  [sym_node_args] = "node_args",
  [sym__value] = "_value",
  [sym_callbacks] = "callbacks",
  [sym_guards] = "guards",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_node_args_repeat1] = "node_args_repeat1",
  [aux_sym_callbacks_repeat1] = "callbacks_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_root] = anon_sym_root,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_selector] = anon_sym_selector,
  [anon_sym_parallel] = anon_sym_parallel,
  [anon_sym_race] = anon_sym_race,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_lotto] = anon_sym_lotto,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_retry] = anon_sym_retry,
  [anon_sym_flip] = anon_sym_flip,
  [anon_sym_succeed] = anon_sym_succeed,
  [anon_sym_fail] = anon_sym_fail,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_wait] = anon_sym_wait,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_entry] = anon_sym_entry,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_step] = anon_sym_step,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_until] = anon_sym_until,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_root_node] = sym_root_node,
  [sym_block] = sym_block,
  [sym__node] = sym__node,
  [sym_composite_node] = sym_composite_node,
  [sym_decorator_node] = sym_decorator_node,
  [sym_leaf_node] = sym_leaf_node,
  [sym_node_args] = sym_node_args,
  [sym__value] = sym__value,
  [sym_callbacks] = sym_callbacks,
  [sym_guards] = sym_guards,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_node_args_repeat1] = aux_sym_node_args_repeat1,
  [aux_sym_callbacks_repeat1] = aux_sym_callbacks_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_root] = {
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
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parallel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_race] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lotto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_succeed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fail] = {
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
  [anon_sym_wait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
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
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step] = {
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
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_root_node] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_composite_node] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator_node] = {
    .visible = true,
    .named = true,
  },
  [sym_leaf_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_args] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_callbacks] = {
    .visible = true,
    .named = true,
  },
  [sym_guards] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym_node_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_callbacks_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '"', 2,
        '(', 124,
        ')', 125,
        ',', 117,
        '/', 3,
        '[', 116,
        ']', 118,
        'a', 13,
        'b', 75,
        'c', 63,
        'e', 58,
        'f', 6,
        'l', 64,
        'n', 90,
        'p', 10,
        'r', 7,
        's', 22,
        't', 74,
        'u', 60,
        'w', 11,
        '{', 99,
        '}', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 't') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == '{') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_parallel);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_race);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_lotto);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_retry);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_flip);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_succeed);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_entry);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_step);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 95},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 95},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 95},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_root] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [anon_sym_parallel] = ACTIONS(1),
    [anon_sym_race] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_lotto] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_retry] = ACTIONS(1),
    [anon_sym_flip] = ACTIONS(1),
    [anon_sym_succeed] = ACTIONS(1),
    [anon_sym_fail] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_entry] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_step] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym__definition] = STATE(48),
    [sym_root_node] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_root] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_block] = STATE(36),
    [sym__node] = STATE(36),
    [sym_composite_node] = STATE(36),
    [sym_decorator_node] = STATE(36),
    [sym_leaf_node] = STATE(36),
    [sym_node_args] = STATE(3),
    [sym_callbacks] = STATE(5),
    [sym_guards] = STATE(18),
    [aux_sym_callbacks_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_sequence] = ACTIONS(11),
    [anon_sym_selector] = ACTIONS(11),
    [anon_sym_parallel] = ACTIONS(11),
    [anon_sym_race] = ACTIONS(11),
    [anon_sym_all] = ACTIONS(11),
    [anon_sym_lotto] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_retry] = ACTIONS(13),
    [anon_sym_flip] = ACTIONS(13),
    [anon_sym_succeed] = ACTIONS(13),
    [anon_sym_fail] = ACTIONS(13),
    [anon_sym_action] = ACTIONS(15),
    [anon_sym_condition] = ACTIONS(15),
    [anon_sym_wait] = ACTIONS(15),
    [anon_sym_branch] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_entry] = ACTIONS(19),
    [anon_sym_exit] = ACTIONS(19),
    [anon_sym_step] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_until] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [3] = {
    [sym_block] = STATE(34),
    [sym__node] = STATE(34),
    [sym_composite_node] = STATE(34),
    [sym_decorator_node] = STATE(34),
    [sym_leaf_node] = STATE(34),
    [sym_callbacks] = STATE(7),
    [sym_guards] = STATE(22),
    [aux_sym_callbacks_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_sequence] = ACTIONS(11),
    [anon_sym_selector] = ACTIONS(11),
    [anon_sym_parallel] = ACTIONS(11),
    [anon_sym_race] = ACTIONS(11),
    [anon_sym_all] = ACTIONS(11),
    [anon_sym_lotto] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_retry] = ACTIONS(13),
    [anon_sym_flip] = ACTIONS(13),
    [anon_sym_succeed] = ACTIONS(13),
    [anon_sym_fail] = ACTIONS(13),
    [anon_sym_action] = ACTIONS(15),
    [anon_sym_condition] = ACTIONS(15),
    [anon_sym_wait] = ACTIONS(15),
    [anon_sym_branch] = ACTIONS(15),
    [anon_sym_entry] = ACTIONS(19),
    [anon_sym_exit] = ACTIONS(19),
    [anon_sym_step] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_until] = ACTIONS(21),
    [sym_comment] = ACTIONS(25),
  },
  [4] = {
    [sym_node_args] = STATE(6),
    [sym_callbacks] = STATE(23),
    [sym_guards] = STATE(32),
    [aux_sym_callbacks_repeat1] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_sequence] = ACTIONS(27),
    [anon_sym_selector] = ACTIONS(27),
    [anon_sym_parallel] = ACTIONS(27),
    [anon_sym_race] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_lotto] = ACTIONS(27),
    [anon_sym_repeat] = ACTIONS(27),
    [anon_sym_retry] = ACTIONS(27),
    [anon_sym_flip] = ACTIONS(27),
    [anon_sym_succeed] = ACTIONS(27),
    [anon_sym_fail] = ACTIONS(27),
    [anon_sym_action] = ACTIONS(27),
    [anon_sym_condition] = ACTIONS(27),
    [anon_sym_wait] = ACTIONS(27),
    [anon_sym_branch] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_entry] = ACTIONS(19),
    [anon_sym_exit] = ACTIONS(19),
    [anon_sym_step] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_until] = ACTIONS(21),
    [sym_comment] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    STATE(22), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
    ACTIONS(15), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(13), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(34), 5,
      sym_block,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
    ACTIONS(11), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [42] = 6,
    STATE(8), 1,
      aux_sym_callbacks_repeat1,
    STATE(24), 1,
      sym_callbacks,
    STATE(37), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
    ACTIONS(19), 3,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
    ACTIONS(29), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [80] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    STATE(21), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
    ACTIONS(15), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(13), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(38), 5,
      sym_block,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
    ACTIONS(11), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [122] = 3,
    STATE(9), 1,
      aux_sym_callbacks_repeat1,
    ACTIONS(19), 3,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
    ACTIONS(33), 20,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [153] = 3,
    STATE(9), 1,
      aux_sym_callbacks_repeat1,
    ACTIONS(37), 3,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
    ACTIONS(35), 20,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [184] = 1,
    ACTIONS(40), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [210] = 1,
    ACTIONS(42), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [236] = 1,
    ACTIONS(44), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [262] = 1,
    ACTIONS(46), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [288] = 1,
    ACTIONS(48), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [314] = 1,
    ACTIONS(50), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [340] = 1,
    ACTIONS(52), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
      anon_sym_while,
      anon_sym_until,
      sym_comment,
  [366] = 6,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(15), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(13), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(20), 5,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
      aux_sym_block_repeat1,
    ACTIONS(11), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [401] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(15), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(13), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(34), 5,
      sym_block,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
    ACTIONS(11), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [436] = 6,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(15), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(13), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(17), 5,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
      aux_sym_block_repeat1,
    ACTIONS(11), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [471] = 6,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(70), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(67), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(20), 5,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
      aux_sym_block_repeat1,
    ACTIONS(64), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [506] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(15), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(13), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(41), 5,
      sym_block,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
    ACTIONS(11), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [541] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(15), 4,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
    ACTIONS(13), 5,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
    STATE(38), 5,
      sym_block,
      sym__node,
      sym_composite_node,
      sym_decorator_node,
      sym_leaf_node,
    ACTIONS(11), 6,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
  [576] = 3,
    STATE(37), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
    ACTIONS(29), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [603] = 3,
    STATE(40), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
    ACTIONS(78), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [630] = 1,
    ACTIONS(80), 19,
      ts_builtin_sym_end,
      anon_sym_root,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [652] = 1,
    ACTIONS(82), 19,
      ts_builtin_sym_end,
      anon_sym_root,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [674] = 1,
    ACTIONS(84), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [695] = 1,
    ACTIONS(86), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [716] = 1,
    ACTIONS(88), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [737] = 1,
    ACTIONS(90), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [758] = 1,
    ACTIONS(92), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [778] = 1,
    ACTIONS(29), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [798] = 1,
    ACTIONS(94), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [818] = 1,
    ACTIONS(96), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [838] = 1,
    ACTIONS(98), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [858] = 1,
    ACTIONS(100), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [878] = 1,
    ACTIONS(78), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [898] = 1,
    ACTIONS(102), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [918] = 1,
    ACTIONS(104), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [938] = 1,
    ACTIONS(106), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [958] = 1,
    ACTIONS(108), 17,
      anon_sym_RBRACE,
      anon_sym_sequence,
      anon_sym_selector,
      anon_sym_parallel,
      anon_sym_race,
      anon_sym_all,
      anon_sym_lotto,
      anon_sym_repeat,
      anon_sym_retry,
      anon_sym_flip,
      anon_sym_succeed,
      anon_sym_fail,
      anon_sym_action,
      anon_sym_condition,
      anon_sym_wait,
      anon_sym_branch,
      sym_comment,
  [978] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      aux_sym_callbacks_repeat1,
    STATE(35), 1,
      sym_block,
    STATE(43), 1,
      sym_node_args,
    STATE(51), 1,
      sym_callbacks,
    STATE(64), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
    ACTIONS(19), 3,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
  [1009] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_callbacks_repeat1,
    STATE(33), 1,
      sym_block,
    STATE(50), 1,
      sym_callbacks,
    STATE(69), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
    ACTIONS(19), 3,
      anon_sym_entry,
      anon_sym_exit,
      anon_sym_step,
  [1034] = 5,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 2,
      anon_sym_null,
      sym_identifier,
    ACTIONS(114), 2,
      sym_number,
      sym_string,
    ACTIONS(116), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(58), 2,
      sym__value,
      sym_boolean,
  [1054] = 5,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(118), 2,
      anon_sym_null,
      sym_identifier,
    ACTIONS(122), 2,
      sym_number,
      sym_string,
    STATE(59), 2,
      sym__value,
      sym_boolean,
  [1074] = 5,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(126), 2,
      anon_sym_null,
      sym_identifier,
    ACTIONS(128), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym__value,
      sym_boolean,
  [1094] = 4,
    ACTIONS(116), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      anon_sym_null,
      sym_identifier,
    ACTIONS(132), 2,
      sym_number,
      sym_string,
    STATE(54), 2,
      sym__value,
      sym_boolean,
  [1111] = 4,
    ACTIONS(5), 1,
      anon_sym_root,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_comment,
    STATE(49), 3,
      sym__definition,
      sym_root_node,
      aux_sym_source_file_repeat1,
  [1126] = 4,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_root,
    ACTIONS(143), 1,
      sym_comment,
    STATE(49), 3,
      sym__definition,
      sym_root_node,
      aux_sym_source_file_repeat1,
  [1141] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
    STATE(66), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
  [1155] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
    STATE(69), 1,
      sym_guards,
    ACTIONS(21), 2,
      anon_sym_while,
      anon_sym_until,
  [1169] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_node_args_repeat1,
    ACTIONS(149), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1180] = 1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_root,
      sym_comment,
  [1186] = 1,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1192] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_node_args_repeat1,
  [1202] = 1,
    ACTIONS(157), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1208] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_node_args_repeat1,
  [1218] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_node_args_repeat1,
  [1228] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_node_args_repeat1,
  [1238] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_node_args_repeat1,
  [1248] = 1,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_root,
      sym_comment,
  [1254] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(53), 1,
      sym_block,
  [1264] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_node_args_repeat1,
  [1274] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
  [1281] = 2,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
  [1288] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1295] = 2,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
  [1302] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
  [1309] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
  [1316] = 1,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
  [1320] = 1,
    ACTIONS(183), 1,
      sym_identifier,
  [1324] = 1,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
  [1328] = 1,
    ACTIONS(187), 1,
      sym_identifier,
  [1332] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 236,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 288,
  [SMALL_STATE(15)] = 314,
  [SMALL_STATE(16)] = 340,
  [SMALL_STATE(17)] = 366,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 436,
  [SMALL_STATE(20)] = 471,
  [SMALL_STATE(21)] = 506,
  [SMALL_STATE(22)] = 541,
  [SMALL_STATE(23)] = 576,
  [SMALL_STATE(24)] = 603,
  [SMALL_STATE(25)] = 630,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 674,
  [SMALL_STATE(28)] = 695,
  [SMALL_STATE(29)] = 716,
  [SMALL_STATE(30)] = 737,
  [SMALL_STATE(31)] = 758,
  [SMALL_STATE(32)] = 778,
  [SMALL_STATE(33)] = 798,
  [SMALL_STATE(34)] = 818,
  [SMALL_STATE(35)] = 838,
  [SMALL_STATE(36)] = 858,
  [SMALL_STATE(37)] = 878,
  [SMALL_STATE(38)] = 898,
  [SMALL_STATE(39)] = 918,
  [SMALL_STATE(40)] = 938,
  [SMALL_STATE(41)] = 958,
  [SMALL_STATE(42)] = 978,
  [SMALL_STATE(43)] = 1009,
  [SMALL_STATE(44)] = 1034,
  [SMALL_STATE(45)] = 1054,
  [SMALL_STATE(46)] = 1074,
  [SMALL_STATE(47)] = 1094,
  [SMALL_STATE(48)] = 1111,
  [SMALL_STATE(49)] = 1126,
  [SMALL_STATE(50)] = 1141,
  [SMALL_STATE(51)] = 1155,
  [SMALL_STATE(52)] = 1169,
  [SMALL_STATE(53)] = 1180,
  [SMALL_STATE(54)] = 1186,
  [SMALL_STATE(55)] = 1192,
  [SMALL_STATE(56)] = 1202,
  [SMALL_STATE(57)] = 1208,
  [SMALL_STATE(58)] = 1218,
  [SMALL_STATE(59)] = 1228,
  [SMALL_STATE(60)] = 1238,
  [SMALL_STATE(61)] = 1248,
  [SMALL_STATE(62)] = 1254,
  [SMALL_STATE(63)] = 1264,
  [SMALL_STATE(64)] = 1274,
  [SMALL_STATE(65)] = 1281,
  [SMALL_STATE(66)] = 1288,
  [SMALL_STATE(67)] = 1295,
  [SMALL_STATE(68)] = 1302,
  [SMALL_STATE(69)] = 1309,
  [SMALL_STATE(70)] = 1316,
  [SMALL_STATE(71)] = 1320,
  [SMALL_STATE(72)] = 1324,
  [SMALL_STATE(73)] = 1328,
  [SMALL_STATE(74)] = 1332,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_node, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_node, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbacks, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callbacks_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callbacks_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_args, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callbacks_repeat1, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_args, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_args, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callbacks_repeat1, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callbacks_repeat1, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callbacks_repeat1, 7, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_node, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guards, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guards, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guards, 6, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guards, 7, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_node, 5, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_node, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_node, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_node, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_node, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_node, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_node, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_node, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_node, 5, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_args_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_args_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_node, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_node, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
