#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_size - to measure the size of binary
 * @tree: a pointer to root node
 * Return: the size or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}

