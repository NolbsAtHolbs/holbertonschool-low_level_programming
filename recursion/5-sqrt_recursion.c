#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion
 * @n: Square rootee
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1));
}
