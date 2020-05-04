#include "holberton.h"
/**
  * _strspn - length of string prefix
  * @s: string
  * @accept: acceptable bytes
  *
  * Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int i2;
	unsigned int sl = 0;
	unsigned int l = 0;

	while (s[sl] != '\0')
		sl++;
	for (i = 0; i < sl; i++)
	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i] == accept[i2])
			{
				l++;
				break;
			}
		}
		if (l == i)
			return (l);
	}

	return (l);
}
