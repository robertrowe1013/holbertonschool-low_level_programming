#include <stdio.h>
/**
  * main - unique three digit numbers
  *
  * Return: 0
  */
int main(void)
{
	int hund = -1;
	int ten = 0;
	int one = 1;

	while (hund < 7)
	{
		hund++;
		while (ten < 8)
		{
			ten++;
			while (one < 9)
			{
				one++;
				putchar(hund + '0');
				putchar(ten + '0');
				putchar(one +'0');
				putchar(',');
				putchar(' ');
			}
			one = ten + 1;
		}
		ten = hund;
	}
	putchar('\n');
	return (0);
}
