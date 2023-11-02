#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * @parent: Pointer to the node to insert the left-child
 * @value: Value to store in the newly created node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_node = NULL;

	if (parent == NULL)
		return (NULL);

	binary_node = binary_tree_node(parent, value);
	if (binary_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		binary_node->left = parent->left;
		parent->left->parent = binary_node;
	}

	parent->left = binary_node;

	return (binary_node);
}
