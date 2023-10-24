#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
