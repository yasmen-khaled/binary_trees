#include "binary_trees.h"

/**
 * binary_tree_insert_right -  function that inserts a node
 * @parent: pointer
 * @value: value
 * Return: _new
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *_new;
	if (!parent)
	{
		return (NULL);
	}
	_new = binary_tree_node(parent, value);
	if (!_new)
	{
		return (NULL);
	}
	if (parent->right)
	{
		_new->right = parent->right;
		parent->right->parent = _new;
	}
	parent->right = _new;
	return (_new);
}
