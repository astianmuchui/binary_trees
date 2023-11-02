#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node.
 * If node is NULL or the parent is NULL,
 * return NULL. If node has no sibling, return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		sibling = node->parent->right;
	}
	else
	{
		sibling = node->parent->left;
	}
	return (sibling);
}
