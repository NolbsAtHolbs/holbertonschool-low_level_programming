#include "main.h"

/**
 * print_rev - prints reversed string and a new line
 * @s: the string
 * Return: reversed string
 */
void print_rev(char *s)
{
	int i, j, alucard;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	alucard = i;

	for (j = alucard - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
