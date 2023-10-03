#include "main.h"

/**
 * puts_half - prints half string
 * @str: the string
 */
void puts_half(char *str)
{
	int yarn, n, i;

	yarn = 0;

	while (str[yarn] != '\0')
	{
		yarn++;
	}

	if (yarn % 2 == 0)
	{
		for (i = yarn / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (yarn % 2)
	{
		for (n = (yarn - 1) / 2; n < yarn - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
