#include "binary_trees.h"
/**
 * binary_tree_is_full - calculate the size of the tree
 * @tree: is a pointer to the root of the tree
 * Return: 0 if tree is NULL or 1 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 0, flag_1 = 0, flag_2  = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right == NULL) || (
				tree->left != NULL && tree->right != NULL))
		flag = 1;

	if (tree->left && flag == 1)
	{
		flag_1 = binary_tree_is_full(tree->left);
	}
	if (tree->right && flag == 1)
		flag_2 = binary_tree_is_full(tree->right);

	if (flag_1 != flag_2)
		return (0);
	return (flag);
}
