#include "binary_trees.h"

/**
 * binary_tree_postorder: traverses in preorder
 * @tree:is pointer to root node
 * @func:is pointer to function to call each node
 *
 * return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}