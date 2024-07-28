package tree_sitter_plantuml_syntax_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-plantuml_syntax"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_plantuml_syntax.Language())
	if language == nil {
		t.Errorf("Error loading PlantumlSyntax grammar")
	}
}
