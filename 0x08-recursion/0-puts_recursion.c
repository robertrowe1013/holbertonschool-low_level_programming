#include "holberton.h"
/**
  * _puts_recursion - puts recursion
  * @s: string
  */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
