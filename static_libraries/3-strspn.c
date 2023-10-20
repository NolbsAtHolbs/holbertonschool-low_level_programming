#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer to accepted characters string
 * Return: Length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
