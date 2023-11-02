#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an binary tree
 * by freeing its nodes in memory
 * @tree: Pointer to the root node of the tree to delete
 * Return: Nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
