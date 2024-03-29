#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling
 * @node:  pointer to the node to find the sibling
 * Return: pointer to the node of the sbling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
