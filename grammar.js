module.exports = grammar({
    name: "mdsl",

    rules: {
        source_file: ($) => repeat($._definition),

        _definition: ($) => choice($.root_node, $.comment),

        root_node: ($) => seq("root", optional($.identifier), $.block),

        block: ($) => seq("{", repeat($._node), "}"),

        _node: ($) => choice($.composite_node, $.lotto_node, $.decorator_node, $.leaf_node, $.comment),

        composite_node: ($) =>
            seq(
                choice("sequence", "selector", "parallel", "race", "all"),
                optional($.node_args),
                optional($.callbacks),
                optional($.guards),
                $.block,
            ),

        // Specialized lotto_node for lotto with optional number arguments
        lotto_node: ($) =>
            choice(
                seq(
                    "lotto",
                    "[", $.number, repeat(seq(",", $.number)), "]",
                    optional($.callbacks),
                    optional($.guards),
                    $.block,
                ),
                seq(
                    "lotto",
                    optional($.callbacks),
                    optional($.guards),
                    $.block,
                )
            ),

        decorator_node: ($) =>
            seq(
                choice("repeat", "retry", "flip", "succeed", "fail"),
                optional($.node_args),
                optional($.callbacks),
                optional($.guards),
                choice($.block, $._node),
            ),

        // Stricter leaf_node for action, condition, wait, branch (now allows multiple args for action/condition)
        leaf_node: ($) =>
            choice(
                seq("action", "[", $.arg_list, "]", optional($.callbacks), optional($.guards)),
                seq("condition", "[", $.arg_list, "]", optional($.callbacks), optional($.guards)),
                // wait [number, number]
                seq("wait", "[", $.number, ",", $.number, "]", optional($.callbacks), optional($.guards)),
                // wait [number]
                seq("wait", "[", $.number, "]", optional($.callbacks), optional($.guards)),
                // wait (no args)
                seq("wait", optional($.callbacks), optional($.guards)),
                seq("branch", "[", $.identifier, "]", optional($.callbacks), optional($.guards)),
            ),

        // node_args requires at least one value
        node_args: ($) => seq("[", $.arg_list, "]"),
        arg_list: ($) => seq($._value, repeat(seq(",", $._value))),

        _value: ($) => choice($.number, $.string, $.boolean, "null", $.identifier),

        callbacks: ($) =>
            repeat1(
                seq(choice("entry", "exit", "step"), "(", $.identifier, optional(seq(",", sepBy(",", $._value))), ")"),
            ),

        guards: ($) =>
            choice(
                seq(
                    "while", "(", $.identifier, optional(seq(",", sepBy(",", $._value))), ")",
                    optional(seq("then", choice("succeed", "fail")))
                ),
                seq(
                    "until", "(", $.identifier, optional(seq(",", sepBy(",", $._value))), ")",
                    optional(seq("then", choice("succeed", "fail")))
                ),
            ),

        comment: $ => choice(
            token(seq('//', /.*/)), // single-line comment
            token(/\/[*]([^*]|([*][^/]))*[*]\//) // block comment
        ),

        identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
        number: ($) => /\d+(\.\d+)?/,
        string: ($) => /"[^"]*"/,
        boolean: ($) => choice("true", "false"),
    },
});

function sepBy(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule))));
}
