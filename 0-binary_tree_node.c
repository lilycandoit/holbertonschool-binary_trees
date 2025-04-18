#include "binary_trees.h"
#include "stdlib.h"
#include "stdio.h"

/**
* binary_tree_node - create a binary tree node
* @parent: pointer to the parent node
* @value: value to put in the new node
* Return: pointer to the new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* assign value for the new node */
	new_node->n = value;
	new_node->parent = parent;
	/* When created, a node does not have any child */
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

