#include "binary_trees.h"
/**
* binary_tree_levelorder - Goes through binary tree using level-order traversal.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*
* Description: Traverses tree level by level using a queue.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *att[256], *actual;
	int front = 0, rear = 0;

	if (tree == NULL || func == NULL)
		return;

	att[rear++] = tree;

	while (front < rear)
	{
		actual = att[front++];
		func(actual->n);

		if (actual->left != NULL)
			att[rear++] = actual->left;

		if (actual->right != NULL)
			att[rear++] = actual->right;
	}
}
