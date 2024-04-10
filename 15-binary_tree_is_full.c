#include "binary_trees.h"

/**
 * binary_tree_is_full - Counts the nodes in a binary tree
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: Number of nodes in the tree, or 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	return (0);
}
