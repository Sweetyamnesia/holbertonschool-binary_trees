#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: NULL if node is null or has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}

	return (NULL);
}
