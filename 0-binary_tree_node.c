#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node
* @parent: Pointer to the parent node of the node to create
* @value: Value to put in the new node
* Return: node created or NULL if it fails
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_node = NULL;

	binary_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (binary_node == NULL)
		return (NULL);

	binary_node->n = value;
	binary_node->parent = parent;

	binary_node->left = NULL;
	binary_node->right = NULL;

	return (binary_node);
}
