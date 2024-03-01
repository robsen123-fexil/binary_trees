  #include "binary_trees.h"

  /**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * This function calculates the number of leaf nodes in the specified binary tree.
 *
 * @tree: Pointer to the root node of the tree to count leaves.
 *
 * Return: Number of leaves, or 0 if the tree is NULL.
 */

       size_t binary_tree_leaves(const binary_tree_t *tree) { 
           return tree ?
         (tree->left || tree->right ? 
         binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) : 1) 
         : 0; 
         }
