#include <stdio.h>
#include <string.h>
#include "main2.h"
/**
  * test - burger
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

    return result;
}
