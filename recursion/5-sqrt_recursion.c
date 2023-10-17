#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion
 * @n: Square rootee
 * Return: Natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return find_sqrt_recursive(n, 1);
}
/**
 * find_sqrt_recursive - Recursive function to find the natural square root.
 * @n: The number for which to find the square root.
 * @x: The current approximation of the square root.
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int find_sqrt_recursive(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (find_sqrt_recursive(n, x + 1));
}
