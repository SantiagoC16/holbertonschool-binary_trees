#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a
 * Return: 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    int left = 0, right = 0;

    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
    {
        return (0);
    }
    
    if (tree->left != NULL && tree->right != NULL)
    {
        left = binary_tree_is_full(tree->left);
        right = binary_tree_is_full(tree->right);
        return (left - right);
    }

    return (0);
}