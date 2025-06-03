module.exports = grammar({
    name: "mdsl",

    rules: {
        source_file: ($) => repeat($._definition),

        _definition: ($) => choice($.root, $.comment),

        root: ($) => seq("root", optional($.identifier), $.block),

        block: ($) => seq("{", repeat($._element), "}"),

        _element: ($) => choice($.composite, $.lotto, $.decorator, $.leaf, $.comment),

        composite: ($) =>
            choice(
                alias(
                    seq(
                        "sequence",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        $.block,
                    ),
                    $.sequence
                ),
                alias(
                    seq(
                        "selector",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        $.block,
                    ),
                    $.selector
                ),
                alias(
                    seq(
                        "parallel",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        $.block,
                    ),
                    $.parallel
                ),
                alias(
                    seq(
                        "race",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        $.block,
                    ),
                    $.race
                ),
                alias(
                    seq(
                        "all",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        $.block,
                    ),
                    $.all
                )
            ),

        // Specialized lotto for lotto with optional number arguments
        lotto: ($) =>
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

        decorator: ($) =>
            choice(
                alias(
                    seq(
                        "repeat",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        choice($.block, $._element),
                    ),
                    $.repeat
                ),
                alias(
                    seq(
                        "retry",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        choice($.block, $._element),
                    ),
                    $.retry
                ),
                alias(
                    seq(
                        "flip",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        choice($.block, $._element),
                    ),
                    $.flip
                ),
                alias(
                    seq(
                        "succeed",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        choice($.block, $._element),
                    ),
                    $.succeed
                ),
                alias(
                    seq(
                        "fail",
                        optional($.node_args),
                        optional($.callbacks),
                        optional($.guards),
                        choice($.block, $._element),
                    ),
                    $.fail
                )
            ),

        leaf: ($) =>
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

        // Add empty rules to make these node types named
        sequence: _ => prec(1, seq()),
        selector: _ => prec(1, seq()),
        parallel: _ => prec(1, seq()),
        race: _ => prec(1, seq()),
        all: _ => prec(1, seq()),
        repeat: _ => prec(1, seq()),
        retry: _ => prec(1, seq()),
        flip: _ => prec(1, seq()),
        succeed: _ => prec(1, seq()),
        fail: _ => prec(1, seq()),
    },
});

function sepBy(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule))));
}