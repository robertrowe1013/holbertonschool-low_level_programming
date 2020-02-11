#include "holberton.h"
/**
  * times_table - times table
  */
void times_table(void)
{
	int i = 0;
	int j = 0;
	
	while (i != 9 && j != 9)
	{
		_putchar((i * j) + 48);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
