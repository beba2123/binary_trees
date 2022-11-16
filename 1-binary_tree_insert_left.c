#include "binary_trees.h"

/**
 * binary_tree_insert_left- returns pointer to a new node or null
 * @parent: binary_tree_t
 * @value: integer
 *
 * Return: pointer of new node on sucess
 *         Otherwise - null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *new;

        if (parent == NULL)
                return (NULL);

        new = binary_tree_node(parent, value);
        if (new == NULL)
                return (NULL);

        if (parent->left != NULL)
        {
                new->left = parent->left;
                parent->left->parent = new;
                new->parent = parent;
        }
        parent->left = new;

        return (new);
}