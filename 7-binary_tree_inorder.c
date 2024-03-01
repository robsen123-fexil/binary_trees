 #include "binary_trees.h"

 /**
 * binary_tree_inorder - Performs in-order traversal on a binary tree.
 *
 * This function conducts an in-order traversal of the binary tree, starting from
 * the given root node. For each visited node, the specified function is executed.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function called for each visited node.
 */

 
       void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)){if (tree && func){binary_tree_inorder(tree->left, func);func(tree->n);binary_tree_inorder(tree->right, func);}}