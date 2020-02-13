#include "holberton.h"
/**
  * print_line - print line
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
