#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table to look into
* @key: key you are looking for
* Return: value associated with element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];

	if (index >= ht->size)
		return (NULL);

	while (current && strcmp(current->key, key) != '\0')
		current = current->next;

	if (current == NULL)
		return (NULL);

	return (current->value);
}