#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - calculate the size of the tree
 * @tree: is a pointer to the root of the tree
 * Return: 0 if tree is NULL or 1 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int flag_1 = 0, flag_2 = 0, flag = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
	}
	if (tree->left->left != NULL && tree->left->right != NULL)
	{
		flag_1 = binary_tree_is_perfect(tree->left);
	}
	if (tree->right->left != NULL && tree->right->right != NULL)
		flag_2 = binary_tree_is_perfect(tree->right);

	if ((tree->left->left == NULL && tree->left->right == NULL) && (
		tree->right->left == NULL && tree->right->right == NULL))
	{
		flag = 1;
	}
	if (flag_1 != flag_2)
		return (0);
	if (flag_1 == 1 && flag_2 == 1)
		flag = flag_1;
	return (flag);
}
