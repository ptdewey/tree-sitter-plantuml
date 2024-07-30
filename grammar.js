module.exports = grammar({
  name: "plantuml",

  // TODO: figure out if there is some way to identify if there are too many components on the same line on the treesitter side
  rules: {
    document: ($) => repeat($._statement),

    // TEST: if this is necessary and/or works correctly
    // WARNING: do not move this above 'document' or things will break
    word: ($) => $.identifier,

    // FIX: statement as main type should be able to allow string alias
    _statement: ($) =>
      choice(
        $.preprocessor,
        $.include,
        $.theme,
        $.component,
        $.block,
        $.delimiter,
        $.keyword,
        $.comment,
        $.skinparameter,
        $.arrow,
      ),

    // FIX: associativity
    preprocessor: ($) =>
      prec.left(
        seq(
          "!",
          $.identifier,
          optional(choice($._statement, $.identifier, $.string)),
        ),
      ),

    include: ($) =>
      seq(
        "!include",
        choice(
          field("url", $.url),
          field("filepath", $.filepath),
          field(
            "library",
            seq($.include_open, $.non_breakable_identifier, $.include_close),
          ),
        ),
      ),
    include_open: (_) => "<",
    include_close: (_) => ">",

    theme: ($) =>
      seq("!theme", field("name", $.identifier), "from", field("url", $.url)),

    url: (_) => token(/https?:\/\/[^\s<>"]+/),

    filepath: (_) => token(/[^\s<>"]+/),

    component: ($) =>
      prec.left(
        2,
        seq(
          field("method", $.identifier), // TODO: change identifier to type and allow stdlib/custom defs
          // TODO: correctly handle func() style components
          // (currently shows nonexistent attribute and tag in ast)
          field("tag", $.attribute),
          optional(seq("as", field("alias", $.identifier))),
          optional($.attribute_list),
          // TODO: '$param=' handling
          optional($.string),
          optional($.style),
        ),
      ),

    // TODO: figure out if component should be inside/outside/replaced by block
    block: ($) =>
      seq(
        // TODO: fix stuff before block, could be c4 func or 'rectangle "text" as rect'
        choice(field("object", $.identifier), field("component", $.component)),
        $.block_open,
        repeat($._statement),
        $.block_close,
      ),
    block_open: (_) => "{",
    block_close: (_) => "}",

    attribute_list: ($) =>
      seq(
        $.attribute_list_open,
        sepBy1($.attribute_sep, $.attribute),
        $.attribute_list_close,
      ),
    attribute_sep: (_) => ",",
    attribute_list_open: (_) => "(",
    attribute_list_close: (_) => ")",

    attribute: ($) => choice($.identifier, $.string),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    non_breakable_identifier: (_) => /[a-zA-Z0-9_\/.\-]+/,

    string: (_) => token(seq('"', /[^"]*/, '"')),

    comment: (_) =>
      choice(
        token(seq(/\n\s*'/, /.*/)),
        // FIX: disallow block comments from starting at end of line and not ending on same line
        // - block comments can only be used after non-whitespace characters if it also ends on same line
        token(seq("/'", repeat(choice(/[^']/, seq("'", /[^/]/))), "'/")),
      ),

    delimiter: (_) => token(/[\{\(\[\.\]\)\}]/),

    keyword: (_) => /@.*/,

    // TEST: make sure works for more cases
    skinparameter: ($) =>
      seq("skinparam", $.identifier, choice($.number, $.identifier)),

    number: (_) => /\d+/,

    style: ($) =>
      seq(
        "#",
        sepBy1($.style_sep, field("style_param", $.non_breakable_identifier)),
      ),
    style_sep: (_) => ":",

    // TODO: cover remaining cases
    arrow: ($) =>
      seq(
        field("lhs", $.identifier),
        optional("<"),
        repeat1("-"),
        optional($.annotation), // TODO: better annotation handling (must be followed with ], -, or >)
        optional(repeat(/[\->]/)),
        field("rhs", $.identifier),
      ),

    // TODO: annotation needs to also allow directions (and not wrapped in [])
    annotation: (_) => seq("[", "hidden", "]"),
  },
});

function sepBy1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
