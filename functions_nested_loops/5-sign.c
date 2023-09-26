#include "main.h"

/**
 * print_sign - prints sign of number
 * @c: number that gets sign printed
 * Return: 1 if number gr8r thn zero, 0 if zero, -1 if number is less thn zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
