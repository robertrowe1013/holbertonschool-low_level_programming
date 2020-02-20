#include "holberton.h"
/**
  * string_toupper - uppercase
  * @s: string
  *
  * Return: string
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else
		{
			;
		}
		i++;
	}

	return (s);
}
