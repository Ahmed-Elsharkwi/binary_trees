#include "binary_trees.h"
/**
 * binary_tree_height - print the tree in in-oreder traversal
 * @tree: is a pointer to the root of the tree
 * Return: 0 if tree is NULL or 1 if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int flag = 0;
	size_t count = 0;
	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		count = 1 + binary_tree_height(tree->left);
		flag = 1;
	}
	if (tree->right && flag == 0)
		count = 1 + binary_tree_height(tree->right);
	return (count);
}
