#include "holberton.h"
#include <stdio.h>

/**
  * main - fib numbers
  *
  * Return: 0
  */
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;

	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	putchar('\n');

	return (0);
}
