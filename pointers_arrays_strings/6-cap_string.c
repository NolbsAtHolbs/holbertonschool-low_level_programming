#include <stdio.h>
#include <ctype.h>
#include "main2.h"

/**
 * cap_string - capitalizes all words of a string
 * is_separator - Checks if a character is a separator.
 * @c: character checked
 *
 * Description: This function checks
 * @str - its a string
 * Return: capped words of string
 */

int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (separators[i] != '\0')
	{
		if (c == separators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char *cap_string(char *str)
{
	int capper = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			capper = 1;
		}
		else if (capper)
		{
			str[i] = toupper(str[i]);
			capper = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
		i++;
	}
	return (str);
}
