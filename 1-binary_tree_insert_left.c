#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - function that inserts a node
 * @parent: pointer
 * @value: vale
 * Return: _new
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *_new;

	if (parent == NULL)
		return (NULL);

	_new = binary_tree_node(parent, value);
	if (_new == NULL)
		return (NULL);

	_new->left = parent->left;
	parent->left = _new;
	return (_new);
}
