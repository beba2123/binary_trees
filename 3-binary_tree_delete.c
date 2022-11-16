#include "binary_trees.h"

/**
 * binary_tree_delete- deletes tree
 * @tree: points to root node
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree);
{
    if (tree == NULL)
        return (NULL);

    tree->right = NULL;
    tree->left = NULL;
}