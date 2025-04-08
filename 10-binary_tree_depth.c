#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_depth - to  measure the depth of the tree
 * @tree: the pointer to the root node of the tree
 * Return: the depth in size_t or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || (tree->parent == NULL))
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent; /* move one lever up */
		depth++;
	}

	return (depth);
}

