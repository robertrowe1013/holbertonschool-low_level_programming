#include "holberton.h"
/**
  * print_rev - print reverse
  * @s: string
  */
void print_rev(char *s)
{
	int sl = 0;
	int ch = s[sl];
	int n;

	while (*s != '\0')
	{
		s++;
		sl++;
	}
	n = sl + 1;
	while (n > -1)
	{
		n--;
		ch = s[n];
		_putchar(ch);
	}
	_putchar('\n');
}
