#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers using the
* binary search algorithm
*
* @array: sorted array of integers
* @size: size of array
* @value: value being searched for
* Return: 1 on success, -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = (low + high) / 2;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		if (array[mid] > value)
		{
			high = mid - 1;
		}
	}
	return (-1);
}
