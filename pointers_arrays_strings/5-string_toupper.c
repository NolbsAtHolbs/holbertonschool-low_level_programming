#include <stdio.h>
#include "main2.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @str: the string
  * Return: altered string
  */

char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (result);
}
