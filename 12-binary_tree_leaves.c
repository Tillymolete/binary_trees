#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree that counts
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t leaf = 0;

	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);
	leaf += (!tree->left && !tree->right) ? 1 : 0;

	return (leaf);
}
