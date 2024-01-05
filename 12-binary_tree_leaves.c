#include "binary_trees.h"
/**
 * binary_tree_leaves - calculate the number of the leaves
 * @tree: is a pointer to the root of the tree
 * Return: 0 if tree is NULL or number of leaves if not
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_1 = 0, count_2 = 0, count = 0;

	if (tree == NULL)

		return (0);

	if (tree->left)
	{
		count_1 = binary_tree_leaves(tree->left);
	}
	if (tree->right)

		count_2 = binary_tree_leaves(tree->right);

	if (tree->right == NULL && tree->left == NULL)

		count++;
	else
		count = count_1 + count_2;

	return (count);
}
