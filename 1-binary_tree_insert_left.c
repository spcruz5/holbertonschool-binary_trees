#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as the left-child of another node
 * @parent: ptr to the parent of the node
 * @value: value to put in new node
 *
 * Return: ptr to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL || value > parent->n)
	{
		return (NULL);
	}

	if (parent->left != NULL && value < parent->left->n)
	{
		return (binary_tree_insert_left(parent->left, value));
	}
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;

	if (parent->left != NULL)
	{
		temp->left = parent->left;
		temp->left->parent = temp;
		parent->left = temp;
		return (temp);
	}
	else
	{
		parent->left = temp;
		return (temp);
	}
}
