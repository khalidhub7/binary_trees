#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts leaves in a binary tree
 * @tree: pointer to root node of the tree to count the leaves of
 * Return: The number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavess = 0;

	if (tree)
	{
		leavess += (!tree->left && !tree->right) ? 1 : 0;
		leavess += binary_tree_leaves(tree->left);
		leavess += binary_tree_leaves(tree->right);
	}
	return (leavess);
}
