#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description:
 * The function computes the height of a binary tree recursively.
 * A NULL tree has a height of 0. A leaf node also returns 0.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_h, right_h;

    if (!tree)
        return (0);

    left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    return (left_h > right_h ? left_h : right_h);
}
