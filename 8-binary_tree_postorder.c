#include "binary_trees.h"
/**
 * binary_tree_postorder - print the tree in in-oreder traversal
 * @tree: is a pointer to the root of the tree
 * @func: is a pointer function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
