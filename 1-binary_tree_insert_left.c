#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - insÃ¨r un noeud en tant qu enfant gauche
 *  d'un autre noeud
 * @parent: pointeur vers le noeud parent dans lequel insÃ©rer l noeud gauche
 * @value: valeur a stocker dans le nouveau noeud
 * Description: Si le parent a dÃj©a un enfant gauch
 * le nouveau noeud le remplace
 * et l'ancien enfant devient l'enfant gauche du nouveau noeud
 * Return: pointeur vers le nouveau noeud ou NULL en cas d'Ã©che
 * c ou si parent est NUL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
