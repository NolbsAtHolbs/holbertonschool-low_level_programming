#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion
 * @n: Square rootee
 * Return: Natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int x = 0;
	int square = 0;
	while (square <= n)
	{
		if (square == n)
		{
			return (x);
		}
		x++;
		square = x * x;
	}
	return (-1);
}
