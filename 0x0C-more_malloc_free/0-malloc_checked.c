#include "holberton.h"
#include <stdlib.h>
/**
  * malloc_checked - malloc, checked
  * @b: pointer?
  *
  * Return: void pointer
  */
void *malloc_checked(unsigned int b)
{
	void *p = (malloc(b));

	if (p == NULL)
		exit (98);
	return (p);
}
