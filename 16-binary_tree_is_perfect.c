#include "binary.h"

/**
 * binary_tree_is_perfect - binary_tree_is_perfect
 * @tree: a pointer to the root node  of tree
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree ==  NULL)
	{
		return (0);
	}

	int left_height = 0, right_height = 0;
	const binary_tree_t *temp = tree;

	while (temp)
	{
		left_height++;
		temp =  temp->left;
	}

	temp = tree;

	while (temp)
	{
		right_height++;
		temp = temp->right;
	}

	if (left_height == right_height)
	{
		return (1);
	}
	return (0);
}
