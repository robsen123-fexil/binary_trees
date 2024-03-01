                       #include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * This function takes a pointer to the parent node and a value,
 * then creates and returns a new binary tree node with the given value
 * and links it to the specified parent node.
 *
 * @parent: Pointer to the parent node of the new node to be created
 * @value: Value to be stored in the new node
 * 
 * Return: A pointer to the newly created binary tree node
 */

 
                                     binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) { 
	                  binary_tree_t *new = malloc(sizeof(binary_tree_t
		 )
		 ); if (new == NULL
		 ) return (NULL
		 ); new->n = value; new->parent = parent; new->left = NULL; new->right = NULL; return (new
				  ); 
				     }
