 #include "binary_trees.h"

 /**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 *
 * This function performs a pre-order traversal of the binary tree starting from
 * the given root node, calling the specified function for each visited node.
 *
 * @tree: to the root node of the tree to traverse.
 * @func:  to a function to call for each visited node.
 */


  void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
  {if (tree && func) {func(tree->n);binary_tree_preorder(tree->right, func); binary_tree_preorder(tree->left, func);}}