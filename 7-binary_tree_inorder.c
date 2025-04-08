#include "binary_trees.h"
/**
 * binary_tree_inorder - Parcourt un arbre binaire en ordre (in-order)
 * @tree: pointeur vers la racine de l'arbre
 * @func: fonction a appliquer sur la valeur de chaque noeud
 * Description:
 * Effectue un parcours in-order (gauche, noeud, droite) et applique `func`
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
