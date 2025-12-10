#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a binary tree node on the right
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 * Return: Pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
