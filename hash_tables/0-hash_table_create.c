#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of array
* Return: pointer to newly created hash table, or NULL if something goes wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table *new_table = malloc(sizeof(hash_table));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->table = malloc(sizeof(hash_node *) * size);
	if (new_table->table == NULL)
	{
		free(new_table);
		return NULL;
	}
	for (unsigned long int i = 0; i < size; i++)
		new_table->table[i] = NULL;

	return new_table;
}
