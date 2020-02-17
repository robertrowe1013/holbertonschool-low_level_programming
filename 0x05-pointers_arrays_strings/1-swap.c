#include "holberton.h"
/**
  * swap_int - swap int
  * @a: int
  * @b: swap
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
