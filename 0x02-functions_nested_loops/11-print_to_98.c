#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - print to 98
  * @n: number
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n == 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n = n; n == 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		;
	}
	printf("%d, ", n);

