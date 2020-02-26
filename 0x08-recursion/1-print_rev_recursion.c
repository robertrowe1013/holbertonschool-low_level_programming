#include "holberton.h"
/**
  * _print_rev_recursion - print in reverse
  * @s: string
  */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
