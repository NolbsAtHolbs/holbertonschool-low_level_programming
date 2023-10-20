#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: pointer
 * @c: character
 * Return: pointer to first occurrence of c, or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
