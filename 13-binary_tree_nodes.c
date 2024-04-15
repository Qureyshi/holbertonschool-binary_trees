#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes in
 *
 * Return: Number of nodes in the tree, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);

	return (size + 1);
}
