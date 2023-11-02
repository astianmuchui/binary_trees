#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure*
 * or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bin_tree = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	bin_tree = binary_tree_node(parent, value);
	if (bin_tree == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		bin_tree->right = parent->right;
		bin_tree->right->parent = bin_tree;
	}
	parent->right = bin_tree;
	return (bin_tree);
}
