   #include "binary_trees.h"

    /**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * This function determines the depth of a given node within the binary tree.
 *
 * @tree: Pointer to the node for which the depth is to be measured.
 */

          
          
            size_t binary_tree_depth(const binary_tree_t *tree) { size_t depth = 0; while (tree && tree->parent) { depth++; tree = tree->parent; } return depth; }
