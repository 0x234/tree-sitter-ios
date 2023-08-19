#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 45
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_command_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_interface = 4,
  aux_sym_interface_token1 = 5,
  anon_sym_router = 6,
  anon_sym_bgp = 7,
  anon_sym_ospf = 8,
  anon_sym_eigrp = 9,
  anon_sym_rip = 10,
  anon_sym_access_DASHlist = 11,
  aux_sym_acl_token1 = 12,
  anon_sym_aaa = 13,
  anon_sym_line = 14,
  anon_sym_vty = 15,
  anon_sym_switchport = 16,
  anon_sym_mode = 17,
  anon_sym_trunk = 18,
  anon_sym_allowed = 19,
  anon_sym_vlan = 20,
  aux_sym_trunk_interface_token1 = 21,
  anon_sym_ip = 22,
  anon_sym_access_DASHgroup = 23,
  anon_sym_in = 24,
  anon_sym_out = 25,
  anon_sym_permit = 26,
  anon_sym_deny = 27,
  anon_sym_source = 28,
  anon_sym_any = 29,
  anon_sym_destination = 30,
  anon_sym_protocol = 31,
  anon_sym_tcp = 32,
  anon_sym_udp = 33,
  anon_sym_neighbor = 34,
  aux_sym_bgp_peer_authentication_token1 = 35,
  anon_sym_password = 36,
  anon_sym_authentication = 37,
  anon_sym_md5 = 38,
  anon_sym_text = 39,
  anon_sym_transport = 40,
  anon_sym_input = 41,
  anon_sym_output = 42,
  anon_sym_ssh = 43,
  anon_sym_port_DASHsecurity = 44,
  anon_sym_maximum = 45,
  anon_sym_1 = 46,
  anon_sym_access = 47,
  sym_start = 48,
  sym__statement = 49,
  sym_command = 50,
  sym_config_block = 51,
  sym_interface = 52,
  sym_routing_protocol = 53,
  sym_acl = 54,
  sym_aaa = 55,
  sym_vty_access = 56,
  sym_bgp = 57,
  sym_eigrp = 58,
  sym_rip = 59,
  sym_trunk_interface = 60,
  sym_interface_acl = 61,
  sym_acl_rule = 62,
  sym_acl_rule_conditions = 63,
  sym_bgp_neighbor = 64,
  sym_vty_login_method = 65,
  sym_switchport_interface = 66,
  sym_port_security = 67,
  sym_access_vlan = 68,
  aux_sym_start_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_command_token1] = "command_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_interface] = "interface",
  [aux_sym_interface_token1] = "interface_token1",
  [anon_sym_router] = "router",
  [anon_sym_bgp] = "bgp",
  [anon_sym_ospf] = "ospf",
  [anon_sym_eigrp] = "eigrp",
  [anon_sym_rip] = "rip",
  [anon_sym_access_DASHlist] = "access-list",
  [aux_sym_acl_token1] = "acl_token1",
  [anon_sym_aaa] = "aaa",
  [anon_sym_line] = "line",
  [anon_sym_vty] = "vty",
  [anon_sym_switchport] = "switchport",
  [anon_sym_mode] = "mode",
  [anon_sym_trunk] = "trunk",
  [anon_sym_allowed] = "allowed",
  [anon_sym_vlan] = "vlan",
  [aux_sym_trunk_interface_token1] = "trunk_interface_token1",
  [anon_sym_ip] = "ip",
  [anon_sym_access_DASHgroup] = "access-group",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_permit] = "permit",
  [anon_sym_deny] = "deny",
  [anon_sym_source] = "source",
  [anon_sym_any] = "any",
  [anon_sym_destination] = "destination",
  [anon_sym_protocol] = "protocol",
  [anon_sym_tcp] = "tcp",
  [anon_sym_udp] = "udp",
  [anon_sym_neighbor] = "neighbor",
  [aux_sym_bgp_peer_authentication_token1] = "bgp_peer_authentication_token1",
  [anon_sym_password] = "password",
  [anon_sym_authentication] = "authentication",
  [anon_sym_md5] = "md5",
  [anon_sym_text] = "text",
  [anon_sym_transport] = "transport",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_ssh] = "ssh",
  [anon_sym_port_DASHsecurity] = "port-security",
  [anon_sym_maximum] = "maximum",
  [anon_sym_1] = "1",
  [anon_sym_access] = "access",
  [sym_start] = "start",
  [sym__statement] = "_statement",
  [sym_command] = "command",
  [sym_config_block] = "config_block",
  [sym_interface] = "interface",
  [sym_routing_protocol] = "routing_protocol",
  [sym_acl] = "acl",
  [sym_aaa] = "aaa",
  [sym_vty_access] = "vty_access",
  [sym_bgp] = "bgp",
  [sym_eigrp] = "eigrp",
  [sym_rip] = "rip",
  [sym_trunk_interface] = "trunk_interface",
  [sym_interface_acl] = "interface_acl",
  [sym_acl_rule] = "acl_rule",
  [sym_acl_rule_conditions] = "acl_rule_conditions",
  [sym_bgp_neighbor] = "bgp_neighbor",
  [sym_vty_login_method] = "vty_login_method",
  [sym_switchport_interface] = "switchport_interface",
  [sym_port_security] = "port_security",
  [sym_access_vlan] = "access_vlan",
  [aux_sym_start_repeat1] = "start_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_interface] = anon_sym_interface,
  [aux_sym_interface_token1] = aux_sym_interface_token1,
  [anon_sym_router] = anon_sym_router,
  [anon_sym_bgp] = anon_sym_bgp,
  [anon_sym_ospf] = anon_sym_ospf,
  [anon_sym_eigrp] = anon_sym_eigrp,
  [anon_sym_rip] = anon_sym_rip,
  [anon_sym_access_DASHlist] = anon_sym_access_DASHlist,
  [aux_sym_acl_token1] = aux_sym_acl_token1,
  [anon_sym_aaa] = anon_sym_aaa,
  [anon_sym_line] = anon_sym_line,
  [anon_sym_vty] = anon_sym_vty,
  [anon_sym_switchport] = anon_sym_switchport,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_trunk] = anon_sym_trunk,
  [anon_sym_allowed] = anon_sym_allowed,
  [anon_sym_vlan] = anon_sym_vlan,
  [aux_sym_trunk_interface_token1] = aux_sym_trunk_interface_token1,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_access_DASHgroup] = anon_sym_access_DASHgroup,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_permit] = anon_sym_permit,
  [anon_sym_deny] = anon_sym_deny,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_destination] = anon_sym_destination,
  [anon_sym_protocol] = anon_sym_protocol,
  [anon_sym_tcp] = anon_sym_tcp,
  [anon_sym_udp] = anon_sym_udp,
  [anon_sym_neighbor] = anon_sym_neighbor,
  [aux_sym_bgp_peer_authentication_token1] = aux_sym_bgp_peer_authentication_token1,
  [anon_sym_password] = anon_sym_password,
  [anon_sym_authentication] = anon_sym_authentication,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_transport] = anon_sym_transport,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_ssh] = anon_sym_ssh,
  [anon_sym_port_DASHsecurity] = anon_sym_port_DASHsecurity,
  [anon_sym_maximum] = anon_sym_maximum,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_access] = anon_sym_access,
  [sym_start] = sym_start,
  [sym__statement] = sym__statement,
  [sym_command] = sym_command,
  [sym_config_block] = sym_config_block,
  [sym_interface] = sym_interface,
  [sym_routing_protocol] = sym_routing_protocol,
  [sym_acl] = sym_acl,
  [sym_aaa] = sym_aaa,
  [sym_vty_access] = sym_vty_access,
  [sym_bgp] = sym_bgp,
  [sym_eigrp] = sym_eigrp,
  [sym_rip] = sym_rip,
  [sym_trunk_interface] = sym_trunk_interface,
  [sym_interface_acl] = sym_interface_acl,
  [sym_acl_rule] = sym_acl_rule,
  [sym_acl_rule_conditions] = sym_acl_rule_conditions,
  [sym_bgp_neighbor] = sym_bgp_neighbor,
  [sym_vty_login_method] = sym_vty_login_method,
  [sym_switchport_interface] = sym_switchport_interface,
  [sym_port_security] = sym_port_security,
  [sym_access_vlan] = sym_access_vlan,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
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
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interface_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_router] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ospf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eigrp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_access_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_acl_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_aaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_line] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switchport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trunk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vlan] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_trunk_interface_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_access_DASHgroup] = {
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
  [anon_sym_permit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deny] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_destination] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neighbor] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bgp_peer_authentication_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_password] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authentication] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port_DASHsecurity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maximum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_access] = {
    .visible = true,
    .named = false,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_config_block] = {
    .visible = true,
    .named = true,
  },
  [sym_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_routing_protocol] = {
    .visible = true,
    .named = true,
  },
  [sym_acl] = {
    .visible = true,
    .named = true,
  },
  [sym_aaa] = {
    .visible = true,
    .named = true,
  },
  [sym_vty_access] = {
    .visible = true,
    .named = true,
  },
  [sym_bgp] = {
    .visible = true,
    .named = true,
  },
  [sym_eigrp] = {
    .visible = true,
    .named = true,
  },
  [sym_rip] = {
    .visible = true,
    .named = true,
  },
  [sym_trunk_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_acl] = {
    .visible = true,
    .named = true,
  },
  [sym_acl_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_acl_rule_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_bgp_neighbor] = {
    .visible = true,
    .named = true,
  },
  [sym_vty_login_method] = {
    .visible = true,
    .named = true,
  },
  [sym_switchport_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_port_security] = {
    .visible = true,
    .named = true,
  },
  [sym_access_vlan] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_start_repeat1] = {
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
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 3,
  [21] = 21,
  [22] = 2,
  [23] = 23,
  [24] = 4,
  [25] = 25,
  [26] = 26,
  [27] = 9,
  [28] = 28,
  [29] = 5,
  [30] = 28,
  [31] = 10,
  [32] = 23,
  [33] = 21,
  [34] = 11,
  [35] = 25,
  [36] = 26,
  [37] = 6,
  [38] = 8,
  [39] = 19,
  [40] = 18,
  [41] = 12,
  [42] = 16,
  [43] = 13,
  [44] = 7,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
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
  [72] = 71,
  [73] = 70,
  [74] = 69,
  [75] = 66,
  [76] = 61,
  [77] = 58,
  [78] = 57,
  [79] = 56,
  [80] = 68,
  [81] = 67,
  [82] = 65,
  [83] = 64,
  [84] = 55,
  [85] = 63,
  [86] = 54,
  [87] = 87,
  [88] = 51,
  [89] = 87,
  [90] = 90,
  [91] = 62,
  [92] = 49,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 90,
  [99] = 96,
  [100] = 97,
  [101] = 95,
  [102] = 52,
  [103] = 59,
  [104] = 60,
  [105] = 105,
  [106] = 105,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 109,
  [112] = 107,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 114,
  [118] = 110,
  [119] = 113,
  [120] = 108,
  [121] = 115,
  [122] = 116,
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
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 144,
  [153] = 141,
  [154] = 127,
  [155] = 126,
  [156] = 146,
  [157] = 157,
  [158] = 150,
  [159] = 148,
  [160] = 135,
  [161] = 134,
  [162] = 132,
  [163] = 131,
  [164] = 130,
  [165] = 125,
  [166] = 140,
  [167] = 124,
  [168] = 168,
  [169] = 169,
  [170] = 168,
  [171] = 129,
  [172] = 128,
  [173] = 149,
  [174] = 174,
  [175] = 145,
  [176] = 143,
  [177] = 137,
  [178] = 136,
  [179] = 133,
  [180] = 174,
  [181] = 151,
  [182] = 123,
  [183] = 147,
  [184] = 139,
  [185] = 169,
  [186] = 157,
  [187] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(223);
      if (lookahead == '1') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(93);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == ',' ||
          lookahead == '-') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '5') ADVANCE(275);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(280);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(251);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 208:
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 209:
      if (lookahead == 'w') ADVANCE(122);
      END_STATE();
    case 210:
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 211:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(220)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(221)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 222:
      if (eof) ADVANCE(223);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(222)
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_interface_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_router);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_router);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_bgp);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_bgp);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_ospf);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ospf);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_eigrp);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_eigrp);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_rip);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_rip);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_access_DASHlist);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_acl_token1);
      if (lookahead == ',' ||
          lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_acl_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_aaa);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_aaa);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_line);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_vty);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_switchport);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_switchport);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_trunk);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_allowed);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_vlan);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_trunk_interface_token1);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_access_DASHgroup);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_permit);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_permit);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_deny);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_deny);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_destination);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_protocol);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_neighbor);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_neighbor);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_bgp_peer_authentication_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_password);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_authentication);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_transport);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_port_DASHsecurity);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_maximum);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ',' ||
          lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_access);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_access);
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 222},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 222},
  [5] = {.lex_state = 222},
  [6] = {.lex_state = 222},
  [7] = {.lex_state = 222},
  [8] = {.lex_state = 222},
  [9] = {.lex_state = 222},
  [10] = {.lex_state = 222},
  [11] = {.lex_state = 222},
  [12] = {.lex_state = 222},
  [13] = {.lex_state = 222},
  [14] = {.lex_state = 222},
  [15] = {.lex_state = 222},
  [16] = {.lex_state = 222},
  [17] = {.lex_state = 222},
  [18] = {.lex_state = 222},
  [19] = {.lex_state = 222},
  [20] = {.lex_state = 222},
  [21] = {.lex_state = 222},
  [22] = {.lex_state = 222},
  [23] = {.lex_state = 222},
  [24] = {.lex_state = 222},
  [25] = {.lex_state = 222},
  [26] = {.lex_state = 222},
  [27] = {.lex_state = 222},
  [28] = {.lex_state = 222},
  [29] = {.lex_state = 222},
  [30] = {.lex_state = 222},
  [31] = {.lex_state = 222},
  [32] = {.lex_state = 222},
  [33] = {.lex_state = 222},
  [34] = {.lex_state = 222},
  [35] = {.lex_state = 222},
  [36] = {.lex_state = 222},
  [37] = {.lex_state = 222},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 222},
  [40] = {.lex_state = 222},
  [41] = {.lex_state = 222},
  [42] = {.lex_state = 222},
  [43] = {.lex_state = 222},
  [44] = {.lex_state = 222},
  [45] = {.lex_state = 222},
  [46] = {.lex_state = 222},
  [47] = {.lex_state = 222},
  [48] = {.lex_state = 222},
  [49] = {.lex_state = 222},
  [50] = {.lex_state = 222},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 222},
  [53] = {.lex_state = 222},
  [54] = {.lex_state = 222},
  [55] = {.lex_state = 222},
  [56] = {.lex_state = 222},
  [57] = {.lex_state = 222},
  [58] = {.lex_state = 222},
  [59] = {.lex_state = 222},
  [60] = {.lex_state = 222},
  [61] = {.lex_state = 222},
  [62] = {.lex_state = 222},
  [63] = {.lex_state = 222},
  [64] = {.lex_state = 222},
  [65] = {.lex_state = 222},
  [66] = {.lex_state = 222},
  [67] = {.lex_state = 222},
  [68] = {.lex_state = 222},
  [69] = {.lex_state = 222},
  [70] = {.lex_state = 222},
  [71] = {.lex_state = 222},
  [72] = {.lex_state = 222},
  [73] = {.lex_state = 222},
  [74] = {.lex_state = 222},
  [75] = {.lex_state = 222},
  [76] = {.lex_state = 222},
  [77] = {.lex_state = 222},
  [78] = {.lex_state = 222},
  [79] = {.lex_state = 222},
  [80] = {.lex_state = 222},
  [81] = {.lex_state = 222},
  [82] = {.lex_state = 222},
  [83] = {.lex_state = 222},
  [84] = {.lex_state = 222},
  [85] = {.lex_state = 222},
  [86] = {.lex_state = 222},
  [87] = {.lex_state = 222},
  [88] = {.lex_state = 222},
  [89] = {.lex_state = 222},
  [90] = {.lex_state = 222},
  [91] = {.lex_state = 222},
  [92] = {.lex_state = 222},
  [93] = {.lex_state = 222},
  [94] = {.lex_state = 222},
  [95] = {.lex_state = 222},
  [96] = {.lex_state = 222},
  [97] = {.lex_state = 222},
  [98] = {.lex_state = 222},
  [99] = {.lex_state = 222},
  [100] = {.lex_state = 222},
  [101] = {.lex_state = 222},
  [102] = {.lex_state = 222},
  [103] = {.lex_state = 222},
  [104] = {.lex_state = 222},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 222},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 220},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 222},
  [146] = {.lex_state = 221},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 222},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 221},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 222},
  [176] = {.lex_state = 220},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_router] = ACTIONS(1),
    [anon_sym_bgp] = ACTIONS(1),
    [anon_sym_ospf] = ACTIONS(1),
    [anon_sym_eigrp] = ACTIONS(1),
    [anon_sym_rip] = ACTIONS(1),
    [anon_sym_access_DASHlist] = ACTIONS(1),
    [aux_sym_acl_token1] = ACTIONS(1),
    [anon_sym_aaa] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_vty] = ACTIONS(1),
    [anon_sym_switchport] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_trunk] = ACTIONS(1),
    [anon_sym_allowed] = ACTIONS(1),
    [anon_sym_vlan] = ACTIONS(1),
    [aux_sym_trunk_interface_token1] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_access_DASHgroup] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_permit] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_destination] = ACTIONS(1),
    [anon_sym_protocol] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_neighbor] = ACTIONS(1),
    [anon_sym_password] = ACTIONS(1),
    [anon_sym_authentication] = ACTIONS(1),
    [anon_sym_md5] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_transport] = ACTIONS(1),
    [anon_sym_ssh] = ACTIONS(1),
    [anon_sym_port_DASHsecurity] = ACTIONS(1),
    [anon_sym_maximum] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_access] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(142),
    [sym__statement] = STATE(14),
    [sym_command] = STATE(14),
    [sym_config_block] = STATE(14),
    [sym_interface] = STATE(14),
    [sym_routing_protocol] = STATE(14),
    [sym_acl] = STATE(14),
    [sym_aaa] = STATE(14),
    [sym_vty_access] = STATE(14),
    [sym_bgp] = STATE(14),
    [sym_eigrp] = STATE(14),
    [sym_rip] = STATE(14),
    [sym_trunk_interface] = STATE(14),
    [sym_interface_acl] = STATE(14),
    [sym_acl_rule] = STATE(14),
    [sym_bgp_neighbor] = STATE(14),
    [sym_vty_login_method] = STATE(14),
    [sym_switchport_interface] = STATE(14),
    [sym_port_security] = STATE(14),
    [sym_access_vlan] = STATE(14),
    [aux_sym_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_command_token1] = ACTIONS(5),
    [anon_sym_interface] = ACTIONS(7),
    [anon_sym_router] = ACTIONS(9),
    [anon_sym_bgp] = ACTIONS(11),
    [anon_sym_ospf] = ACTIONS(11),
    [anon_sym_eigrp] = ACTIONS(11),
    [anon_sym_rip] = ACTIONS(11),
    [anon_sym_access_DASHlist] = ACTIONS(13),
    [anon_sym_aaa] = ACTIONS(15),
    [anon_sym_line] = ACTIONS(17),
    [anon_sym_switchport] = ACTIONS(19),
    [anon_sym_ip] = ACTIONS(21),
    [anon_sym_permit] = ACTIONS(23),
    [anon_sym_deny] = ACTIONS(23),
    [anon_sym_neighbor] = ACTIONS(25),
  },
  [2] = {
    [sym__statement] = STATE(16),
    [sym_command] = STATE(16),
    [sym_config_block] = STATE(16),
    [sym_interface] = STATE(16),
    [sym_routing_protocol] = STATE(16),
    [sym_acl] = STATE(16),
    [sym_aaa] = STATE(16),
    [sym_vty_access] = STATE(16),
    [sym_bgp] = STATE(16),
    [sym_eigrp] = STATE(16),
    [sym_rip] = STATE(16),
    [sym_trunk_interface] = STATE(16),
    [sym_interface_acl] = STATE(16),
    [sym_acl_rule] = STATE(16),
    [sym_bgp_neighbor] = STATE(16),
    [sym_vty_login_method] = STATE(16),
    [sym_switchport_interface] = STATE(16),
    [sym_port_security] = STATE(16),
    [sym_access_vlan] = STATE(16),
    [aux_sym_start_repeat1] = STATE(16),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [3] = {
    [sym__statement] = STATE(32),
    [sym_command] = STATE(32),
    [sym_config_block] = STATE(32),
    [sym_interface] = STATE(32),
    [sym_routing_protocol] = STATE(32),
    [sym_acl] = STATE(32),
    [sym_aaa] = STATE(32),
    [sym_vty_access] = STATE(32),
    [sym_bgp] = STATE(32),
    [sym_eigrp] = STATE(32),
    [sym_rip] = STATE(32),
    [sym_trunk_interface] = STATE(32),
    [sym_interface_acl] = STATE(32),
    [sym_acl_rule] = STATE(32),
    [sym_bgp_neighbor] = STATE(32),
    [sym_vty_login_method] = STATE(32),
    [sym_switchport_interface] = STATE(32),
    [sym_port_security] = STATE(32),
    [sym_access_vlan] = STATE(32),
    [aux_sym_start_repeat1] = STATE(32),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [4] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [5] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [6] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [7] = {
    [sym__statement] = STATE(25),
    [sym_command] = STATE(25),
    [sym_config_block] = STATE(25),
    [sym_interface] = STATE(25),
    [sym_routing_protocol] = STATE(25),
    [sym_acl] = STATE(25),
    [sym_aaa] = STATE(25),
    [sym_vty_access] = STATE(25),
    [sym_bgp] = STATE(25),
    [sym_eigrp] = STATE(25),
    [sym_rip] = STATE(25),
    [sym_trunk_interface] = STATE(25),
    [sym_interface_acl] = STATE(25),
    [sym_acl_rule] = STATE(25),
    [sym_bgp_neighbor] = STATE(25),
    [sym_vty_login_method] = STATE(25),
    [sym_switchport_interface] = STATE(25),
    [sym_port_security] = STATE(25),
    [sym_access_vlan] = STATE(25),
    [aux_sym_start_repeat1] = STATE(25),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [8] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [9] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [10] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_config_block] = STATE(4),
    [sym_interface] = STATE(4),
    [sym_routing_protocol] = STATE(4),
    [sym_acl] = STATE(4),
    [sym_aaa] = STATE(4),
    [sym_vty_access] = STATE(4),
    [sym_bgp] = STATE(4),
    [sym_eigrp] = STATE(4),
    [sym_rip] = STATE(4),
    [sym_trunk_interface] = STATE(4),
    [sym_interface_acl] = STATE(4),
    [sym_acl_rule] = STATE(4),
    [sym_bgp_neighbor] = STATE(4),
    [sym_vty_login_method] = STATE(4),
    [sym_switchport_interface] = STATE(4),
    [sym_port_security] = STATE(4),
    [sym_access_vlan] = STATE(4),
    [aux_sym_start_repeat1] = STATE(4),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [11] = {
    [sym__statement] = STATE(5),
    [sym_command] = STATE(5),
    [sym_config_block] = STATE(5),
    [sym_interface] = STATE(5),
    [sym_routing_protocol] = STATE(5),
    [sym_acl] = STATE(5),
    [sym_aaa] = STATE(5),
    [sym_vty_access] = STATE(5),
    [sym_bgp] = STATE(5),
    [sym_eigrp] = STATE(5),
    [sym_rip] = STATE(5),
    [sym_trunk_interface] = STATE(5),
    [sym_interface_acl] = STATE(5),
    [sym_acl_rule] = STATE(5),
    [sym_bgp_neighbor] = STATE(5),
    [sym_vty_login_method] = STATE(5),
    [sym_switchport_interface] = STATE(5),
    [sym_port_security] = STATE(5),
    [sym_access_vlan] = STATE(5),
    [aux_sym_start_repeat1] = STATE(5),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [12] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [13] = {
    [sym__statement] = STATE(6),
    [sym_command] = STATE(6),
    [sym_config_block] = STATE(6),
    [sym_interface] = STATE(6),
    [sym_routing_protocol] = STATE(6),
    [sym_acl] = STATE(6),
    [sym_aaa] = STATE(6),
    [sym_vty_access] = STATE(6),
    [sym_bgp] = STATE(6),
    [sym_eigrp] = STATE(6),
    [sym_rip] = STATE(6),
    [sym_trunk_interface] = STATE(6),
    [sym_interface_acl] = STATE(6),
    [sym_acl_rule] = STATE(6),
    [sym_bgp_neighbor] = STATE(6),
    [sym_vty_login_method] = STATE(6),
    [sym_switchport_interface] = STATE(6),
    [sym_port_security] = STATE(6),
    [sym_access_vlan] = STATE(6),
    [aux_sym_start_repeat1] = STATE(6),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [14] = {
    [sym__statement] = STATE(30),
    [sym_command] = STATE(30),
    [sym_config_block] = STATE(30),
    [sym_interface] = STATE(30),
    [sym_routing_protocol] = STATE(30),
    [sym_acl] = STATE(30),
    [sym_aaa] = STATE(30),
    [sym_vty_access] = STATE(30),
    [sym_bgp] = STATE(30),
    [sym_eigrp] = STATE(30),
    [sym_rip] = STATE(30),
    [sym_trunk_interface] = STATE(30),
    [sym_interface_acl] = STATE(30),
    [sym_acl_rule] = STATE(30),
    [sym_bgp_neighbor] = STATE(30),
    [sym_vty_login_method] = STATE(30),
    [sym_switchport_interface] = STATE(30),
    [sym_port_security] = STATE(30),
    [sym_access_vlan] = STATE(30),
    [aux_sym_start_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_command_token1] = ACTIONS(5),
    [anon_sym_interface] = ACTIONS(7),
    [anon_sym_router] = ACTIONS(9),
    [anon_sym_bgp] = ACTIONS(11),
    [anon_sym_ospf] = ACTIONS(11),
    [anon_sym_eigrp] = ACTIONS(11),
    [anon_sym_rip] = ACTIONS(11),
    [anon_sym_access_DASHlist] = ACTIONS(13),
    [anon_sym_aaa] = ACTIONS(15),
    [anon_sym_line] = ACTIONS(17),
    [anon_sym_switchport] = ACTIONS(19),
    [anon_sym_ip] = ACTIONS(21),
    [anon_sym_permit] = ACTIONS(23),
    [anon_sym_deny] = ACTIONS(23),
    [anon_sym_neighbor] = ACTIONS(25),
  },
  [15] = {
    [sym__statement] = STATE(26),
    [sym_command] = STATE(26),
    [sym_config_block] = STATE(26),
    [sym_interface] = STATE(26),
    [sym_routing_protocol] = STATE(26),
    [sym_acl] = STATE(26),
    [sym_aaa] = STATE(26),
    [sym_vty_access] = STATE(26),
    [sym_bgp] = STATE(26),
    [sym_eigrp] = STATE(26),
    [sym_rip] = STATE(26),
    [sym_trunk_interface] = STATE(26),
    [sym_interface_acl] = STATE(26),
    [sym_acl_rule] = STATE(26),
    [sym_bgp_neighbor] = STATE(26),
    [sym_vty_login_method] = STATE(26),
    [sym_switchport_interface] = STATE(26),
    [sym_port_security] = STATE(26),
    [sym_access_vlan] = STATE(26),
    [aux_sym_start_repeat1] = STATE(26),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [16] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [17] = {
    [sym__statement] = STATE(36),
    [sym_command] = STATE(36),
    [sym_config_block] = STATE(36),
    [sym_interface] = STATE(36),
    [sym_routing_protocol] = STATE(36),
    [sym_acl] = STATE(36),
    [sym_aaa] = STATE(36),
    [sym_vty_access] = STATE(36),
    [sym_bgp] = STATE(36),
    [sym_eigrp] = STATE(36),
    [sym_rip] = STATE(36),
    [sym_trunk_interface] = STATE(36),
    [sym_interface_acl] = STATE(36),
    [sym_acl_rule] = STATE(36),
    [sym_bgp_neighbor] = STATE(36),
    [sym_vty_login_method] = STATE(36),
    [sym_switchport_interface] = STATE(36),
    [sym_port_security] = STATE(36),
    [sym_access_vlan] = STATE(36),
    [aux_sym_start_repeat1] = STATE(36),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [18] = {
    [sym__statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_config_block] = STATE(8),
    [sym_interface] = STATE(8),
    [sym_routing_protocol] = STATE(8),
    [sym_acl] = STATE(8),
    [sym_aaa] = STATE(8),
    [sym_vty_access] = STATE(8),
    [sym_bgp] = STATE(8),
    [sym_eigrp] = STATE(8),
    [sym_rip] = STATE(8),
    [sym_trunk_interface] = STATE(8),
    [sym_interface_acl] = STATE(8),
    [sym_acl_rule] = STATE(8),
    [sym_bgp_neighbor] = STATE(8),
    [sym_vty_login_method] = STATE(8),
    [sym_switchport_interface] = STATE(8),
    [sym_port_security] = STATE(8),
    [sym_access_vlan] = STATE(8),
    [aux_sym_start_repeat1] = STATE(8),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [19] = {
    [sym__statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym_config_block] = STATE(9),
    [sym_interface] = STATE(9),
    [sym_routing_protocol] = STATE(9),
    [sym_acl] = STATE(9),
    [sym_aaa] = STATE(9),
    [sym_vty_access] = STATE(9),
    [sym_bgp] = STATE(9),
    [sym_eigrp] = STATE(9),
    [sym_rip] = STATE(9),
    [sym_trunk_interface] = STATE(9),
    [sym_interface_acl] = STATE(9),
    [sym_acl_rule] = STATE(9),
    [sym_bgp_neighbor] = STATE(9),
    [sym_vty_login_method] = STATE(9),
    [sym_switchport_interface] = STATE(9),
    [sym_port_security] = STATE(9),
    [sym_access_vlan] = STATE(9),
    [aux_sym_start_repeat1] = STATE(9),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [20] = {
    [sym__statement] = STATE(23),
    [sym_command] = STATE(23),
    [sym_config_block] = STATE(23),
    [sym_interface] = STATE(23),
    [sym_routing_protocol] = STATE(23),
    [sym_acl] = STATE(23),
    [sym_aaa] = STATE(23),
    [sym_vty_access] = STATE(23),
    [sym_bgp] = STATE(23),
    [sym_eigrp] = STATE(23),
    [sym_rip] = STATE(23),
    [sym_trunk_interface] = STATE(23),
    [sym_interface_acl] = STATE(23),
    [sym_acl_rule] = STATE(23),
    [sym_bgp_neighbor] = STATE(23),
    [sym_vty_login_method] = STATE(23),
    [sym_switchport_interface] = STATE(23),
    [sym_port_security] = STATE(23),
    [sym_access_vlan] = STATE(23),
    [aux_sym_start_repeat1] = STATE(23),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [21] = {
    [sym__statement] = STATE(12),
    [sym_command] = STATE(12),
    [sym_config_block] = STATE(12),
    [sym_interface] = STATE(12),
    [sym_routing_protocol] = STATE(12),
    [sym_acl] = STATE(12),
    [sym_aaa] = STATE(12),
    [sym_vty_access] = STATE(12),
    [sym_bgp] = STATE(12),
    [sym_eigrp] = STATE(12),
    [sym_rip] = STATE(12),
    [sym_trunk_interface] = STATE(12),
    [sym_interface_acl] = STATE(12),
    [sym_acl_rule] = STATE(12),
    [sym_bgp_neighbor] = STATE(12),
    [sym_vty_login_method] = STATE(12),
    [sym_switchport_interface] = STATE(12),
    [sym_port_security] = STATE(12),
    [sym_access_vlan] = STATE(12),
    [aux_sym_start_repeat1] = STATE(12),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [22] = {
    [sym__statement] = STATE(42),
    [sym_command] = STATE(42),
    [sym_config_block] = STATE(42),
    [sym_interface] = STATE(42),
    [sym_routing_protocol] = STATE(42),
    [sym_acl] = STATE(42),
    [sym_aaa] = STATE(42),
    [sym_vty_access] = STATE(42),
    [sym_bgp] = STATE(42),
    [sym_eigrp] = STATE(42),
    [sym_rip] = STATE(42),
    [sym_trunk_interface] = STATE(42),
    [sym_interface_acl] = STATE(42),
    [sym_acl_rule] = STATE(42),
    [sym_bgp_neighbor] = STATE(42),
    [sym_vty_login_method] = STATE(42),
    [sym_switchport_interface] = STATE(42),
    [sym_port_security] = STATE(42),
    [sym_access_vlan] = STATE(42),
    [aux_sym_start_repeat1] = STATE(42),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [23] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [24] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [25] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [26] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [27] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [28] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_interface] = ACTIONS(106),
    [anon_sym_router] = ACTIONS(109),
    [anon_sym_bgp] = ACTIONS(112),
    [anon_sym_ospf] = ACTIONS(112),
    [anon_sym_eigrp] = ACTIONS(112),
    [anon_sym_rip] = ACTIONS(112),
    [anon_sym_access_DASHlist] = ACTIONS(115),
    [anon_sym_aaa] = ACTIONS(118),
    [anon_sym_line] = ACTIONS(121),
    [anon_sym_switchport] = ACTIONS(124),
    [anon_sym_ip] = ACTIONS(127),
    [anon_sym_permit] = ACTIONS(130),
    [anon_sym_deny] = ACTIONS(130),
    [anon_sym_neighbor] = ACTIONS(133),
  },
  [29] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [30] = {
    [sym__statement] = STATE(30),
    [sym_command] = STATE(30),
    [sym_config_block] = STATE(30),
    [sym_interface] = STATE(30),
    [sym_routing_protocol] = STATE(30),
    [sym_acl] = STATE(30),
    [sym_aaa] = STATE(30),
    [sym_vty_access] = STATE(30),
    [sym_bgp] = STATE(30),
    [sym_eigrp] = STATE(30),
    [sym_rip] = STATE(30),
    [sym_trunk_interface] = STATE(30),
    [sym_interface_acl] = STATE(30),
    [sym_acl_rule] = STATE(30),
    [sym_bgp_neighbor] = STATE(30),
    [sym_vty_login_method] = STATE(30),
    [sym_switchport_interface] = STATE(30),
    [sym_port_security] = STATE(30),
    [sym_access_vlan] = STATE(30),
    [aux_sym_start_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_command_token1] = ACTIONS(138),
    [anon_sym_interface] = ACTIONS(141),
    [anon_sym_router] = ACTIONS(144),
    [anon_sym_bgp] = ACTIONS(147),
    [anon_sym_ospf] = ACTIONS(147),
    [anon_sym_eigrp] = ACTIONS(147),
    [anon_sym_rip] = ACTIONS(147),
    [anon_sym_access_DASHlist] = ACTIONS(150),
    [anon_sym_aaa] = ACTIONS(153),
    [anon_sym_line] = ACTIONS(156),
    [anon_sym_switchport] = ACTIONS(159),
    [anon_sym_ip] = ACTIONS(162),
    [anon_sym_permit] = ACTIONS(165),
    [anon_sym_deny] = ACTIONS(165),
    [anon_sym_neighbor] = ACTIONS(168),
  },
  [31] = {
    [sym__statement] = STATE(24),
    [sym_command] = STATE(24),
    [sym_config_block] = STATE(24),
    [sym_interface] = STATE(24),
    [sym_routing_protocol] = STATE(24),
    [sym_acl] = STATE(24),
    [sym_aaa] = STATE(24),
    [sym_vty_access] = STATE(24),
    [sym_bgp] = STATE(24),
    [sym_eigrp] = STATE(24),
    [sym_rip] = STATE(24),
    [sym_trunk_interface] = STATE(24),
    [sym_interface_acl] = STATE(24),
    [sym_acl_rule] = STATE(24),
    [sym_bgp_neighbor] = STATE(24),
    [sym_vty_login_method] = STATE(24),
    [sym_switchport_interface] = STATE(24),
    [sym_port_security] = STATE(24),
    [sym_access_vlan] = STATE(24),
    [aux_sym_start_repeat1] = STATE(24),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [32] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [33] = {
    [sym__statement] = STATE(41),
    [sym_command] = STATE(41),
    [sym_config_block] = STATE(41),
    [sym_interface] = STATE(41),
    [sym_routing_protocol] = STATE(41),
    [sym_acl] = STATE(41),
    [sym_aaa] = STATE(41),
    [sym_vty_access] = STATE(41),
    [sym_bgp] = STATE(41),
    [sym_eigrp] = STATE(41),
    [sym_rip] = STATE(41),
    [sym_trunk_interface] = STATE(41),
    [sym_interface_acl] = STATE(41),
    [sym_acl_rule] = STATE(41),
    [sym_bgp_neighbor] = STATE(41),
    [sym_vty_login_method] = STATE(41),
    [sym_switchport_interface] = STATE(41),
    [sym_port_security] = STATE(41),
    [sym_access_vlan] = STATE(41),
    [aux_sym_start_repeat1] = STATE(41),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [34] = {
    [sym__statement] = STATE(29),
    [sym_command] = STATE(29),
    [sym_config_block] = STATE(29),
    [sym_interface] = STATE(29),
    [sym_routing_protocol] = STATE(29),
    [sym_acl] = STATE(29),
    [sym_aaa] = STATE(29),
    [sym_vty_access] = STATE(29),
    [sym_bgp] = STATE(29),
    [sym_eigrp] = STATE(29),
    [sym_rip] = STATE(29),
    [sym_trunk_interface] = STATE(29),
    [sym_interface_acl] = STATE(29),
    [sym_acl_rule] = STATE(29),
    [sym_bgp_neighbor] = STATE(29),
    [sym_vty_login_method] = STATE(29),
    [sym_switchport_interface] = STATE(29),
    [sym_port_security] = STATE(29),
    [sym_access_vlan] = STATE(29),
    [aux_sym_start_repeat1] = STATE(29),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [35] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [36] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [37] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [38] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [39] = {
    [sym__statement] = STATE(27),
    [sym_command] = STATE(27),
    [sym_config_block] = STATE(27),
    [sym_interface] = STATE(27),
    [sym_routing_protocol] = STATE(27),
    [sym_acl] = STATE(27),
    [sym_aaa] = STATE(27),
    [sym_vty_access] = STATE(27),
    [sym_bgp] = STATE(27),
    [sym_eigrp] = STATE(27),
    [sym_rip] = STATE(27),
    [sym_trunk_interface] = STATE(27),
    [sym_interface_acl] = STATE(27),
    [sym_acl_rule] = STATE(27),
    [sym_bgp_neighbor] = STATE(27),
    [sym_vty_login_method] = STATE(27),
    [sym_switchport_interface] = STATE(27),
    [sym_port_security] = STATE(27),
    [sym_access_vlan] = STATE(27),
    [aux_sym_start_repeat1] = STATE(27),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [40] = {
    [sym__statement] = STATE(38),
    [sym_command] = STATE(38),
    [sym_config_block] = STATE(38),
    [sym_interface] = STATE(38),
    [sym_routing_protocol] = STATE(38),
    [sym_acl] = STATE(38),
    [sym_aaa] = STATE(38),
    [sym_vty_access] = STATE(38),
    [sym_bgp] = STATE(38),
    [sym_eigrp] = STATE(38),
    [sym_rip] = STATE(38),
    [sym_trunk_interface] = STATE(38),
    [sym_interface_acl] = STATE(38),
    [sym_acl_rule] = STATE(38),
    [sym_bgp_neighbor] = STATE(38),
    [sym_vty_login_method] = STATE(38),
    [sym_switchport_interface] = STATE(38),
    [sym_port_security] = STATE(38),
    [sym_access_vlan] = STATE(38),
    [aux_sym_start_repeat1] = STATE(38),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [41] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [42] = {
    [sym__statement] = STATE(28),
    [sym_command] = STATE(28),
    [sym_config_block] = STATE(28),
    [sym_interface] = STATE(28),
    [sym_routing_protocol] = STATE(28),
    [sym_acl] = STATE(28),
    [sym_aaa] = STATE(28),
    [sym_vty_access] = STATE(28),
    [sym_bgp] = STATE(28),
    [sym_eigrp] = STATE(28),
    [sym_rip] = STATE(28),
    [sym_trunk_interface] = STATE(28),
    [sym_interface_acl] = STATE(28),
    [sym_acl_rule] = STATE(28),
    [sym_bgp_neighbor] = STATE(28),
    [sym_vty_login_method] = STATE(28),
    [sym_switchport_interface] = STATE(28),
    [sym_port_security] = STATE(28),
    [sym_access_vlan] = STATE(28),
    [aux_sym_start_repeat1] = STATE(28),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [43] = {
    [sym__statement] = STATE(37),
    [sym_command] = STATE(37),
    [sym_config_block] = STATE(37),
    [sym_interface] = STATE(37),
    [sym_routing_protocol] = STATE(37),
    [sym_acl] = STATE(37),
    [sym_aaa] = STATE(37),
    [sym_vty_access] = STATE(37),
    [sym_bgp] = STATE(37),
    [sym_eigrp] = STATE(37),
    [sym_rip] = STATE(37),
    [sym_trunk_interface] = STATE(37),
    [sym_interface_acl] = STATE(37),
    [sym_acl_rule] = STATE(37),
    [sym_bgp_neighbor] = STATE(37),
    [sym_vty_login_method] = STATE(37),
    [sym_switchport_interface] = STATE(37),
    [sym_port_security] = STATE(37),
    [sym_access_vlan] = STATE(37),
    [aux_sym_start_repeat1] = STATE(37),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
  [44] = {
    [sym__statement] = STATE(35),
    [sym_command] = STATE(35),
    [sym_config_block] = STATE(35),
    [sym_interface] = STATE(35),
    [sym_routing_protocol] = STATE(35),
    [sym_acl] = STATE(35),
    [sym_aaa] = STATE(35),
    [sym_vty_access] = STATE(35),
    [sym_bgp] = STATE(35),
    [sym_eigrp] = STATE(35),
    [sym_rip] = STATE(35),
    [sym_trunk_interface] = STATE(35),
    [sym_interface_acl] = STATE(35),
    [sym_acl_rule] = STATE(35),
    [sym_bgp_neighbor] = STATE(35),
    [sym_vty_login_method] = STATE(35),
    [sym_switchport_interface] = STATE(35),
    [sym_port_security] = STATE(35),
    [sym_access_vlan] = STATE(35),
    [aux_sym_start_repeat1] = STATE(35),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_router] = ACTIONS(33),
    [anon_sym_bgp] = ACTIONS(35),
    [anon_sym_ospf] = ACTIONS(35),
    [anon_sym_eigrp] = ACTIONS(35),
    [anon_sym_rip] = ACTIONS(35),
    [anon_sym_access_DASHlist] = ACTIONS(37),
    [anon_sym_aaa] = ACTIONS(39),
    [anon_sym_line] = ACTIONS(41),
    [anon_sym_switchport] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(45),
    [anon_sym_permit] = ACTIONS(47),
    [anon_sym_deny] = ACTIONS(47),
    [anon_sym_neighbor] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(203), 1,
      anon_sym_mode,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(201), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [24] = 3,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(209), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [48] = 3,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(209), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [72] = 3,
    ACTIONS(213), 1,
      anon_sym_mode,
    ACTIONS(199), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(201), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [96] = 2,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(217), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [117] = 2,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(221), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [138] = 2,
    ACTIONS(223), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(225), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [159] = 2,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(229), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [180] = 2,
    ACTIONS(219), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(221), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [201] = 2,
    ACTIONS(231), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(233), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [222] = 2,
    ACTIONS(235), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(237), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [243] = 2,
    ACTIONS(239), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(241), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [264] = 2,
    ACTIONS(243), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(245), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [285] = 2,
    ACTIONS(247), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(249), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [306] = 2,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(253), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [327] = 2,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(257), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [348] = 2,
    ACTIONS(259), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(261), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [369] = 2,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(265), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [390] = 2,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(269), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [411] = 2,
    ACTIONS(271), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(273), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [432] = 2,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(277), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [453] = 2,
    ACTIONS(279), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(281), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [474] = 2,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(285), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [495] = 2,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(289), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [516] = 2,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(293), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [537] = 2,
    ACTIONS(295), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(297), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [558] = 2,
    ACTIONS(299), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(301), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [579] = 2,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(301), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [600] = 2,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(297), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [621] = 2,
    ACTIONS(291), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(293), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [642] = 2,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(281), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [663] = 2,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(261), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [684] = 2,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(249), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [705] = 2,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(245), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [726] = 2,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(241), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [747] = 2,
    ACTIONS(287), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(289), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [768] = 2,
    ACTIONS(283), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(285), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [789] = 2,
    ACTIONS(275), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(277), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [810] = 2,
    ACTIONS(271), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(273), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [831] = 2,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(237), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [852] = 2,
    ACTIONS(267), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(269), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [873] = 2,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(233), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [894] = 2,
    ACTIONS(303), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(305), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [915] = 2,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(225), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [936] = 2,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(305), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [957] = 2,
    ACTIONS(307), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(309), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [978] = 2,
    ACTIONS(263), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(265), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [999] = 2,
    ACTIONS(215), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(217), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1020] = 2,
    ACTIONS(311), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(313), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1041] = 2,
    ACTIONS(311), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(313), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1062] = 2,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(317), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1083] = 2,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(321), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1104] = 2,
    ACTIONS(323), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(325), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1125] = 2,
    ACTIONS(307), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(309), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1146] = 2,
    ACTIONS(319), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(321), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1167] = 2,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      aux_sym_command_token1,
      anon_sym_access_DASHlist,
    ACTIONS(325), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1188] = 2,
    ACTIONS(315), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(317), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1209] = 2,
    ACTIONS(227), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(229), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1230] = 2,
    ACTIONS(251), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(253), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1251] = 2,
    ACTIONS(255), 3,
      aux_sym_command_token1,
      anon_sym_RBRACE,
      anon_sym_access_DASHlist,
    ACTIONS(257), 13,
      anon_sym_interface,
      anon_sym_router,
      anon_sym_bgp,
      anon_sym_ospf,
      anon_sym_eigrp,
      anon_sym_rip,
      anon_sym_aaa,
      anon_sym_line,
      anon_sym_switchport,
      anon_sym_ip,
      anon_sym_permit,
      anon_sym_deny,
      anon_sym_neighbor,
  [1272] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(329), 1,
      anon_sym_bgp,
    ACTIONS(331), 1,
      anon_sym_eigrp,
    ACTIONS(333), 1,
      anon_sym_rip,
  [1285] = 4,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_bgp,
    ACTIONS(339), 1,
      anon_sym_eigrp,
    ACTIONS(341), 1,
      anon_sym_rip,
  [1298] = 2,
    ACTIONS(343), 1,
      anon_sym_ip,
    STATE(97), 1,
      sym_acl_rule_conditions,
  [1305] = 2,
    ACTIONS(345), 1,
      anon_sym_source,
    ACTIONS(347), 1,
      anon_sym_protocol,
  [1312] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      anon_sym_switchport,
  [1319] = 1,
    ACTIONS(353), 2,
      anon_sym_in,
      anon_sym_out,
  [1324] = 2,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_switchport,
  [1331] = 2,
    ACTIONS(359), 1,
      anon_sym_ip,
    STATE(100), 1,
      sym_acl_rule_conditions,
  [1338] = 2,
    ACTIONS(361), 1,
      anon_sym_port_DASHsecurity,
    ACTIONS(363), 1,
      anon_sym_access,
  [1345] = 1,
    ACTIONS(365), 2,
      anon_sym_input,
      anon_sym_output,
  [1350] = 2,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_transport,
  [1357] = 1,
    ACTIONS(371), 2,
      anon_sym_tcp,
      anon_sym_udp,
  [1362] = 1,
    ACTIONS(373), 2,
      anon_sym_input,
      anon_sym_output,
  [1367] = 1,
    ACTIONS(375), 2,
      anon_sym_in,
      anon_sym_out,
  [1372] = 2,
    ACTIONS(377), 1,
      anon_sym_port_DASHsecurity,
    ACTIONS(379), 1,
      anon_sym_access,
  [1379] = 2,
    ACTIONS(381), 1,
      anon_sym_source,
    ACTIONS(383), 1,
      anon_sym_protocol,
  [1386] = 2,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      anon_sym_transport,
  [1393] = 1,
    ACTIONS(389), 2,
      anon_sym_tcp,
      anon_sym_udp,
  [1398] = 1,
    ACTIONS(391), 1,
      anon_sym_any,
  [1402] = 1,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
  [1406] = 1,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
  [1410] = 1,
    ACTIONS(397), 1,
      anon_sym_any,
  [1414] = 1,
    ACTIONS(399), 1,
      aux_sym_trunk_interface_token1,
  [1418] = 1,
    ACTIONS(401), 1,
      anon_sym_destination,
  [1422] = 1,
    ACTIONS(403), 1,
      anon_sym_vlan,
  [1426] = 1,
    ACTIONS(405), 1,
      aux_sym_acl_token1,
  [1430] = 1,
    ACTIONS(407), 1,
      anon_sym_vlan,
  [1434] = 1,
    ACTIONS(409), 1,
      anon_sym_maximum,
  [1438] = 1,
    ACTIONS(411), 1,
      aux_sym_acl_token1,
  [1442] = 1,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
  [1446] = 1,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
  [1450] = 1,
    ACTIONS(417), 1,
      aux_sym_acl_token1,
  [1454] = 1,
    ACTIONS(419), 1,
      aux_sym_acl_token1,
  [1458] = 1,
    ACTIONS(421), 1,
      anon_sym_1,
  [1462] = 1,
    ACTIONS(423), 1,
      aux_sym_acl_token1,
  [1466] = 1,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
  [1470] = 1,
    ACTIONS(427), 1,
      anon_sym_any,
  [1474] = 1,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
  [1478] = 1,
    ACTIONS(431), 1,
      aux_sym_bgp_peer_authentication_token1,
  [1482] = 1,
    ACTIONS(433), 1,
      anon_sym_ssh,
  [1486] = 1,
    ACTIONS(435), 1,
      anon_sym_access_DASHgroup,
  [1490] = 1,
    ACTIONS(437), 1,
      aux_sym_interface_token1,
  [1494] = 1,
    ACTIONS(439), 1,
      anon_sym_vty,
  [1498] = 1,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
  [1502] = 1,
    ACTIONS(443), 1,
      aux_sym_acl_token1,
  [1506] = 1,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
  [1510] = 1,
    ACTIONS(445), 1,
      anon_sym_allowed,
  [1514] = 1,
    ACTIONS(447), 1,
      anon_sym_ssh,
  [1518] = 1,
    ACTIONS(449), 1,
      anon_sym_any,
  [1522] = 1,
    ACTIONS(451), 1,
      aux_sym_trunk_interface_token1,
  [1526] = 1,
    ACTIONS(453), 1,
      anon_sym_any,
  [1530] = 1,
    ACTIONS(455), 1,
      aux_sym_interface_token1,
  [1534] = 1,
    ACTIONS(457), 1,
      anon_sym_source,
  [1538] = 1,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
  [1542] = 1,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
  [1546] = 1,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
  [1550] = 1,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
  [1554] = 1,
    ACTIONS(465), 1,
      anon_sym_maximum,
  [1558] = 1,
    ACTIONS(467), 1,
      anon_sym_vlan,
  [1562] = 1,
    ACTIONS(469), 1,
      aux_sym_acl_token1,
  [1566] = 1,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
  [1570] = 1,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
  [1574] = 1,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
  [1578] = 1,
    ACTIONS(477), 1,
      anon_sym_destination,
  [1582] = 1,
    ACTIONS(479), 1,
      anon_sym_trunk,
  [1586] = 1,
    ACTIONS(481), 1,
      anon_sym_destination,
  [1590] = 1,
    ACTIONS(483), 1,
      anon_sym_vlan,
  [1594] = 1,
    ACTIONS(485), 1,
      anon_sym_destination,
  [1598] = 1,
    ACTIONS(487), 1,
      aux_sym_acl_token1,
  [1602] = 1,
    ACTIONS(489), 1,
      anon_sym_any,
  [1606] = 1,
    ACTIONS(491), 1,
      anon_sym_access_DASHgroup,
  [1610] = 1,
    ACTIONS(493), 1,
      aux_sym_bgp_peer_authentication_token1,
  [1614] = 1,
    ACTIONS(495), 1,
      aux_sym_acl_token1,
  [1618] = 1,
    ACTIONS(497), 1,
      aux_sym_acl_token1,
  [1622] = 1,
    ACTIONS(499), 1,
      aux_sym_acl_token1,
  [1626] = 1,
    ACTIONS(501), 1,
      anon_sym_any,
  [1630] = 1,
    ACTIONS(503), 1,
      anon_sym_allowed,
  [1634] = 1,
    ACTIONS(505), 1,
      anon_sym_any,
  [1638] = 1,
    ACTIONS(507), 1,
      anon_sym_vty,
  [1642] = 1,
    ACTIONS(509), 1,
      aux_sym_acl_token1,
  [1646] = 1,
    ACTIONS(511), 1,
      anon_sym_trunk,
  [1650] = 1,
    ACTIONS(513), 1,
      anon_sym_source,
  [1654] = 1,
    ACTIONS(515), 1,
      anon_sym_1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(45)] = 0,
  [SMALL_STATE(46)] = 24,
  [SMALL_STATE(47)] = 48,
  [SMALL_STATE(48)] = 72,
  [SMALL_STATE(49)] = 96,
  [SMALL_STATE(50)] = 117,
  [SMALL_STATE(51)] = 138,
  [SMALL_STATE(52)] = 159,
  [SMALL_STATE(53)] = 180,
  [SMALL_STATE(54)] = 201,
  [SMALL_STATE(55)] = 222,
  [SMALL_STATE(56)] = 243,
  [SMALL_STATE(57)] = 264,
  [SMALL_STATE(58)] = 285,
  [SMALL_STATE(59)] = 306,
  [SMALL_STATE(60)] = 327,
  [SMALL_STATE(61)] = 348,
  [SMALL_STATE(62)] = 369,
  [SMALL_STATE(63)] = 390,
  [SMALL_STATE(64)] = 411,
  [SMALL_STATE(65)] = 432,
  [SMALL_STATE(66)] = 453,
  [SMALL_STATE(67)] = 474,
  [SMALL_STATE(68)] = 495,
  [SMALL_STATE(69)] = 516,
  [SMALL_STATE(70)] = 537,
  [SMALL_STATE(71)] = 558,
  [SMALL_STATE(72)] = 579,
  [SMALL_STATE(73)] = 600,
  [SMALL_STATE(74)] = 621,
  [SMALL_STATE(75)] = 642,
  [SMALL_STATE(76)] = 663,
  [SMALL_STATE(77)] = 684,
  [SMALL_STATE(78)] = 705,
  [SMALL_STATE(79)] = 726,
  [SMALL_STATE(80)] = 747,
  [SMALL_STATE(81)] = 768,
  [SMALL_STATE(82)] = 789,
  [SMALL_STATE(83)] = 810,
  [SMALL_STATE(84)] = 831,
  [SMALL_STATE(85)] = 852,
  [SMALL_STATE(86)] = 873,
  [SMALL_STATE(87)] = 894,
  [SMALL_STATE(88)] = 915,
  [SMALL_STATE(89)] = 936,
  [SMALL_STATE(90)] = 957,
  [SMALL_STATE(91)] = 978,
  [SMALL_STATE(92)] = 999,
  [SMALL_STATE(93)] = 1020,
  [SMALL_STATE(94)] = 1041,
  [SMALL_STATE(95)] = 1062,
  [SMALL_STATE(96)] = 1083,
  [SMALL_STATE(97)] = 1104,
  [SMALL_STATE(98)] = 1125,
  [SMALL_STATE(99)] = 1146,
  [SMALL_STATE(100)] = 1167,
  [SMALL_STATE(101)] = 1188,
  [SMALL_STATE(102)] = 1209,
  [SMALL_STATE(103)] = 1230,
  [SMALL_STATE(104)] = 1251,
  [SMALL_STATE(105)] = 1272,
  [SMALL_STATE(106)] = 1285,
  [SMALL_STATE(107)] = 1298,
  [SMALL_STATE(108)] = 1305,
  [SMALL_STATE(109)] = 1312,
  [SMALL_STATE(110)] = 1319,
  [SMALL_STATE(111)] = 1324,
  [SMALL_STATE(112)] = 1331,
  [SMALL_STATE(113)] = 1338,
  [SMALL_STATE(114)] = 1345,
  [SMALL_STATE(115)] = 1350,
  [SMALL_STATE(116)] = 1357,
  [SMALL_STATE(117)] = 1362,
  [SMALL_STATE(118)] = 1367,
  [SMALL_STATE(119)] = 1372,
  [SMALL_STATE(120)] = 1379,
  [SMALL_STATE(121)] = 1386,
  [SMALL_STATE(122)] = 1393,
  [SMALL_STATE(123)] = 1398,
  [SMALL_STATE(124)] = 1402,
  [SMALL_STATE(125)] = 1406,
  [SMALL_STATE(126)] = 1410,
  [SMALL_STATE(127)] = 1414,
  [SMALL_STATE(128)] = 1418,
  [SMALL_STATE(129)] = 1422,
  [SMALL_STATE(130)] = 1426,
  [SMALL_STATE(131)] = 1430,
  [SMALL_STATE(132)] = 1434,
  [SMALL_STATE(133)] = 1438,
  [SMALL_STATE(134)] = 1442,
  [SMALL_STATE(135)] = 1446,
  [SMALL_STATE(136)] = 1450,
  [SMALL_STATE(137)] = 1454,
  [SMALL_STATE(138)] = 1458,
  [SMALL_STATE(139)] = 1462,
  [SMALL_STATE(140)] = 1466,
  [SMALL_STATE(141)] = 1470,
  [SMALL_STATE(142)] = 1474,
  [SMALL_STATE(143)] = 1478,
  [SMALL_STATE(144)] = 1482,
  [SMALL_STATE(145)] = 1486,
  [SMALL_STATE(146)] = 1490,
  [SMALL_STATE(147)] = 1494,
  [SMALL_STATE(148)] = 1498,
  [SMALL_STATE(149)] = 1502,
  [SMALL_STATE(150)] = 1506,
  [SMALL_STATE(151)] = 1510,
  [SMALL_STATE(152)] = 1514,
  [SMALL_STATE(153)] = 1518,
  [SMALL_STATE(154)] = 1522,
  [SMALL_STATE(155)] = 1526,
  [SMALL_STATE(156)] = 1530,
  [SMALL_STATE(157)] = 1534,
  [SMALL_STATE(158)] = 1538,
  [SMALL_STATE(159)] = 1542,
  [SMALL_STATE(160)] = 1546,
  [SMALL_STATE(161)] = 1550,
  [SMALL_STATE(162)] = 1554,
  [SMALL_STATE(163)] = 1558,
  [SMALL_STATE(164)] = 1562,
  [SMALL_STATE(165)] = 1566,
  [SMALL_STATE(166)] = 1570,
  [SMALL_STATE(167)] = 1574,
  [SMALL_STATE(168)] = 1578,
  [SMALL_STATE(169)] = 1582,
  [SMALL_STATE(170)] = 1586,
  [SMALL_STATE(171)] = 1590,
  [SMALL_STATE(172)] = 1594,
  [SMALL_STATE(173)] = 1598,
  [SMALL_STATE(174)] = 1602,
  [SMALL_STATE(175)] = 1606,
  [SMALL_STATE(176)] = 1610,
  [SMALL_STATE(177)] = 1614,
  [SMALL_STATE(178)] = 1618,
  [SMALL_STATE(179)] = 1622,
  [SMALL_STATE(180)] = 1626,
  [SMALL_STATE(181)] = 1630,
  [SMALL_STATE(182)] = 1634,
  [SMALL_STATE(183)] = 1638,
  [SMALL_STATE(184)] = 1642,
  [SMALL_STATE(185)] = 1646,
  [SMALL_STATE(186)] = 1650,
  [SMALL_STATE(187)] = 1654,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(47),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(156),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(106),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(158),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(173),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(159),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(183),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(119),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(175),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(107),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(176),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(46),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(146),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(105),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(150),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(149),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(148),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(147),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(113),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(145),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(112),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(143),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchport_interface, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchport_interface, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_rule_conditions, 7),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acl_rule_conditions, 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eigrp, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eigrp, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vty_access, 6),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vty_access, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aaa, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aaa, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bgp, 6),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bgp, 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bgp_neighbor, 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bgp_neighbor, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vty_access, 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vty_access, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acl, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rip, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rip, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eigrp, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eigrp, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routing_protocol, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routing_protocol, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rip, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rip, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acl, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aaa, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aaa, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bgp, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bgp, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_security, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port_security, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_vlan, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_vlan, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_acl, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_acl, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bgp_neighbor, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bgp_neighbor, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vty_login_method, 6),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vty_login_method, 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_rule_conditions, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acl_rule_conditions, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trunk_interface, 8),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trunk_interface, 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routing_protocol, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routing_protocol, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_rule, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acl_rule, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [429] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cisco_ios_configs(void) {
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
