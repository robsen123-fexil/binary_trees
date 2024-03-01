     #include "binary_trees.h"

     /**
    * binary_tree_is_perfect - if a binary tree is perfect
   * @tree: a pointer to the root node of the tree to check
    *
  
    */
        int binary_tree_is_perfect(const binary_tree_t *tree)
             { return tree ? 
      (!tree->left && !tree->right ? 1 :
 binary_tree_height(tree) == floor(log2(binary_tree_size(tree) + 1))) : 
     0;
 
  }  int _pow_recursion(int x, int y) { 
    return 
                          (y < 0 ? -1 : (y == 0 ? 1 : 
             x * _pow_recursion(x, y - 1))   
            );
     
     
     
     }     size_t binary_tree_size(const binary_tree_t *tree)     {  return tree ? binary_tree_size
    (tree->left) + binary_tree_size  (tree->right) + 1 : 0;
    
     }
