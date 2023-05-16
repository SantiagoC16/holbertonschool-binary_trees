#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 * @tree: a pointer to the root node
 * Return: the number of nodes
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int left = 0, right = 0, result = 0;

    if (tree == NULL)
        return (0);

    left = binary_tree_balance(tree->right != NULL);
    right = binary_tree_balance(tree->left != NULL);
    
    if (result > 0)
        return (result +1);
    else 
        return (result -1);
}