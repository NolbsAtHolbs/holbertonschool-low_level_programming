#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting with 0, then \n
 * Return: success!
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
		printf("%d", digits);

	printf("\n");

	return (0);
}
