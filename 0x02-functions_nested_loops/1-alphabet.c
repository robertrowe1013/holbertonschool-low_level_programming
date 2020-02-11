#include "holberton.h"
/**
  * print_alphabet - iterate through lowercase letters. 
  */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
