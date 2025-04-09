#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include "binary_trees.h"

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
 * binary_tree_balance - calculates the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight = 0;
	int rHeight = 0;

	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (0);

	if (tree->left != NULL)
	lHeight = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
	rHeight = 1 + binary_tree_height(tree->right);

	return (lHeight - rHeight);

}
