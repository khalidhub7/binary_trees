#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: pointer to root node of the tree to count number of nodes
 * Return: If tree is NULL, the function must return 0,
 * else return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodess = 0;

	if (tree)
	{
		nodess += (tree->left || tree->right) ? 1 : 0;
		nodess += binary_tree_nodes(tree->left);
		nodess += binary_tree_nodes(tree->right);
	}
	return (nodess);
}
