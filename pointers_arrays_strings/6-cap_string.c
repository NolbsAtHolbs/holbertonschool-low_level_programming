#include <stdio.h>
#include "main2.h"

/**
 * cap_string - capitalizes all words of a string
 * @entry - its a string
 * Return: capped words of string
 */

char *cap_string(char *entry)
{
	int capper, index, count;

	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};

	capper = 32;

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'index' && entry[index] <= 'z')
		{
			entry[index] =  entry[index] - capper;
		}
		capper = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{
				capper = 32;
				break;
			}
		}
	}
	return (entry);
}
