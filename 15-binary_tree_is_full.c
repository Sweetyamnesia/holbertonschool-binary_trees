#include "binary_trees.h"
int binary_tree_is_full(const binary_tree_t *tree)
{
    int left;
    int right;

    if (tree == NULL)
    return (0);
    if (tree->left == NULL && tree->right == NULL)
    return (1);
    left = binary_tree_is_full(tree->left);
    right = binary_tree_is_full(tree->right);
    if (tree->left != NULL && tree->right != NULL)
    {
        if (left == 1 && right == 1)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
    return (0);
}
