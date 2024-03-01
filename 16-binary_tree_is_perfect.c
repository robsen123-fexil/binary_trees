               #include "binary_trees.h"

         /**
         * binary_tree_sibling - ]e sibling of a
 *                       node in a binary tree.
         * @node: A ponode to find the sibling of.
           *
 
 */
        binary_tree_t *binary_tree_sibling(binary_tree_t *node) {
     return (node == NULL || node->parent == NULL
               ) ? NULL : (
                (
                node->parent->left == node
        ) ? node->parent->right : node->parent->left
     
        ); 
     }
