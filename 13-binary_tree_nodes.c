#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 * @tree: a pointer to the root node
 * Return: the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nnodesleft = 0, nnodesright = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		nnodesleft = binary_tree_nodes(tree->left);
		nnodesright = binary_tree_nodes(tree->right);
		return (nnodesleft + nnodesright + 1);
	}
	return (0);
}
