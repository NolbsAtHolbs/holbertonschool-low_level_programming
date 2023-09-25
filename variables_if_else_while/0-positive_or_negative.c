#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints positive, negative, or zero
 *
 * return: always 0 (success)
 */
int main(void)
{
	int z;
	srand(time(0));

	z = rand() - RAND_MAX / 2;
	if (z > 0)
	{
		printf("%d is positive\n", z);
	}
	else if (z < 0)
	{
		printf("%d is negative\n", z);
	}
	else
	{
		printf("%d is zero\n", z);
	}
	return (0);
}
