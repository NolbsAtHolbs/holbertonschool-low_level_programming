#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int temp = 0;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * new_table->size);

	if (new_table->array == NULL)
		return (NULL);

	while (temp < new_table->size)
	{
		temp++;
		new_table->array[temp] = NULL;
	}
	return (new_table);
}
