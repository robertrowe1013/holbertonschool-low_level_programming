#include "holberton.h"
/**
  * print_alphabet_x10 - repeat alphabet ten times each ending in newline.
  */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = '0';

	while (i <= '9')
	{

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
