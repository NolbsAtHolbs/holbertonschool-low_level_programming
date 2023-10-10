#include <stdio.h>
#include "main3.h"

/**
 * _memset - fills memory with a constant byte
 * Return: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
