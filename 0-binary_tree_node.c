#include "binary_trees.h"
/**
 * binary_tree_node - make a node for the tree
 * @parent: is the parent of the node
 * @value: is an int
 * Return: address of the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	return (node);
}
