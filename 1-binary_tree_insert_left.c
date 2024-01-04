#include"binary_trees.h"

/**
 * binary_tree_insert_left - insert a left child node
 * @parent: is the parent of the node
 * @value: is an int
 * Return: the new left child node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	if (parent == NULL)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (child == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = child;
	}
	else
	{
		child->left = parent->left;
		parent->left = child;
		child->left->parent = child;
	}
	return (child);
}
