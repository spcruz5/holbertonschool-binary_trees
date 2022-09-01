#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of tree based on node passed
 * @tree: pointer to node from where to get height
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_l = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		height_r = binary_tree_height(tree->right) + 1;

	if (height_l > height_r)
		return (height_l);

	return (height_r);
}
