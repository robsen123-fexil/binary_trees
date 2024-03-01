               #include "binary_trees.h"

        /**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 *
 * This function locates the sibling of the specified node in a binary tree.
 *
 * @node: A pointer to the node for which to find the sibling.
 */


        binary_tree_t *binary_tree_sibling(binary_tree_t *node) {
     return (node == NULL || node->parent == NULL
               ) ? NULL : (
                (
                node->parent->left == node
        ) ? node->parent->right : node->parent->left
     
        ); 
     }
