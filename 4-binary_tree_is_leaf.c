#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is a leaf
 * @node: pointer of the node which will be checked
 * Return: 1 if the node is leaf 0 if not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);
	else
		return (1);
}

