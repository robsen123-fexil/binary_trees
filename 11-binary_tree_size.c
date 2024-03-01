#include "binary_trees.h"

/**
 * binary_tree_size -  size of a binary tree
 * @tree:  measure the size of
 *
 
 */
   size_t binary_tree_depth(const binary_tree_t *tree) { return tree ? binary_tree_depth(tree->parent) + 1 : 0; }
