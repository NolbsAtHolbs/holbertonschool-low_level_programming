#include <stdio.h>
#include "main2.h"

/**
  * _strncpy - copies a string
  * @dest: pointer to the destination string
  * @src: pointer to the source string
  * @n: num of characters to copy from src to dest
  * Return: result
  */

char *_strncpy(char *dest, char *src, int n)
{

char *result = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (result);

}
