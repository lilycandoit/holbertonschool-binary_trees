#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_leaves - to count the leaves in the binary tree
 * @tree: the pointer to the root node
 * Return: number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left, count_right;

	if (tree == NULL)
		return (0);

	/* if it is a leaf */
	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}

	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);

	return (count_left + count_right);
}

