#include "holberton.h"
/**
  * print_square - print square
  * @size: size
  */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (col = size; col > 0; col--)
		{
			for (row = size; row > 0; row--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
