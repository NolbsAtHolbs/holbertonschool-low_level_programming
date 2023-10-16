#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y using recursion
 * @x: Base
 * @y: Exponent
 * Return: Result of x^y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
