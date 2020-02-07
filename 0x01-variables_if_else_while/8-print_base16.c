#include<stdio.h>
/**
 * main - display lowercase alphabet without printf
 *
 * Return: return 0
 */
int main(void)
{
	char deci = '0';
	char hexi = 'a';

	while (deci <= '9')
	{
		putchar(deci);
		deci++;
	}
	while (hexi <= 'f')
	{
		putchar(hexi);
		hexi++;
	}
	putchar('\n');

	return (0);
}
