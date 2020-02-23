#include "holberton.h"
#include <stdio.h>
/**
  * main - fib add
  *
  * Return: 0
  */
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	unsigned long n = 2;

	for (i = 0; n <= 4000000; i++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			n = n + c;
		}
		a = b;
		b = c;
	}
	printf("%lu\n", n);

	return (0);
}
