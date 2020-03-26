#include "holberton.h"
/**
  * binary_to_uint - convert string of binary to unsigned int
  * @b: pointer to binary string
  *
  * Return: unsigned int in base 10
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, i2, e, num = 0, sl = 0;

	if (b == NULL)
		return (0);
	while (b[sl] != '\0')
		sl++;
	for (i = 0; sl > 0; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1' && sl == 1)
				num++;
			else if (b[i] == '1')
			{
				for (e = 1, i2 = 1; i2 < sl; i2++)
					e *= 2;
				num += e;
			}
			sl--;
		}
		else 
			return (0);
	}

	return (num);
}
