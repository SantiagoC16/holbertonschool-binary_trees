#include "binary_trees.h"

binary_tree_t
*binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *_parent = node->parent;
	binary_tree_t *grandparent = _parent->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (_parent == grandparent->left && grandparent->right)
		return (grandparent->right);
	else
		return (grandparent->left);
}
