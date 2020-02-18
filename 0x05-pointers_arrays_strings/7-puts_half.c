#include "holberton.h"
/**
  * puts_half - print half string
  * @str: string
  */
void puts_half(char *str)
{
	int sl = 0;

	while (str[sl] != '\0')
	{
		sl++;
	}
	if (sl % 2 == 0)
	{
		sl = sl / 2;
	}
	else
	{
		sl = (sl - 1) / 2;
	}
	while (str[sl] != '\0')
	{
		_putchar(str[sl]);
		sl++;
	}
	_putchar('\n');
}
