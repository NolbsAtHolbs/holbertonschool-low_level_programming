#include <stdio.h>
#include "main3.h"

/**
 * print_chessboard - prints a chessboard english style
 * @a: array for chessboard
 * Return: na
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
