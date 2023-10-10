#include <stdio.h>
#include "main2.h"

/**
 * _strncat - concats strings from one string to another
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: max num of characters to append from src to dest
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
char *result = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (result);
}
