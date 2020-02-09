#include <stdio.h>
/**
  * main - interate unique 2 digit numbers
  *
  * Return: 0
  */
int main(void)
{
	int ones = '1';
	int tens = '0';

	while (tens <= '8' && ones <= '9')
	{
		putchar (tens);
		putchar (ones);
		if (tens == '8' && ones == '9')
			;
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (ones == '9')
		{
			tens++;
			ones = (tens + 1);
		}
		else
			ones++;
	}
	putchar('\n');

	return (0);
}
