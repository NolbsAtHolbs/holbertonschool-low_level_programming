#include "main.h"

/**
 * *_strcpy - copy strng pnted to by src + term null byte, to bufr pnt by dest
 * @dest: points to buffer where string is copied
 * @src: the string
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int bisc, i;

	bisc = 0;

	while (src[bisc] != '\0')
	{
		bisc++;
	}

	for (i = 0; i < bisc; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
