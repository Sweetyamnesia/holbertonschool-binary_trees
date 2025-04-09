#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - calculates the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	return (lHeight - rHeight);

}
