#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_node = 0, rigt_node = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_node = binary_tree_height(tree->left) + 1;
	rigt_node = binary_tree_height(tree->right) + 1;
	if (left_node > rigt_node)
		return (left_node);
	return (rigt_node);
}
