#include "main.h"

/**
 * swap_int - swaps int values
 * @a: first pointer
 * @b: second pointer
 * Return: self
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
