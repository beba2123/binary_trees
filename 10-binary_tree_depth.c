#include "binary_trees.h"

/**
 * binary_tree_depth: depth of a binary tree
 * @tree:is pointer to root node
 *
 * return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    if (tree->parent != NULL)
        depth += 1 + binary_tree_depth(tree->parent);
    return (depth);
}