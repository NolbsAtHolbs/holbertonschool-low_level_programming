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
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (capitalize_next)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= ('a' - 'A');
				}
				capitalize_next = 0;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] += ('a' - 'A');
				}
			}
		}
		else
		{
			capitalize_next = 1;
		}
	}
	return (str);
}
