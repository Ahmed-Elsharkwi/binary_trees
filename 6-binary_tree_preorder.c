#include "binary_trees.h"
/**
 * binary_tree_preorder - print the tree in pre-oreder traversal
 * @tree: is a pointer to the root of the tree
 * @func: is a pointer function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
