#include "main.h"
/**
 *  prints alphabet in lowercase nested style
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
}
