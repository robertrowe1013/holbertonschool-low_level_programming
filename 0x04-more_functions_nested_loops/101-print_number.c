#include "holberton.h"
#include <math.h>
/**
  * print_number - print number
  */
void print_number(int n)
{
	int d;
	int l = n;

	while ((l / 10) != 0)
	{
		d++;
		l = l / 10;
	}
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	for (d = d + 1; d > 0; d--)
	{
		_putchar((n / (pow(10, (d - 1)))) + '0');
	}
	_putchar('\n');
}
