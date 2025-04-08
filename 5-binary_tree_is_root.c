#include "binary_trees.h"
/**
 * binary_tree_is_root - Vérifie si un oeud donné est une racin
 * @node: pointeur vers le noeud vérfier
 * Description:
 * Un noeud est considéré comme race s il n a pas de parent
 * Return: 1 si le noeud est une racine, 0 sinon
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
