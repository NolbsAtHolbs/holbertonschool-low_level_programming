#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * Return: success!
 */
int main(void)
{
	int hexnumbers;
	char hexletters;

	for (hexnumbers = 0; hexnumbers < 10; hexnumbers++)
		putchar(hexnumbers + '0');

	for (hexletters = 'a'; hexletters < 'f'; hexletters++)
		putchar(hexletters);

	putchar('\n');

	return (0);
}
