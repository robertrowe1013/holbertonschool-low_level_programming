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
				;
			}
			else
			{
				_putchar(' ');
			}
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((num % 10) + '0');
			}
			if (j == 9)
			{
				;
			}
			else
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
