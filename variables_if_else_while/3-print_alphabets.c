#include <stdio.h>
/**
 * main - print both cases of alphabets
 * Return: success
 */
int main(void)
{
	char alphabet, ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);


	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
		putchar(ALPHABET);

	putchar('\n');

	return (0);
}
