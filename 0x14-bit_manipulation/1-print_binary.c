#include "holberton.h"
/**
  * print_binary - print binary
  * @n: decimal number to convert
  */
void print_binary(unsigned long int n)
{
	int digit;
	unsigned long int tmp;
	int printflag = 0;

	if (n == 0)
		_putchar('0');
	for (digit = 63; digit >= 0; digit--)
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
