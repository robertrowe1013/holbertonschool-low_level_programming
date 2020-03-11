#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - search for int
  * @array: array
  * @size: size
  * @cmp: cmp?
  *
  * Return: -1 if no element or size less than 0, else first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return(-1);
	
}
