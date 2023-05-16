#include "binary_trees.h"

binary_tree_t
*binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *_parent = node->parent;
	binary_tree_t *grandparent = _parent->parent;
	binary_tree_t *uncle = NULL;

	if (node == NULL || node->parent == NULL || grandparent == NULL)
		return (NULL);

	if (_parent == grandparent->left)
		uncle = grandparent->right;
	else
		uncle = grandparent->left;
	if (uncle)
		return (uncle);
	else
		return (NULL);
	
}
