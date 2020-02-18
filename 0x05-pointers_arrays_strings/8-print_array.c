#include "holberton.h"
#include <stdio.h>
/**
  * print_array - print array
  * @a: array
  * @n: number of elements
  */
void print_array(int *a, int n)
{
	int tmp = n - 1;
	int i;

	for (i = 0; n > 1; n--)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[tmp]);
}
