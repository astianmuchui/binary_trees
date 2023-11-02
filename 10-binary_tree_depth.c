#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 * @tree: Pointer to the node
 * Return: Depth of the node. If tree is NULL, return 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}

	return (depth);
}
