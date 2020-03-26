#include "holberton.h"
/**
  * clear_bit - set bit to 0
  * @n: decimal number
  * @index: index to clear
  *
  * Return: 1 if worked, else -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 31)
		return (-1);
	*n &= ~(1 << index);
	if (((*n >> index) & 1) == 0)
		return (1);

	return (-1);
}
