#include "binary_trees.h"
/**
 * binary_tree_inorder - print the tree in in-oreder traversal
 * @tree: is a pointer to the root of the tree
 * @func: is a pointer function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
