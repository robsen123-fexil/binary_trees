    #include "binary_trees.h"

    /**
    * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
    * @tree: A pointer to the root node of the tree to count the number of nodes.
 
      */
      size_t binary_tree_nodes(const binary_tree_t *tree) 
      { return tree ? 
       (tree->left || tree->right 
       ? 1 : 0) + binary_tree_nodes(tree->left) + binary_tree_nodes
        (tree->right) : 0;
               }
