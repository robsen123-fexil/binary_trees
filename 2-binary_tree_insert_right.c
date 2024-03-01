#include "binary_trees.h"

  /**
 * binary_tree_insert_right - Inserts a node as the right child of a given node
 *
 * This function inserts a new node with the specified value as the right child
 * of the given parent node in a binary tree. If the parent already has a
 * right child, the new node will take its place, and the existing right child
 * will become the right child of the newly inserted node.
 *
 * @parent: A pointer to the node to insert the right child in
 * @value: The value to store in the new node
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the newly inserted node.
 */

   
   
    binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, 
    
                        int value){ binary_tree_t *new; if ( !parent )return (NULL);new = binary_tree_node(parent, value);
    if (!new)  return (NULL);
    if (!parent->right ) {new->right = parent->right;parent->right->parent = new;
             }
parent->right = new;   return (new);

}