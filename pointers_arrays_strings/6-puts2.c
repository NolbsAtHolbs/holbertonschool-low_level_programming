#include "main.h"

/**
 * puts2 - prints every other char
 * @str: string for char prints
 */
void puts2(char *str)
{
	int yarn, i;

	yarn = 0;

	while (str[yarn] != '\0')
	{
		yarn++;
	}

	for (i = 0; i < yarn; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
