#include<stdio.h>
/**
  * main - display lowercase alphabet without printf
  *
  * Return: return 0
  */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	return (0);
}
