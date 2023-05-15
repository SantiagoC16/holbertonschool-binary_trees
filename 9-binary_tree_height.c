#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
	size_t left_counter = 0, right_counter = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_counter = binary_tree_height(tree->left);
	left_counter++;
	right_counter = binary_tree_height(tree->right);
	right_counter++;

	if (left_counter > right_counter)
		return (left_counter);
	else
		return (right_counter);
}

