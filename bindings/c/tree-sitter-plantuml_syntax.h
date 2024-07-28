#ifndef TREE_SITTER_PLANTUML_SYNTAX_H_
#define TREE_SITTER_PLANTUML_SYNTAX_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

const TSLanguage *tree_sitter_plantuml_syntax(void);

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_PLANTUML_SYNTAX_H_
