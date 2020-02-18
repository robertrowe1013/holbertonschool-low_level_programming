#include "holberton.h"
/**
  * print_rev - print reverse
  * @s: string
  */
void print_rev(char *s)
{
	int sl = 0;
	int ch, n;

	while (*s != '\0')
	{
		s++;
		sl++;
	}
	ch = s[sl];
	n = sl;
	while (n > 0)
	{
		_putchar(ch);
		n--;
		ch = s[n];
	}
	_putchar('\n');
}
