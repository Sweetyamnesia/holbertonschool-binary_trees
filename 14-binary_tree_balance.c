#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (tree == NULL)
	return (0);

	lHeight = binary_tree_balance(tree->left);
	rHeight = binary_tree_balance(tree->right);

	if (abs(lHeight - rHeight) > 1)
	return (0);

	return (binary_tree_balance(tree->left) && binary_tree_balance(tree->right));


}
