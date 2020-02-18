#include "holberton.h"
#include <stdio.h>
/**
  * print_array - print array
  * @a: array
  * @n: number of elements
  */
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i <= (n - 1); i++)
	{
		
		{
			printf(", %d", a[i]);
		}
	}
	putchar('\n');
}
