#include <stdio.h>
#include "main3.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the square matrix (1D array).
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int primary_diag_sum = 0;
	int secondary_diag_sum = 0;
	int i = 0;
	
	while (i < size)
	{
		primary_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("Sum of the primary diagonal: %d\n", primary_diag_sum);
	printf("Sum of the secondary diagonal: %d\n", secondary_diag_sum);
}
