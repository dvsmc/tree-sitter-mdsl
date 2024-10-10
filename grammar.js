module.exports = grammar({
    name: "mdsl",

    rules: {
        source_file: ($) => repeat($._definition),

        _definition: ($) => choice($.root_node, $.comment),

        root_node: ($) => seq("root", optional($.identifier), $.block),

        block: ($) => seq("{", repeat($._node), "}"),

        _node: ($) => choice($.composite_node, $.decorator_node, $.leaf_node, $.comment),

        composite_node: ($) =>
            seq(
                choice("sequence", "selector", "parallel", "race", "all", "lotto"),
                optional($.node_args),
                optional($.callbacks),
                optional($.guards),
                $.block,
            ),

        decorator_node: ($) =>
            seq(
                choice("repeat", "retry", "flip", "succeed", "fail"),
                optional($.node_args),
                optional($.callbacks),
                optional($.guards),
                choice($.block, $._node),
            ),

        leaf_node: ($) =>
            seq(
                choice("action", "condition", "wait", "branch"),
                optional($.node_args),
                optional($.callbacks),
                optional($.guards),
            ),

        node_args: ($) => seq("[", sepBy(",", $._value), "]"),

        _value: ($) => choice($.number, $.string, $.boolean, "null", $.identifier),

        callbacks: ($) =>
            repeat1(
                seq(choice("entry", "exit", "step"), "(", $.identifier, optional(seq(",", sepBy(",", $._value))), ")"),
            ),

        guards: ($) =>
            choice(
                seq("while", "(", $.identifier, optional(seq(",", sepBy(",", $._value))), ")"),
                seq("until", "(", $.identifier, optional(seq(",", sepBy(",", $._value))), ")"),
            ),

        comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

        identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
        number: ($) => /\d+(\.\d+)?/,
        string: ($) => /"[^"]*"/,
        boolean: ($) => choice("true", "false"),
    },
});

function sepBy(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule))));
}
