#include<stdio.h>
/**
 * main - display lowercase alphabet in reverse
 *
 * Return: return 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
