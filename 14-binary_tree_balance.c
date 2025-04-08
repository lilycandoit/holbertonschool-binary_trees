#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_balance - to measure the balance factor
 * @tree - pointer to root node of the tree
 * Return: the balance in int or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}

