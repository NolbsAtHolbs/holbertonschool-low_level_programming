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
	int low = 0;
	int high = size - 1;
	int mid;
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);

			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = (low + high) / 2;

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
