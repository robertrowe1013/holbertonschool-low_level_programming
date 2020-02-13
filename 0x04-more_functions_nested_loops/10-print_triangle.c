#include "holberton.h"
/**
  * print_triangle - print a triangle
  * @size: size
  */
void print_triangle(int size)
{
	int r, s, h;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (s = 1; s < (size - r); s++)
			{
				_putchar(' ');
			}
			for (h = 0; h <= r; h++)
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
