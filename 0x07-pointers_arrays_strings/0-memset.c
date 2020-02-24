#include "holberton.h"
/**
  * _memset - memory setter
  * @s: set point
  * @b: char to fill memory
  * @n: number of bytes
  *
  * Return: pointer to set
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
