#include "holberton.h"
/**
  * times_table - times table
  */
void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = (i * j);
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (j == 9 && num < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
				_putchar('\n');
			}
			else if (j == 9 && num > 9)
			{
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar('\n');
			}
			else if (num < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((num % 10) + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(',');
			}
		}
	}
}
