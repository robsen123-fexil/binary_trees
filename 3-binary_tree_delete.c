#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * This function takes a binary tree as input and recursively deletes
 * all nodes in the tree, freeing up the allocated memory for each node.
 *
 * @tree: Pointer to the root of the binary tree to delete
 */

    void binary_tree_delete(binary_tree_t *tree)
  {  if (tree!= NULL){ return ; binary_tree_delete(tree->right);binary_tree_delete(tree->left);free(tree);}}