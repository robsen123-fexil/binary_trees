   #include "binary_trees.h"

   /**
    * binary_tree_height - s the height of a binary tree.
    * @tree: A phe root node of the tree to measure the height.
   
  */
size_t binary_tree_height(const binary_tree_t *tree)
{size_t ROHEIGHT = 0, BEHEIT = 0;if (tree==NULL)return (0);ROHEIGHT = tree->left ? 1 + binary_tree_height(tree->left) : 0;BEHEIT = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((ROHEIGHT> BEHEIT) ? ROHEIGHT: BEHEIT);
return (0);
}