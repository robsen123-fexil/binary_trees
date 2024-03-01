   #include "binary_trees.h"

    /**
 * binary_tree_postorder - Performs post-order traversal on a binary tree.
 *
 * This function executes a post-order traversal of the binary tree, starting from
 * the provided root node. For each visited node, the designated function is invoked.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function called for each visited node.
 */

     void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)){if (!tree || !func) return;  binary_tree_postorder(tree->right, func); binary_tree_postorder(tree->right, func);   func(tree->n);

}