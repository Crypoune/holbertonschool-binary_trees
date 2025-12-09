#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node
 * Return: pointer to the sibling node, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent) /* si le noeud ou son parent n'existent pas */
		return (NULL);

	/* si le noeud est le fils gauche et qu'il y a un fils droit */
	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);

	/* si le noeud est le fils droit et qu'il y a un fils gauche */
	if (node->parent->right == node && node->parent->left)
		return (node->parent->left);

	return (NULL); /* pas de sibling */
}
