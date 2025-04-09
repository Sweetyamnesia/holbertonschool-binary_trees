#include "binary_trees.h"
/**
 * binary_tree_size - Calcule la taille (nombre total de noeud d'un arbre)
 * @tree: pointeur vers la racine de l'arbre
 * Return: taille de l'arbre (0 si tree est NULL)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
