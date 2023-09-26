#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet_x10 - prints alphabet 10 times lowercase
 */
void print_alphabet_x10(void)
{
	int prints = 0;
	char letters;

	while (prints++ <= 9)
	
		for (letters = 'a'; letters <= 'z'; letters++)
			
			_putchar(letters);
		_putchar('\n');
}	
