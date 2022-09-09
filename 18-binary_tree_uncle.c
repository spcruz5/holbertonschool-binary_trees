#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds a node's sibling
 * @node: Pointer to tree's node
 *
 * Return: Pointer to node's sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;
    /* if no node or no parent, return NULL */
	if (!node || !node->parent)
		return (NULL);
    /* otherwise, if this is the left child, return the right, or vice versa */
	parent = node->parent;
	if (node == parent->left)
		return (parent->right);

	return (parent->left);
}
/**
 * binary_tree_uncle - binary tree
 * @node: node
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))/* check node */
		return (NULL);/* an uncle is just a parent's sibling */
	return (binary_tree_sibling(node->parent));
}
