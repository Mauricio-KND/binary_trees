#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
  * binary_tree_balance - Measures the balance factor of a binary tree.
  *
  * @tree: Pointer to root node of the tree to measure the balance factor.
  *
  * Return: 0 if tree is NULL.
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (!tree)
		return (0);
	left_node = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_node = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (left_node - right_node);
}
