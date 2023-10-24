#include <stdio.h>

/**
 * main - function-like macro ABS(x)
 * @x: the number for which the absolute value is calculated
 * Return: absolute value of x
 */

int ABS(int x)
{
	return ((x < 0) ? -x : x);
}

int main(void)
{
	int num = -5;
	int result = ABS(num);
	printf("The absolute value of %d is %d\n", num, result);
	return (0);
}
