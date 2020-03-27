#include "holberton.h"
/**
  * set_bit - set bit to 1
  * @n: decimal number
  * @index: bit to flip
  *
  * Return: 1 if worked, else -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 31)
		return (-1);
	*n |= 1 << index;

	return (1);
}
