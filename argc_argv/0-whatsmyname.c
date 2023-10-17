#include <stdio.h>
/**
  * main - program that prints its name, then new line. Self renaming.
  * @argc: count of arguments
  * @argv: array of argument strings
  * Return: argument if arg count is above 0.
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, "Unable to retrieve program name.\n");
		return (1);
	}
}
