#include "binary_trees.h"

/**
 * binarytreeheight - aux function
 * @tree: pointer to the root node
 * Return: height
 */

size_t binarytreeheight(const binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (0);

	leftheight = binarytreeheight(tree->left);
	rightheight = binarytreeheight(tree->right);

	if (leftheight >= rightheight)
		return (leftheight + 1);
	else
		return (rightheight + 1);
}

/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root node
 * Return: the number of nodes
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (0);

	leftheight = binarytreeheight(tree->left);
	rightheight = binarytreeheight(tree->right);

	return (leftheight - rightheight);
}
