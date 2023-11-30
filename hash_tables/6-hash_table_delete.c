#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht: hash table to delete
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

    long unsigned int i = 0;
    hash_node_t *use = NULL;

    while (i < ht->size)
    {
        if (ht->array[i] != NULL)
        {
            use = ht->array[i];
            while (ht->array[i] != NULL)
            {
                use = use->next;
                free(ht->array[i]->key);
                free(ht->array[i]->value);
                free(ht->array[i]);
                ht->array[i] = use;
            }
        }
        i++;
    }

    free(ht->array);
    free(ht);
}
