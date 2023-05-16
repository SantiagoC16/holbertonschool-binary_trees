#include "binary_trees.h"

binary_tree_t
*binary_tree_uncle(binary_tree_t *node)
{


	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *_parent = node->parent;
	binary_tree_t *grandparent = _parent->parent;

	if (node == _parent->left)
		return (grandparent->left);
	else
		return (grandparent->right);
}
