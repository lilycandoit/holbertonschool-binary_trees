#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_preorder - go through binary tree using pre-order
 * @tree: pointer to the root node
 * @func: the pointer to a function to call each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}


