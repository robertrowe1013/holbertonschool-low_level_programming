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
	unsigned long int flip;
	int count = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		count += (flip & 1);
		flip >>= 1;
	}

	return (count);
}
