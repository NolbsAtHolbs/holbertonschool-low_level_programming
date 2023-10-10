#include <stdio.h>
#include "main3.h"

/**
 * print_chessboard - prints a chessboard english style
 * @a: array for chessboard
 * Return: na
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	void print_row()
	{
		if (row >= 8)
		{
			return;
		}
		printf("%c ", a[row][0]);
		row++;
		print_row();
	}
	print_row();
	if (row == 8)
	{
		printf("\n");
	}
}
