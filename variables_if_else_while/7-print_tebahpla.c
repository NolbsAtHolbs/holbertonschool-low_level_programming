#include <stdio.h>
/**
 * main - prints the alphabet backwards lowercase
 * Return: success!
 */
int main(void)
{
	char tebahpla;

	for (tebahpla = 'z'; tebahpla >= 'a'; tebahpla--)
		putchar(tebahpla);

	putchar('\n');

	return (0);
}
