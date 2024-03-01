                

                #include "binary_trees.h"

              /**
        * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
          * @node: A pointer to the node to find the uncle of.
 *
 
 */                   binary_tree_t *binary_tree_uncle(binary_tree_t *node) { return (
                   node == NULL ||
                   node->parent == NULL || 
    node->parent->parent == NULL
              ) ? NULL : (
        (
                      node->parent->parent->left == node->parent
            ) ? 
            node->parent->parent->right : node->parent->parent->left
            )    ; 
            
            }
