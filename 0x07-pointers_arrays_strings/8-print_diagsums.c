#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - print sums of diagonals
  * @a: array
  * @size: size
  */
void print_diagsums(int *a, int size)
{
	int i;
	int i2 = size;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		i2--;
		sum1 += a[i][i];
		sum2 += a[i][i2];
	}
	printf("%d, %d\n", sum1, sum2);
}
