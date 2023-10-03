#include "main.h"
/**
 * print_triangle - prints triangle, then new line
 * @size: test int
 * Return: Always 0
 */
void print_triangle(int size)
{
	int x, y = 0;
	int woid;

	if (size > 0)
	{
		while (y < size)
		{
			woid = size - y - 1;

			while (x < size)
			{
				if (woid > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}

				x++;
			}

			y++;
			x = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
