#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_inorder - go through binary tree using in-order
 * @tree: pointer to the root node
 * @func: the pointer to a function to call each node
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func); /* traversal left */
	func(tree->n); /* visit root */
	binary_tree_inorder(tree->right, func); /* then traversal right */
}


