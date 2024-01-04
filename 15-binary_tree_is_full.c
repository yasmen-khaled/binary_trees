#include "binary_trees.h"

/**
 * binary_tree_is_full -  binary tree is full.
 * @tree:pointer
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
  
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
