#include "binary_trees.h"
/**
 * binary_tree_height - print the tree in in-oreder traversal
 * @tree: is a pointer to the root of the tree
 * Return: 0 if tree is NULL or 1 if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_1 = 0, count_2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		count_1 = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
		count_2 = 1 + binary_tree_height(tree->right);
	if (count_1 >= count_2)
		return (count_1);
	else
		return (count_2);
}
