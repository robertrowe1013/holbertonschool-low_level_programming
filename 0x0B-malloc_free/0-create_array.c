#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - create array
  * @size: size
  * @c: char
  *
  * Return: \0 if size 0. else pointer to array
  */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
	{
		return ('\0');
	}
	ar = malloc(size * sizeof(char));
	ar[0] = c;

	return (ar);
}
