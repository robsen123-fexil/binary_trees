    #include "binary_trees.h"

     /**
 * binary_tree_is_root -  if a given node is the root of a binary tree.
 *
 * This function determines whether the provided node is the root of a binary tree.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise or if the node is NULL.
 */


    int binary_tree_is_root(const binary_tree_t *node) { return ((node == NULL || node->parent) ? 0 : 1);}

