#include <stdio.h>
/**
 * main - prints numbs 1 - 100 x3s print fizz, x5s print buzz, both = fizzbuzz
 * Return: 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else
			if (n % 3 == 0)
				printf("Fizz ");

		else
			if (n % 5 == 0)
				if (n == 100)
					printf("Buzz");
					printf("\n");
				else
					printf("Buzz ");

		else
			printf("%d ", n);
	n++;
	}
return (0);
}
