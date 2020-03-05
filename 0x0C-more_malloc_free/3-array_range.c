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
	int i;
	int range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	ar = malloc(sizeof(int) * (range));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= range; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
