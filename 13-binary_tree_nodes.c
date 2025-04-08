#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_nodes - to count the nodes in the binary tree
 * @tree: the pointer to the root node
 * Return: number of nodes || 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left, count_right;

	if (tree == NULL)
		return (0);

	/* if it is a leaf, no count */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);

	return (count_left + count_right + 1);
}

