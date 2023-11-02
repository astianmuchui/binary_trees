#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at
 * least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of nodes with at least 1 child in a binary tree
 * If tree is NULL, the function must return 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		nodes += 1;
	}
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
