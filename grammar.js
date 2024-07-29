module.exports = grammar({
  name: "plantuml",

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
        $.delimiter,
        $.keyword,
        $.comment,
        $.skinparameter,
      ),

    // FIX: associativity
    preprocessor: ($) =>
      prec.left(
        seq(
          "!",
          $.identifier,
          optional(choice($.statement, $.identifier, $.string)),
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
      seq(
        field("method", $.identifier), // TODO: change identifier to type and allow stdlib/custom defs
        field("tag", $.attribute),
        optional(seq("as", field("alias", $.identifier))),
        optional($.attribute_list),
        optional($.string),
      ),

    // TODO: figure out if component should be inside/outside/replaced by block
    block: ($) =>
      seq(
        // TODO: fix stuff before block, could be c4 func or 'rectangle "text" as rect'
        choice(field("object", $.identifier), field("component", $.component)),
        // "{",
        $.block_open,
        repeat($.statement),
        // "}",
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

    comment: (_) => token(/'.*/),

    delimiter: (_) => token(/[\{\(\[\.\]\)\}]/),

    keyword: (_) => /@.*/,

    // TEST: make sure works for more cases
    skinparameter: ($) =>
      seq("skinparam", $.identifier, choice($.number, $.identifier)),
    skinparam: (_) => "skinparam",
    number: (_) => /\d+/,

    color: (_) => token(/.*/), // TODO: placeholder for color
  },
});

function sepBy1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
