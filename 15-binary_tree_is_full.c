    #include "binary_trees.h"

/**
 * is_full_recursive - Recursively checks if a binary tree is full.
 *
 * This function examines the specified binary tree, starting from the provided
 * root node, to determine if it is a full binary tree.
 *
 * @tree: Pointer to the root node of the tree to be checked.
 */
  int is_full_recursive(const binary_tree_t *tree) 
       { return (tree ? 
         (tree->left && tree->right ? is_full_recursive(tree->left) &&
    is_full_recursive(tree->right) : !
     (tree->left || tree->right)) : 1); }
   int binary_tree_is_full(const binary_tree_t *tree) 
{ return tree ? 
(tree->left && tree->right ? 
    binary_tree_is_full(tree->left) 
     && binary_tree_is_full(tree->right) : !(tree->left || tree->right)) : 0; }
