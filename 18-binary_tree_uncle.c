#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 * Return: pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL); /* pas de parent ou pas de grand-parent → pas d'oncle */

	/* oncle = sibling du parent */
	return (binary_tree_sibling(node->parent));
}
