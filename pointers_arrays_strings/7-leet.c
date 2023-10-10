#include <stdio.h>
#include "main2.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: address of str
 */

char *leet(char *str)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; *(str + x); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (a[y] == str[x])
				str[x] = b[y];
		}
	}
	return (str);
}
