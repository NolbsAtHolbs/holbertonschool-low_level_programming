#include <stdio.h>
/**
 * main - Prints number of arguments passed into the program
 * @argc: Number of arguments
 * @argv: An array of strings containing the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
