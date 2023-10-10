#include <stdio.h>
#include "main2.h"

/**
 * cap_string - capitalizes all words of a string
 * @str - its a string
 * Return: capped words of string
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);

			capitalize_next = 0;
		}
		else if (!capitalize_next && isalpha(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
