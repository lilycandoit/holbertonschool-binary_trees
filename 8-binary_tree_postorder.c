#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_postorder - go through binary tree using post-order
 * @tree: pointer to the root node
 * @func: the pointer to a function to call each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func); /* traversal left */
	
	binary_tree_postorder(tree->right, func); /* then traversal right */

	func(tree->n); /* visit root at last */	
}


