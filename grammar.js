// cisco-ios-configs/grammar.js

module.exports = grammar({
  name: 'cisco_ios_configs',

  rules: {
    config: $ => repeat($._statement)
  },

  rules: {
    _statement: $ => choice(
      $.interface,
      $.routing_protocol,
      $.acl,
      $.aaa,
      $.vty_access,
      $.bgp,
      $.eigrp,
      $.rip,
      $.trunk_interface,
      $.interface_acl,
      $.acl_rule,
      $.bgp_neighbor,
      $.vty_login_method,
      $.switchport_interface,
      $.port_security,
      $.command,
      $.config_block
    ),

    command: $ => /[a-z]+\s+[A-Za-z0-9-]+/,

    config_block: $ => seq(
      /[a-z]+\s+[A-Za-z0-9-]+/,
      '{',
      repeat($._statement),
      '}'
    ),

    interface: $ => seq(
      'interface',
      /[A-Za-z0-9-]+/,
      '{',
      repeat($._statement),
      '}'
    ),

    routing_protocol: $ => seq(
      choice('router', 'bgp', 'ospf', 'eigrp', 'rip'),
      '{',
      repeat($._statement),
      '}'
    ),

    acl: $ => seq(
      'access-list',
      /[0-9]+/,
      '{',
      repeat($._statement),
      '}'
    ),

    aaa: $ => seq(
      'aaa',
      '{',
      repeat($._statement),
      '}'
    ),

    vty_access: $ => seq(
      'line',
      'vty',
      /[0-9]+/,
      '{',
      repeat($._statement),
      '}'
    ),

    bgp: $ => seq(
      'router',
      'bgp',
      /[0-9]+/,
      '{',
      repeat($._statement),
      '}'
    ),

    eigrp: $ => seq(
      'router',
      'eigrp',
      /[0-9]+/,
      '{',
      repeat($._statement),
      '}'
    ),

    rip: $ => seq(
      'router',
      'rip',
      '{',
      repeat($._statement),
      '}'
    ),

    trunk_interface: $ => seq(
      'interface',
      /[A-Za-z0-9-]+/,
      'switchport',
      'mode',
      'trunk',
      'allowed',
      'vlan',
      /[0-9,-]+/
    ),

    interface_acl: $ => choice(
      seq(
        'ip',
        'access-group',
        /[0-9]+/,
        'in'
      ),
      seq(
        'ip',
        'access-group',
        /[0-9]+/,
        'out'
      )
    ),

    acl_rule: $ => choice(
      seq('permit', $.acl_rule_conditions),
      seq('deny', $.acl_rule_conditions)
    ),

    acl_rule_conditions: $ => choice(
      seq(
        'ip',
        'source',
        'any',
        'destination',
        'any'
      ),
      seq(
        'ip',
        'protocol',
        choice('tcp', 'udp'),
        'source',
        'any',
        'destination',
        'any'
      )
      // Add more rule conditions here
    ),

    bgp_peer_authentication: $ => seq(
      'neighbor',
      /[A-Za-z0-9.-]+/,
      'password',
      /[A-Za-z0-9-]+/
    ),

    eigrp_authentication: $ => seq(
      'authentication',
      'mode',
      choice('md5', 'text')
    ),

    rip_authentication: $ => seq(
      'password',
      /[A-Za-z0-9-]+/
    ),

    bgp_neighbor: $ => seq(
      'neighbor',
      /[A-Za-z0-9.-]+/,
      '{',
      repeat($._statement),
      '}'
    ),

    vty_login_method: $ => seq(
      'line',
      'vty',
      /[0-9]+/,
      'transport',
      choice('input', 'output'),
      'ssh'
    ),

    switchport_interface: $ => seq(
      'interface',
      /[A-Za-z0-9-]+/,
      'switchport'
    ),

    port_security: $ => seq(
      'switchport',
      'port-security',
      'maximum',
      '1'
    ),

    access_vlan: $ => seq(
      'switchport',
      'access',
      'vlan',
      /[0-9]+/
    )
  }
});

