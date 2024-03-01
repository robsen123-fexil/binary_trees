    #include "binary_trees.h"

   /**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree.
 *
 * This function calculates the number of nodes in the specified binary tree
 * that have at least one child.
 *
 * @tree: Pointer to the root node of the tree to count nodes.
 */

      size_t binary_tree_nodes(const binary_tree_t *tree) 
      { return tree ? 
       (tree->left || tree->right 
       ? 1 : 0) + binary_tree_nodes(tree->left) + binary_tree_nodes
        (tree->right) : 0;
               }
