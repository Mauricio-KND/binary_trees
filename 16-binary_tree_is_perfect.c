#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
  * binary_tree_is_perfect - Checks if a binary tree is perfect.
  *
  * @tree: Pointer to the root node of the tree to check.
  *
  * Return: 0 if tree is NULL.
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && tree->right)
	{
		left_node = binary_tree_is_perfect(tree->left);
		right_node = binary_tree_is_perfect(tree->right);
		return (left_node && right_node);
	}
	return (0);
}
