#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node on right side of another node
 * @parent: the pointer to the node
 * @value:
 * value to store the new node
 *
 * Return: pointer to the created node otherwise NULL on failure
 * 	and Null on parent failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
