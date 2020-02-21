#include "holberton.h"
/**
  * reverse_array - reverse array
  * @a: array
  * @n: number
  */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int rev = n - 1;

	if (n % 2 == 0)
	{
		n = n / 2;
	}
	else
	{
		n = (n - 1) / 2;
	} 
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[rev];
		a[rev] = tmp;
		rev--;
	}
}
