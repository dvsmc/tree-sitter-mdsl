module.exports = grammar({
  name: 'mdsl',

  rules: {
    // The top-level rule, which describes a program or script
    source_file: $ => repeat($.block),

    // Resolve conflicts between "sequence" and "lotto"
    _block_statement: $ => choice(
      $.block,            // Nested blocks
      $.sequence_block,   // Sequence block
      $.lotto_block,      // Lotto block
      $.condition,        // Condition statement
      $.action,           // Action statement
      $.expression        // Simple expressions like strings/numbers
    ),

    // Blocks can be things like 'root', 'selector', etc.
    block: $ => seq(
      $.keyword,
      '{',
      repeat($._block_statement),
      '}'
    ),

    // Keywords like 'root', 'selector', etc.
    keyword: $ => choice(
      'root', 'selector', 'action', 'condition', 'lotto', 'while'
    ),

    // The "sequence" block needs to be treated separately to avoid conflicts
    sequence_block: $ => seq(
      'sequence',
      '{',
      repeat($._block_statement),
      '}'
    ),

    // The "lotto" block also needs separate handling
    lotto_block: $ => seq(
      'lotto',
      '{',
      repeat($.action),
      '}'
    ),

    // Sequences contain multiple conditions and actions
    sequence: $ => prec(1, $.sequence_block),

    // Conditions in square brackets with optional parameters
    condition: $ => seq(
      'condition',
      '[',
      field('name', $.identifier),
      optional(seq(',', field('parameter', $.string))),
      ']'
    ),

    // Actions with optional parameters
    action: $ => seq(
      'action',
      '[',
      field('name', $.identifier),
      optional(seq(',', field('parameter', $.string))),
      ']'
    ),

    // Identifiers (functions/entities)
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Strings (double-quoted)
    string: $ => /"(\\.|[^"\\])*"/,

    // Basic expressions like numeric values
    expression: $ => choice(
      $.string,
      /\d+/
    )
  },

  // Only leave necessary conflicts (remove conflict with sequence_block)
  conflicts: $ => [
    [$.keyword, $.lotto_block]
  ]
});