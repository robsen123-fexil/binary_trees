       #include "binary_trees.h"

/**
 * binary_tree_size - Computes the size of a binary tree.
 *
 * This function calculates the number of nodes in the specified binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure its size.
 */
     size_t binary_tree_size(const binary_tree_t *tree) { return tree ? binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1 : 0; }

