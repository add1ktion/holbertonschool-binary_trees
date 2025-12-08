#include "binary_trees.h"
/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
* @first: Pointer to the first node.
* @second: Pointer to the second node.
*
* Return: Pointer to the lowest common ancestor node, or NULL if not found.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	const binary_tree_t *tmp, *tmp_b;

	if (first == NULL || second == NULL)
		return (NULL);

	tmp = first;

	while (tmp != NULL)
	{
		tmp_b = second;

		while (tmp_b != NULL)
		{
			if (tmp == tmp_b)
				return ((binary_tree_t *)tmp);
			tmp_b = tmp_b->parent;
		}
		tmp = tmp->parent;
	}

	return (NULL);
}
