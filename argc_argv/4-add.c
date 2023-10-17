#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: The string to be checked
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(const char *str)
{
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Adds positive numbers and prints the result
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	int i = 1
	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
