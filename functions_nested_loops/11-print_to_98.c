#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all nmbrs from input to 98 in order, comma'd, and spaced
 * @n: the number to count from
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
