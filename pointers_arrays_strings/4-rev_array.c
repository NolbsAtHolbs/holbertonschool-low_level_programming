#include <stdio.h>
#include "main2.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array of integers
	* @n: number of elements of the array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int beginning = 0;
	int end = n - 1;
	
	while (beginning < end)
	{
		int temp = a[beginning];
		
		a[beginning] = a[end];
		a[end] = temp;
		beginning++;
		end--;
	}
}
