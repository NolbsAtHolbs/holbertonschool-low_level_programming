#include <stdio.h>
/**
 * main - prints all single digits of base 10 from 0, no char
 * Return: success!
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
		putchar((digits % 10) + '0');

	putchar('\n');

	return (0);
}
