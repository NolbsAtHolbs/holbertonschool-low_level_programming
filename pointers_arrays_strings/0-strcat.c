#include <stdio.h>
#include <string.h>
#include "main2.h"

/**
 * _strcat - concatenates strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: result point dest
 */

char *_strcat(char *dest, char *src)
{
char *result = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (result);
}
