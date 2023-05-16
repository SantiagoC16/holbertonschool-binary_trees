#include "binary_trees.h"

size_t
binary_tree_size(const binary_tree_t *tree)
{
	size_t left_counter = 0, right_counter = 0;

	if (tree == NULL)
		return (0);

	left_counter = binary_tree_size(tree->left);
	right_counter = binary_tree_size(tree->right);

	return (left_counter + right_counter + 1);

}

