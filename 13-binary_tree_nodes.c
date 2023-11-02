#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in binary tree
 * @tree: a pointer to the root node of the tree to count
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree)
	{
		node_count += (tree->left || tree->right) ? 1 : 0;
		node_count += binary_tree_nodes(tree->left);
		node_count += binary_tree_nodes(tree->right);
	}
	return (node_count);
}
