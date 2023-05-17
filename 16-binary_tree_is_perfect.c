#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if isn't perfect, 1 if it is
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (binarytreeheight(tree->left) == binarytreeheight(tree->right))
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else
			return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}

/**
 * binarytreeheight - aux function
 * @tree: a pointer to the root node
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
