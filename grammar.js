module.exports = grammar({
  name: "plantuml",

  precedences: ($) => [["component", "block"]],

  conflicts: ($) => [[$.component, $.block]],

  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) =>
      choice(
        $.preprocessor,
        $.include,
        $.theme,
        $.component,
        $.block,
        $.type,
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

    // FIX: edge cases (i.e. together { })
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
        // field("type", $.identifier),
        // field("name", $.identifier),
        choice($.identifier, field("component", $.component)),
        "{",
        repeat($.statement),
        "}",
      ),

    // delimiter: ($) => /[]/,

    attribute_list: ($) => seq("(", sepBy1(",", $.attribute), ")"),
    // seq("(", sepBy1(",", $.attribute), ")", optional($.block)),
    // seq("(", sepBy1(",", $.attribute), ")", optional("{")),

    attribute: ($) => choice($.identifier, $.string),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    non_breakable_identifier: ($) => /[a-zA-Z0-9_\/.\-]+/,

    string: ($) => token(seq('"', /[^"]*/, '"')),

    comment: ($) => token(/'.*/),

    type: ($) =>
      token(
        choice(
          "abstract",
          "action",
          "actor",
          "agent",
          "annotation",
          "archimate",
          "artifact",
          "boundary",
          "card",
          "class",
          "cloud",
          "collections",
          "component",
          "control",
          "database",
          "diamond",
          "entity",
          "enum",
          "exception",
          "file",
          "folder",
          "frame",
          "hexagon",
          "interface",
          "json",
          "label",
          "map",
          "metaclass",
          "node",
          "object",
          "package",
          "participant",
          "person",
          "process",
          "protocol",
          "queue",
          "rectangle",
          "relationship",
          "stack",
          "state",
          "storage",
          "struct",
          "usecase",
        ),
      ),

    keyword: ($) =>
      token(
        choice(
          "@startuml",
          "@enduml",
          "@startboard",
          "@endboard",
          "@startbpm",
          "@endbpm",
          "@startchen",
          "@endchen",
          "@startchronology",
          "@endchronology",
          "@startcreole",
          "@endcreole",
          "@startcute",
          "@endcute",
          "@startdef",
          "@enddef",
          "@startditaa",
          "@endditaa",
          "@startdot",
          "@enddot",
          "@startebnf",
          "@endebnf",
          "@startfiles",
          "@endfiles",
          "@startflow",
          "@endflow",
          "@startgantt",
          "@endgantt",
          "@startgit",
          "@endgit",
          "@starthcl",
          "@endhcl",
          "@startjcckit",
          "@endjcckit",
          "@startjson",
          "@endjson",
          "@startlatex",
          "@endlatex",
          "@startmath",
          "@endmath",
          "@startmindmap",
          "@endmindmap",
          "@startnwdiag",
          "@endnwdiag",
          "@startproject",
          "@endproject",
          "@startregex",
          "@endregex",
          "@startsalt",
          "@endsalt",
          "@starttree",
          "@endtree",
          "@startuml",
          "@enduml",
          "@startwbs",
          "@endwbs",
          "@startwire",
          "@endwire",
          "@startyaml",
          "@endyaml",
          "as",
        ),
      ),

    skinparameter: ($) => token(/.*/), // Placeholder for skinparameter
    color: ($) => token(/.*/), // Placeholder for color
  },
});

function sepBy1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
