#include <stdio.h>
#include "main3.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to string containing characters to search for
 * Return: set of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
