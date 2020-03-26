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
	int i;
	unsigned int count = 0;

	flip = n ^ m;
	while (i > 0)
	{
		count += (i & 1);
		i >>= 1;
	}

	return (count);
}
