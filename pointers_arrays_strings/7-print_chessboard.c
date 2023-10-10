#include <stdio.h>
#include "main3.h"

/**
 * print_chessboard - prints a chessboard english style
 * @a: array for chessboard
 * Return: na
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
