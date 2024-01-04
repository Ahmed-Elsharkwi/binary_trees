#include"binary_trees.h"

/**
 * binary_tree_insert_right - insert a right child node
 * @parent: is the parent of the node
 * @value: is an int
 * Return: the new left child node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	if (parent == NULL)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (child == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = child;
	}
	else
	{
		child->right = parent->right;
		parent->right = child;
		child->right->parent = child;
	}
	return (child);
}
