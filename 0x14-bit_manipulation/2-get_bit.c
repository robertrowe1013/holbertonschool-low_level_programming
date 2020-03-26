#include "holberton.h"
/**
  * get_bit - bit set at index
  * @n: decimal number
  * @index: bit index to check
  *
  * Return: -1 if error, else set of index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int set;

	if (n == NULL || index > 31)
		return (-1);
	set = (n >> index) & 1;
	if (set == 0 || set == 1)
		return (set);

	return (-1);
}
