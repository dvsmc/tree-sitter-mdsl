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
                alias(
                    seq(
                        "lotto",
                        "[", $.number, repeat(seq(",", $.number)), "]",
                        optional($.callbacks),
                        optional($.guards),
                        $.block,
                    ),
                    $.lotto
                ),
                alias(
                    seq(
                        "lotto",
                        optional($.callbacks),
                        optional($.guards),
                        $.block,
                    ),
                    $.lotto
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
                alias(
                    seq("action", "[", $.arg_list, "]", optional($.callbacks), optional($.guards)),
                    $.action
                ),
                alias(
                    seq("condition", "[", $.arg_list, "]", optional($.callbacks), optional($.guards)),
                    $.condition
                ),
                alias(
                    seq("wait", "[", $.number, ",", $.number, "]", optional($.callbacks), optional($.guards)),
                    $.wait
                ),
                alias(
                    seq("wait", "[", $.number, "]", optional($.callbacks), optional($.guards)),
                    $.wait
                ),
                alias(
                    seq("wait", optional($.callbacks), optional($.guards)),
                    $.wait
                ),
                alias(
                    seq("branch", "[", $.identifier, "]", optional($.callbacks), optional($.guards)),
                    $.branch
                ),
            ),

        // node_args requires at least one value
        node_args: ($) => seq("[", $.arg_list, "]"),
        arg_list: ($) => seq($._value, repeat(seq(",", $._value))),

        _value: ($) => choice($.number, $.string, $.boolean, "null", $.identifier),

        callbacks: ($) =>
            repeat1(
                choice(
                    alias(
                        seq(
                            "entry",
                            "(",
                            $.identifier,
                            optional(seq(
                                ",",
                                sepBy(",", $._value)
                            )),
                            ")"
                        ),
                        $.entry
                    ),
                    alias(
                        seq(
                            "exit",
                            "(",
                            $.identifier,
                            optional(seq(
                                ",",
                                sepBy(",", $._value)
                            )),
                            ")"
                        ),
                        $.exit
                    ),
                    alias(
                        seq(
                            "step",
                            "(",
                            $.identifier,
                            optional(seq(
                                ",",
                                sepBy(",", $._value)
                            )),
                            ")"
                        ),
                        $.step
                    )
                )
            ),
        guards: ($) =>
            choice(
                alias(
                    seq(
                        "while",
                        "(",
                        $.identifier,
                        optional(seq(
                            ",",
                            sepBy(",", $._value)
                        )),
                        ")",
                        optional(seq("then", choice("succeed", "fail")))
                    ),
                    $.while
                ),
                alias(
                    seq(
                        "until",
                        "(",
                        $.identifier,
                        optional(seq(
                            ",",
                            sepBy(",", $._value)
                        )),
                        ")",
                        optional(seq("then", choice("succeed", "fail")))
                    ),
                    $.until
                )
            ),

        comment: $ => choice(
            token(seq('//', /.*/)), // single-line comment
            token(/\/[*]([^*]|([*][^/]))*[*]\//) // block comment
        ),

        identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
        number: ($) => /\d+(\.\d+)?/,
        string: ($) => /"[^"]*"/,
        boolean: ($) => choice("true", "false"),

        // Remove now-unnecessary empty rules for callback and guard node types
    },
});

function sepBy(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule))));
}