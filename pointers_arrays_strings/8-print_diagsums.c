#include <stdio.h>
#include "main3.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the square matrix (1D array).
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
  int sum1 = 0;
  int sum2 = 0;
  
  for (int i = 0; i < size; i++)
  {
    sum1 += a[i * size + i];
    sum2 += a[i * size + (size - 1 - i)];
  }
  printf("Sum of the primary diagonal: %d\n", sum1);
  printf("Sum of the secondary diagonal: %d\n", sum2);
}
