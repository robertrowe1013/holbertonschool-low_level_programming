#include "holberton.h"
/**
  * puts2 - puts alt
  * @str: string
  */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
