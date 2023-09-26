include <stdio.h>
/**
 * main - prints all possible combinations of single digits
 * Return: success
 */
int main(void)
{
	int ultracombo;

	for (ultracombo = 0; ultracombo <= 9; ultracombo++)
	{
		putchar(ultracombo + '0');
		if (ultracombo == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
