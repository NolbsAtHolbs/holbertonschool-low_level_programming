#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of a random number stored in variable n
 *
 * Return: Success
 */
int main(void)
{
	int n, elldee;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	elldee = n % 10;

	if (elldee > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, elldee);
	}
	else if (elldee < 6 && elldee != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", elldee);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, elldee);
	}

	return (0);
}
