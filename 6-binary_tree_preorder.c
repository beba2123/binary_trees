#include "binary_trees.h"

/**
 * binary_tree_preorder: traverses in preorder
 * @tree:is pointer to root node
 * @func:is pointer to function to call each node
 *
 * return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}