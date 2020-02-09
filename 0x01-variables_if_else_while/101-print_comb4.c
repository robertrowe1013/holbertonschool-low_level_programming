#include <stdio.h>
/**
  * main - unique three digit numbers
  *
  * Return: 0
  */
int main(void)
{
	int ones = '2';
	int tens = '1';
	int hunds = '0';

	while (hunds <= '7' && tens <= '8' && ones <= '9')
	{
		putchar (hunds);
		putchar (tens);
		putchar (ones);
		if (hunds == '7' && tens == '8' && ones == '9')
			;
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (ones == '9')
		{
			hunds++;
			tens = (hunds + 1);
			ones = (tens + 1);
		}
		else
			ones++;
	}
	putchar('\n');

	return (0);
}
