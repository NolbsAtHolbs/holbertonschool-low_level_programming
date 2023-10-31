#include <stdio.h>

/**
 * print_name - calls a function to print a name
 * @name: name to be printed
 * @f: function used to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
