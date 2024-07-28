module.exports = grammar({
  name: "plantuml",

  precedences: ($) => [["component", "block"]],

  conflicts: ($) => [[$.component, $.block]],

  rules: {
    document: ($) => repeat($.statement),

    // FIX: statement as main type should be able to allow string alias
    // FIX: styling of objects (#line.dashed)
    statement: ($) =>
      choice(
        $.preprocessor,
        $.include,
        $.theme,
        $.component,
        $.block,
        // $.type,
        $.keyword,
        $.comment,
      ),

    preprocessor: ($) => seq("!", $.identifier),

    include: ($) =>
      seq(
        "!include",
        choice(
          field("url", $.url),
          field("filepath", $.filepath),
          seq("<", field("library", $.non_breakable_identifier), ">"),
        ),
      ),

    theme: ($) =>
      seq("!theme", field("name", $.identifier), "from", field("url", $.url)),

    url: ($) => token(/https?:\/\/[^\s<>"]+/),

    filepath: ($) => token(/[^\s<>"]+/),

    component: ($) =>
      seq(
        field("type", $.identifier), // TODO: change identifier to type and allow stdlib/custom defs
        field("tag", $.attribute),
        optional(seq("as", field("alias", $.identifier))),
        optional($.attribute_list),
        optional($.string),
      ),

    // TODO: figure out if component should be inside/outside/replaced by block
    block: ($) =>
      seq(
        // TODO: fix stuff before block, could be c4 func or 'rectangle "text" as rect'
        choice($.identifier, field("component", $.component)),
        "{",
        repeat($.statement),
        "}",
      ),

    attribute_list: ($) => seq("(", sepBy1(",", $.attribute), ")"),

    attribute: ($) => choice($.identifier, $.string),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    non_breakable_identifier: ($) => /[a-zA-Z0-9_\/.\-]+/,

    string: (_) => token(seq('"', /[^"]*/, '"')),

    comment: (_) => token(/'.*/),

    keyword: (_) => /@.*/,

    skinparameter: (_) => token(/.*/), // TODO: placeholder for skinparameter

    color: (_) => token(/.*/), // TODO: placeholder for color
  },
});

function sepBy1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
