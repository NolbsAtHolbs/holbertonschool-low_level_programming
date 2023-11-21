#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: unique identifier associated with each data element
 * @size: size of the array of the hash table
 * Return: index the key/value pair is stored at in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}