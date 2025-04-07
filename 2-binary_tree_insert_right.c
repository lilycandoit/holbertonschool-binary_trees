#include "binary_trees.h"
#include "stdlib.h"
#include "stdio.h"

/**
* binary_tree_insert_right - insert a new node as the right-child
* @parent: pointer to the parent node
* @value: value to put in the new node
* Return: pointer to the new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*if no parent, then cen't insert anything */
	if (parent == NULL)
		return (NULL);
	/* create a new node with */
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL); /* memory allocation failed */

	/* if parent already has a left child */
	if (parent->right != NULL)
	{
		/*set the child of current node to be child of new_node */
		new_node->right = parent->right;
		/* set the parent of old left child to be new_node */
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}


