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
		return (1);

	sizeleft = binary_tree_height(tree->left);
	sizeright = binary_tree_height(tree->right);

	if (sizeleft > sizeright)
		return (sizeleft + 1);
	else
		return (sizeright + 1);
	return (binary_tree_height(tree->left) + binary_tree_height(tree->right));
}
