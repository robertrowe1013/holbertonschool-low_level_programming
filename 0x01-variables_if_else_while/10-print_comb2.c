#include<stdio.h>
/**
  * main - iterate numbers 00 through 99
  *
  * Return: 0
  */
int main(void)
{
	int tens = 48;
	int ones = 48;

	while (tens <= 57 && ones <= 57)
	{
		putchar (tens);
		putchar (ones);
		if (tens == 57 && ones == 57)
			;
		else
		{
			putchar(44);
			putchar(32);
		}
		if (ones == 57)
		{
			tens++;
			ones = 48;
		}
		else
		{
			ones++;
		}
	}
	putchar('\n');

	return (0);
}
