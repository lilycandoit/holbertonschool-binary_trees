#include "binary_trees.h"
#include "stdio.h"

/**
 * calculate_height - Helper function to calculate the height of a subtree
 * @tree: pointer to the root node of the subtree to measure
 * Return: height of the tree, accounting for NULL nodes properly
 */
static int calculate_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* Base case: NULL tree has height -1 (for balance calculation) */

	if (tree == NULL)
		return (-1);

	left_height = calculate_height(tree->left);
	right_height = calculate_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - to measure the balance factor
 * @tree - pointer to root node of the tree
 * Return: the balance in int or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (calculate_height(tree->left) - calculate_height(tree->right));
}

