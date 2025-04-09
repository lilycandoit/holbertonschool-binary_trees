#include "binary_trees.h"

/**
 * binary_tree_sibling - to find the sibling of a node
 * @node: pointer to the node to find sibling
 * Return: the pointer to be sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right); /* including NULL if no sibling */
	if (parent->right == node)
		return (parent->left); /* including NULL if no sibling */

	return (NULL);
}

