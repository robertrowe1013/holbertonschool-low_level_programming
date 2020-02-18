#include "holberton.h"
/**
  * rev_string - prints reverse string
  * @s: string
  */
void rev_string(char *s)
{
	int sl = 0;
	int tmp = 0;
	int i = 0;
	int n = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}
	for (i = sl; i > (sl / 2); i--)
	{
		tmp = s[n];
		s[n] = s[i - 1];
		s[i - 1] = tmp;
		n++;
	}
}
