package tree_sitter_mdsl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mdsl "github.com/dvsmc/tree-sitter-mdsl.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mdsl.Language())
	if language == nil {
		t.Errorf("Error loading Mdsl grammar")
	}
}
