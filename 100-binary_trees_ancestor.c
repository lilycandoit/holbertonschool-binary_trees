#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	/* walk up from 'first' */
	while (first)
	{
		temp = second;

		while (temp)
		{
			if (first == temp)
				return ((binary_tree_t *)first);
			/* found the common ancestor + have to use casting to change the type */

			temp = temp->parent; /* one level up */
		}

		first = first->parent; /* one level up */
	}

	return (NULL); /* otherwise no common ancestor */
}

