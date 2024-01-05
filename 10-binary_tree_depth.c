#include "binary_trees.h"
/**
 * binary_tree_depth - calculate the depth of the node
 * @tree: is a pointer to the node
 * Return: the number of the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *p = (binary_tree_t *)tree;
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	while (p->parent != NULL)
	{
		depth++;
		p = p->parent;
	}
	return (depth);
}
