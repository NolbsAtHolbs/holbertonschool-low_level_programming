#include <stdio.h>
#include <ctype.h>
#include "main2.h"

/**
 * cap_string - capitalizes all words of a string
 * @entry - its a string
 * Return: capped words of string
 */

int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
    for (int i = 0; separators[i] != '\0'; i++)
		{
			if (c == separators[i])
			{
				return (1);
			}
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
