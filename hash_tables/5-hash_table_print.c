#include "hash_tables.h"
/**
* hash_table_print - prints a hash table
* @ht: hash table
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int count;
	int pair = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (count = 0; count < ht->size; count++)
	{
		current = ht->array[count];

		while (current != NULL)
		{
			next = current->next;

			if (pair)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			pair = 1;
			current = next;
		}
	}
	printf("}\n");
}
