#include "binary_trees.h"

/**
 * binary_tree_height: gives the height of the tree
 * @tree:is pointer to root node
 *
 * return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_size = 0;
    size_t right_size = 0;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
        left_size += 1 + binary_tree_height(tree->left);
    if (tree->right != NULL)
        right_size += 1 + binary_tree_height(tree->right);

    if (left_size > right_size)
        return (left_size);
    else
        return (right_size);
}