#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_height - to  measure the height of the tree
 * @tree: the pointer to the root node of the tree
 * Return: the height in size_t or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}

