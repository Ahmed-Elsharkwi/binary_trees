#include "binary_trees.h"
/**
 * binary_tree_size - calculate the size of the tree
 * @tree: is a pointer to the root of the tree
 * Return: 0 if tree is NULL or 1 if not
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_1 = 0, count_2 = 0, size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		count_1 = binary_tree_size(tree->left);
	}
	if (tree->right)
		count_2 = binary_tree_size(tree->right);
	size = count_1 + count_2 + 1;
	return (size);
}
