#include "binary_trees.h"

binary_tree_t
*binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NEWNODE = NULL;

	if (parent == NULL)
		return (NULL);

	NEWNODE = malloc(sizeof(binary_tree_t));
	if (NEWNODE == NULL)
		return (NULL);

	NEWNODE->n = value;
	NEWNODE->parent = parent;
	NEWNODE->left = NULL;

	if (parent->right != NULL)
	{
		NEWNODE->right = parent->right;
		parent->right->parent = NEWNODE;
	}
	else
		NEWNODE->right = NULL;

	parent->right = NEWNODE;

	return (NEWNODE);
}
