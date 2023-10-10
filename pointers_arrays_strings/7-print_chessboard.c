#include <stdio.h>
#include "main3.h"

/**
 * print_chessboard - prints a chessboard english style
 * @a: array for chessboard
 * Return: na
 */

void print_chessboard(char (*a)[8])
{
	if (row < 8)
	{
		printf("%c ", a[row][0]);
		print_row(a, row + 1);
		if (row == 7)
		{
			printf("\n");
		}
	}
}

void print_chessboard(char (*a)[8])
{
	if (a != NULL)
	{
		print_row(a, 0);
		print_chessboard(a + 1);
	}
}
