#include "binary_trees.h"

/**
 * binary_tree_is_full - to check if a binary is full
 * @tree: pointer to the root node
 * Return: 1 if full (true) and 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_result, right_result;

	if (tree == NULL)
		return (0);

	/* leaf is a full node too */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if having one child only => not full */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_result = binary_tree_is_full(tree->left);
	right_result = binary_tree_is_full(tree->right);

	return (left_result && right_result);
}

