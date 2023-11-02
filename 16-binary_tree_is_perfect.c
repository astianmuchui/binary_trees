#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfectly balanced
 * @tree: Pointer to the root node of the tree
 * Return: 1 if tree is perfect, otherwise 0. If tree is NULL, return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int left_size = 0;
	int right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	if (left_height == right_height && left_size == right_size)
	{
		return (1);
	}
	return (0);
}
