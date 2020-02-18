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
	long int a = 1;
	long int b = 2;
	long int c;

	printf("1, 2");
	for (i = 0; i <= 49; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	putchar('\n');

	return (0);
}
