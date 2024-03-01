#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  if a given node is a leaf in a binary tree.
 *
 * This function determines whether the provided node is a leaf (i.e., has no
 * left or right children) in the binary tree.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if the node is NULL.
 */

    int binary_tree_is_leaf(const binary_tree_t *node){return ((node==NULL || node->left || node->right) 
          ? 0 : 1);
    }