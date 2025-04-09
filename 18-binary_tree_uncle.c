#include "binary_trees.h"

/**
 * binary_tree_uncle - to find uncle of a node
 * @node: a pointer to the node to find uncle
 * Return: the pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
		return (grandparent->right);
	if (grandparent->right == node->parent)
		return (grandparent->left);

	return (NULL);
}

