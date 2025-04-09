#include "binary_trees.h"
#include "stdio.h"

/**
 * get_height - to get height of the binary tree
 * @tree: pointer to the root node
 * Return: the height in size_t or 0 if NULL tree
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = get_height(tree->left);
	right_height = get_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}

/**
 * binary_tree_is_perfect - check if binay is perfect
 * @tree: pointer to root node
 * Return: 1 if it is perfect, 0 it tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = get_height(tree->left);
	right_height = get_height(tree->right);

	if (tree == NULL)
		return (0);

	/* if it's a leaf, then it's perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if a node has one child, it's not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (left_height == right_height)
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));

	/* the rest cases when height differs */
	return (0);
}

