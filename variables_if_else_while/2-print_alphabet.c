#include <stdio.h>
/**
 * main - print every letter of de alphabet lowercase. Surprised it increments.
 * Return: success
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
