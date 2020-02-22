#include "holberton.h"
/**
  * print_number - print number
  * @n: number
  */
void print_number(int n)
{
	int digit = 1;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		_putchar('0');
	else
	{
		while (num != 0)
		{
			num /= 10;
			digit *= 10;
		}
		digit /= 10;
		if (n < 0)
			num = -n;
		else
			num = n;
		while (digit != 1)
		{
			_putchar(((num / digit) % 10) + '0');
			digit /= 10;
		}
		_putchar((num % 10) + '0');
	}
}
