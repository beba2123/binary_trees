#include "binary_trees.h"

/**
 * binary_tree_inorder: traverses in preorder
 * @tree:is pointer to root node
 * @func:is pointer to function to call each node
 *
 * return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}