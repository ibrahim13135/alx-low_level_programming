#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_node_t *hst;
    unsigned long int s;

    hst = malloc(sizeof(hash_node_t));
    if (!hst)
        return (NULL);

    hst->size = size;
    hst->array = malloc(sizeof(hash_node_t) * size);
    if (!hst->array)
    {
        free(hst);
        return (NULL);
    }
    for(s = 0; s < size; s++)
        hst->array[s] = NULL;

    return(hst);        
}   
