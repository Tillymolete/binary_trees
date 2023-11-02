#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: measures the balance factor of a binary tree
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(left) - binary_tree_height(right));

	return (0);
}

/**
 * binary_tree_height - measures height of the binary tree
 * @tree: pointer to the root of node to meaure height
 * Return: if tree is NULL return  0 otheriwse the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = 0, right_height = 0;

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left_height > right_height) ? left_height : right_height);
}
