#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - search for int
  * @array: array
  * @size: size
  * @cmp: compare funtion
  *
  * Return: -1 if no element or size less than 0, else first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
