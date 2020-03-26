#include "holberton.h"
/**
  * flip_bits - find number of bits that need flipping
  * @n: first number
  * @m: second number
  *
  * Return: number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip;
	unsigned int tmp;
	int i;
	unsigned int count = 0;

	if (n == NULL || m == NULL)
		return (-1);
	flip = n ^ m;
	for (i = 31; i >= 0; --i)
	{
		tmp = flip >> i;
		if (tmp & 1)
			count++;
	}

	return (count);
}
