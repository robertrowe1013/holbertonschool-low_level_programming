#include "holberton.h"
/**
  * main - use _putchar to print
  *
  * Return: 0
  */
int main(void)
{
	char ch[] = "Holberton";
	int i = 0;

	while (i <= 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
