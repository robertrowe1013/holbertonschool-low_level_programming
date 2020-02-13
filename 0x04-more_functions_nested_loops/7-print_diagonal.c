#include "holberton.h"
/**
  * print_diagonal - print a diagonal line
  * @n: number
  */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
		while (n > 0)
		{
			_putchar('\n');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
