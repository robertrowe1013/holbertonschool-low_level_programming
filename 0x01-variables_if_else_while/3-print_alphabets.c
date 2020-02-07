#include<stdio.h>
/**
 * main - display lowercase alphabet without printf
 *
 * Return: return 0
 */
int main(void)
{
	char letter = 'a';
	char cap = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}

	putchar('\n');

	return (0);
}
