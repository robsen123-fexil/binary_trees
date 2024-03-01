    #include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 
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
