#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes in
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (1 + left_count + right_count);
}

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre
 * Return: la hauteur de l'arbre (0 si l'arbre est NULL)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	 size_t sizeleft;
	 size_t sizeright;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	sizeleft = binary_tree_height(tree->left);
	sizeright = binary_tree_height(tree->right);

	if (sizeleft > sizeright)
		return (sizeleft + 1);
	else
		return (sizeright + 1);
	return (binary_tree_height(tree->left) + binary_tree_height(tree->right));
}



/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect_left;
	int perfect_right;

	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (1);

	if (tree->left == NULL || tree->right == NULL)
	return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	return (0);

	perfect_left = binary_tree_is_perfect(tree->left);
	perfect_right = binary_tree_is_perfect(tree->right);


	return (perfect_left & perfect_right);

}
