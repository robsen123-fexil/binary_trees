       #include "binary_trees.h"

    /**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * This function calculates the balance factor of the specified binary tree,
 * starting from the provided root node.
 *
 * @tree: Pointer to the root node of the tree for balance factor measurement.
 */

        int binary_tree_balance(const binary_tree_t *tree) {
             return tree ? binary_tree_height
             (tree->left) - binary_tree_height
             (tree->right) : 0; }

             size_t binary_tree_height(const binary_tree_t *tree) {
                 return tree ? 1 + ((binary_tree_height(tree->left) > binary_tree_height
                 (tree->right)) ? binary_tree_height(tree->left) : binary_tree_height(tree->right)) : 0; }

