#include "holberton.h"
/**
 * print_comma_space - print comma and spaces
 * @n: spaces
 */
void print_comma_space(int n)
{
	int s;

	_putchar(',');
	for (s = 0; s <= n; s++)
	{
		_putchar(' ');
	}
}
/**
  * print_times_table - times table
  * @n: number
  */
void print_times_table(int n)
{
	int i, j, num;

	if (n < 0 || n > 15)
	{
		;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			if (n == 0)
				_putchar('\n');
			for (j = 1; j <= n; j++)
			{
				num = (i * j);
				if (num > 99)
				{
					print_comma_space(0);
					_putchar((num / 100) + '0');
					_putchar(((num / 10) % 10) + '0');
					_putchar((num % 10) + '0');
				}
				else if (num > 9)
				{
					print_comma_space(1);
					_putchar ((num / 10) + '0');
					_putchar ((num % 10) + '0');
				}
				else
				{
					print_comma_space(2);
					_putchar(num + '0');
				}
				if (j == n)
					_putchar('\n');
			}
		}
	}
}
