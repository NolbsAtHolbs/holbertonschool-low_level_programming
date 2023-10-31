#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - searches for an integer in an array
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function for comparing values
 * Return: index of the first element for which cmp does not return 0
 * If no element matches, return -1
 * If size is less than or equal to 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
