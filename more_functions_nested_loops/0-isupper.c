#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks case, positive = upper
 *
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
		return(0);
	else
		return(1);
}
