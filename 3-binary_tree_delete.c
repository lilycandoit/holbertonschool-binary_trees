#include "stdlib.h"
#include "stdio.h"
#include "binary_trees.h"

/**
 * binary_tree_delete - to delete the entire binary tree
 * @tree: the pointer to the root node of the tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

