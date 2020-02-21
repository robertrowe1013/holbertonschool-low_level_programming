#include "holberton.h"
/**
  * print_number - print number
  * @n: number
  */
void print_number(int n)
{
	int digit = 0;
	int num = n;

	if (num < 0)
		_putchar('-');
	else if (num == 0)
		_putchar('0');
	else
	{
		while (num != 0)
		{
			num / 10;
			digit++;
		}

}
