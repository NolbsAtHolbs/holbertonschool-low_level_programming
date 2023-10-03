#include "main.h"

/**
 * rev_string - reverses the string
 * @s: the string
 */
void rev_string(char *s)
{
	char edi;
	int i, alu, blu;

	alu = 0;
	blu = 0;

	while (s[alu] != '\0')
	{
		alu++;
	}

	blu = alu - 1;

	for (i = 0; i < alu / 2; i++)
	{
		edi = s[i];
		s[i] = s[blu];
		s[blu--] = edi;
	}
}
