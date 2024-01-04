#include "binary_trees.h"

/**
 * binary_tree_postorder -  binary tree using post-order traversal
 * @tree: pointer
 * @func: pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
