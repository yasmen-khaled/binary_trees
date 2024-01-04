#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer
 * Return: build
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t build = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		build += 1;
	build += binary_tree_nodes(tree->left);
	build += binary_tree_nodes(tree->right);
	return (build);
}
