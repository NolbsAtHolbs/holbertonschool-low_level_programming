#include <stdio.h>
/**
  * main - prints name of file it was compiled from, then new line
  * Return: zero
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
