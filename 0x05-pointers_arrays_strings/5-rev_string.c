#include "holberton.h"
/**
  * rev_string - prints reverse string
  * @s: string
  */
void rev_string(char *s)
{
	int rev[50];
	int sl = 0;
	int n = 0;
	int i = 0;

	while (s[sl] != '\0')
	{
		rev[sl] = s[sl];
		sl++;
	}
	for (i = sl; i > 0; i--)
	{
		s[n] = rev[i - 1];
		n++;
	}
}
