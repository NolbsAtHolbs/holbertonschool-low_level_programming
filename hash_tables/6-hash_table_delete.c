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

	for (int i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];
		hash_node_t *next;

		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
}
