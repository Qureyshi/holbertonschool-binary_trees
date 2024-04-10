#include "binary_trees.h"

/**
 * binary_tree_t - Finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;
	
	if (!node || !node->parent
		|| !node->parent->right || !node->parent->left)
		return (NULL);
	
	sibling = node->parent->right;
	sibling = (node == sibling) ? node->parent->left : sibling;
	
	return (sibling);
}
