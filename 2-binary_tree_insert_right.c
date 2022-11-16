#include "binary_trees.h"

/**
 * binary_tree_insert_right- returns pointer to a new node or null
 * @parent: binary_tree_t
 * @value: integer
 *
 * Return: pointer of new node on sucess
 *         Otherwise - null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == NULL)
        return (NULL);

    new = binary_tree_node(parent, value);
    if (new == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new->right = parent->right;
        parent->right->parent = new;
        new->parent = parent;
    }
    parent->right = new;

    return (new);
}