#include "holberton.h"
/**
  * _strpbrk - first occurence of accepted char in string
  * @s: string
  * @accept: accepted chars
  *
  * Return: pointer
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int i2;
	int sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}
	for (i = 0; i < sl; i++)
	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i] == accept[i2])
				return (&s[i]);
		}
	}

	return ('\0');
}
