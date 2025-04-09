#include "binary_trees.h"

/**
 * binary_tree_uncle - to find uncle of a node
 * @node: a pointer to the node to find uncle
 * Return: the pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->parent->left);
	if (parent->right == node)
		return (parent->parent->right);

	return (NULL);
}

