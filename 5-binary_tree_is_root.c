#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if the node is root or not
 * @node: pointer
 * Return:1
  */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
