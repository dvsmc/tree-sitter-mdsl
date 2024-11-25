module.exports = grammar({
    name: "mdsl",

    rules: {
        source_file: ($) => repeat($.node),

        node: ($) =>
            choice(
                $.root_node,
                $.sequence_node,
                $.selector_node,
                $.parallel_node,
                $.lotto_node,
                $.action_node,
                $.condition_node,
                $.wait_node,
                $.branch_node,
                $.repeat_node,
                $.retry_node,
                $.decorator_node,
                $.comment,
            ),

        root_node: ($) => seq("root", optional($.named_argument), $.block),

        sequence_node: ($) => seq("sequence", $.block),

        selector_node: ($) => seq("selector", optional($.guard), $.block),

        parallel_node: ($) => seq("parallel", $.block),

        lotto_node: ($) => seq("lotto", optional($.weights), $.block),

        action_node: ($) => seq("action", $.arguments),

        condition_node: ($) => seq("condition", $.arguments),

        wait_node: ($) => seq("wait", $.arguments),

        branch_node: ($) => seq("branch", $.arguments),

        repeat_node: ($) => seq("repeat", $.arguments, $.block),

        retry_node: ($) => seq("retry", $.arguments, $.block),

        decorator_node: ($) => seq(choice("flip", "succeed", "fail"), $.block),

        arguments: ($) => seq("[", optional(seq($.argument, repeat(seq(",", $.argument)))), "]"),

        argument: ($) => choice($.identifier, $.number, $.string, $.boolean),

        weights: ($) => seq("[", $.number, repeat(seq(",", $.number)), "]"),

        guard: ($) => seq(choice("while", "until"), "(", $.identifier, ")"),

        named_argument: ($) => seq("[", $.identifier, "]"),

        block: ($) => seq("{", repeat($.node), "}"),

        comment: ($) => token(choice(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"), seq("//", /.*/))),

        identifier: ($) => /[a-zA-Z_]\w*/,

        number: ($) => /\d+(\.\d+)?/,

        string: ($) => /"[^"]*"/,

        boolean: ($) => choice("true", "false"),
    },
});
