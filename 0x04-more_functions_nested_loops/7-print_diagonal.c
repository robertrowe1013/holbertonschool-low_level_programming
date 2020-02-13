#include "holberton.h"
/**
  * print_diagonal - print a diagonal line
  * @n: number
  */
void print_diagonal(int n)
{
	int r, s;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (s = 0; s < r; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
