#include "holberton.h"
#include <stdlib.h>
/**
  * array_range - creates an array
  * @min: array start
  * @max: array end
  *
  * Return: NULL if min > max or malloc fails. else pointer.
  */
int *array_range(int min, int max)
{
	int *ar;
	int i = 0;
	int range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min;
	ar = malloc(sizeof(int) * (range + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i <= max)
	{
		ar[i] = min + i;
		i++;
	}

	return (ar);
}
