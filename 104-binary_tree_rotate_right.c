#include "binary_trees.h"
/**
* binary_tree_rotate_right - Performs a right-rotation on a binary tree.
* @tree: Pointer to the root node of the tree to rotate.
*
* Return: Pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	new = tree->left;
	tmp = new->right;

	new->right = tree;
	tree->left = tmp;

	new->parent = tree->parent;
	tree->parent = new;

	if (tmp != NULL)
		tmp->parent = new;

	return (new);
}
