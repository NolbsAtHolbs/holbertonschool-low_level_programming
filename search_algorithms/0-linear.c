#include "search_algos.h"
/**
* linear_search - searches for a value in a sorted array of integers using the
* linear search algorithm
*
* @array: sorted array of integers
* @size: size of array
* @value: value being searched for
* Return: 1 on success, -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%llu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
