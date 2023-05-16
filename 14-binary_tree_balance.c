#include "binary_trees.h"

/**
 * binarytreeheight - aux function
 * @tree: a pointer to the root node
 * Return: height
 */

size_t binarytreeheight(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (tree == NULL)
        return (0);

    left = binary_tree_balance(tree->left);
    right = binary_tree_balance(tree->right);

    if (right <= left)
        return (left + 1);
    else
        return (right + 1);
}

/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 * @tree: a pointer to the root node
 * Return: the number of nodes
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (binarytreeheight(tree->left) - binarytreeheight(tree->right));
}
