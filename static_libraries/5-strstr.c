#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a substring in string
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
