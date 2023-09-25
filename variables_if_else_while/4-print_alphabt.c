#include <stdio.h>
/**
 * main - print every letter of de alphabet lowercase, except q and e
 * Return: success
 */
int main(void)
{
	char alphabet, e, q;

	e = 'e';

	q = 'q';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	if (alphabet != e && alphabet != q)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
