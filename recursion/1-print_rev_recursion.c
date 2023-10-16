#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse w recursion
 * @s: The string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
