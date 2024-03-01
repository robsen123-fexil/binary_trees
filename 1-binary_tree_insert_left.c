      #include "binary_trees.h"

  /**
 * binary_tree_insert_left - Inserts a node as the left child of a given node
 *
 * This function inserts a new node with the specified value as the left child
 * of the given parent node. If the parent already has a left child,
 * the new node will take its place, and the existing left child will become
 * the left child of the newly inserted node.
 *
 * @parent: A pointer to the node to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the newly inserted node, or NULL on failure
 */
                   binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) { binary_tree_t *new = binary_tree_node(
         parent, value
                ); if (
         !parent || !new) return (NULL); 
                                                                                                      if (parent->left != NULL
         ) { new->left = parent->left; parent->left->parent = new; } parent->left = new; return (
         new
         ); 
                                                                            }
