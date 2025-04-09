#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->parent == NULL)
	return (0);

	if (tree->parent != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (1 + binary_tree_depth(tree->parent));

}
