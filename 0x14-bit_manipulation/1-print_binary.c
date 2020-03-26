#include "holberton.h"
/**
  * print_binary - print binary
  * @n: decimal number to convert
  */
void print_binary(unsigned long int n)
{
	int digit;
	int tmp;
	int printflag;

	if (n == 0)
		_putchar('0');
	for (digit = 31; digit >= 0; digit--)
	{
		tmp = n >> digit;
		if (tmp & 1)
		{
			_putchar('1');
			printflag = 1;
		}
		else if (printflag == 1)
			_putchar('0');
	}
}
