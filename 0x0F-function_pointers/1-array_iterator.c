#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - array iterator
  * @array: array
  * @size: size
  * @action: action function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(0);
	for (i = 0; i < size; i++)
		action(array[i]);
}
