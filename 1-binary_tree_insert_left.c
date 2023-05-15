#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert left node
 * @parent: parent node
 * @value: value
 * Return: newnode
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;

	}
	else
		newnode->left = NULL;

	parent->left = newnode;

	return (newnode);


}


