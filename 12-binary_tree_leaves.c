#include "binary_trees.h"

/**
 * binary_tree_leaves - counting the leaves in a binary tree
 * @tree: pointer
 * Return: forest
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t forest = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		forest += 1;
	forest += binary_tree_leaves(tree->left);
	forest += binary_tree_leaves(tree->right);
	return (forest);
}
