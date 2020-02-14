#include "holberton.h"
/**
  * print_number - print number
  * @n: number
  */
void print_number(int n)
{
	int d = 0;
	int l = n;

	while ((l / 10) != 0)
	{
		d++;
		l = l / 10;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (d > 0)
	{
		_putchar((n / 10) + '0');
		d--;
	}
	_putchar('\n');
}
