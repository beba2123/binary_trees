#include "binary_trees.h"
/**
 * int binary_tree_is_leaf - checks if node is leaf
 * 
 * @node: node to be checked
 *
 * Return: returns 1 if node is leaf
 *         otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if( node != NULL)
if( node->parent == NULL )
return (1);

return (0);
}