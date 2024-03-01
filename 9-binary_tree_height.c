   #include "binary_trees.h"

  /**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * This function calculates the height of the binary tree, starting from
 * the specified root node.
 *
 * @tree: Pointer to the root node of the tree for height measurement.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{size_t ROHEIGHT = 0, BEHEIT = 0;if (tree==NULL)return (0);ROHEIGHT = tree->left ? 1 + binary_tree_height(tree->left) : 0;BEHEIT = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((ROHEIGHT> BEHEIT) ? ROHEIGHT: BEHEIT);
return (0);
}