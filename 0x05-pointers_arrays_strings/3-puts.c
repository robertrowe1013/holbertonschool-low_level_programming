#include "holberton.h"
/**
  * _puts - puts
  * @str: string
  */
void _puts(char *str)
{
	int ch = str[0];
	int n = 0;

	while (ch != '\0')
	{
		_putchar(ch);
		n++;
		ch = str[n];
	}
	_putchar('\n');
}
