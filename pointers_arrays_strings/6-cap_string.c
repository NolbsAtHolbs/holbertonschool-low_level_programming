#include <stdio.h>
#include "main2.h"

/**
 * cap_string - capitalizes all words of a string
 * @entry - its a string
 * Return: capped words of string
 */

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
