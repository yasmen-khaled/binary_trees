#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_t - function that creates a binary tree node
 * parent: node
 * value: new node
 * Return:_new
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	 binary_tree_t *_new;

	 _new = malloc(sizeof(binary_tree_t));

	if (_new == NULL)
		return (NULL);

	  _new->n = value;
	  _new->parent = parent;
	  _new->left = NULL;
	  _new->right = NULL;

	return (_new);
}
