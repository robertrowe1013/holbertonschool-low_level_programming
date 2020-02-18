#include "holberton.h"
/**
  * print_rev - print reverse
  * @s: string
  */
void print_rev(char *s)
{
	int sl = 0;
	int n;

	while (s[sl] != '\0')
	{
		sl++;
	}
	n = sl - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
