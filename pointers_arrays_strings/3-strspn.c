#include <stdio.h>
#include "main3.h"

/**
 * _strchr - gets the length of a prefix substring
 * @s: pointer
 * @c: character to be located within string
 * Return: Length of prefix substring
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
