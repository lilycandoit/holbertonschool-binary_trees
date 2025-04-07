#include "stdio.h"
#include "stdlib.h"
#include "binary_trees.h"

/**
 * binary_tree_is_root - to check if a node is a root
 * @node: pointer to the node to be checked
 * Return: 1 if it is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}

