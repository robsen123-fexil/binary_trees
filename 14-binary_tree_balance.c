       #include "binary_trees.h"

     /**
   * binary_tree_balance - the balance factor of a binary tree.
    * @tree:  to the root node of the tree to measure the balance factor.
 
   */
        int binary_tree_balance(const binary_tree_t *tree) {
             return tree ? binary_tree_height
             (tree->left) - binary_tree_height
             (tree->right) : 0; }

             size_t binary_tree_height(const binary_tree_t *tree) {
                 return tree ? 1 + ((binary_tree_height(tree->left) > binary_tree_height
                 (tree->right)) ? binary_tree_height(tree->left) : binary_tree_height(tree->right)) : 0; }

