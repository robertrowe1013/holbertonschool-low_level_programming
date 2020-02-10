#include <stdio.h>
/**
  * main - two digit uniq numbers
  *
  * Return: 0
  */
int main(void)
{
	int ones1 = '0';
	int tens1 = '0';
	int ones2 = '0';
	int tens2 = '0';

	while (tens2 <= '8' && ones2 <= '9' && tens1 <= '9' && ones1 <= '9')
	{
		putchar (tens2);
		putchar (ones2);
		putchar (' ');
		putchar (tens1);
		putchar (ones1);
		if (tens2 == '8' && ones2 == '9' && tens1 == '9' && ones1 == '9')
		{
			;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (ones2 == '9')
		{
			ones2 = (tens2 + '1');
			tens1 = (tens2 + '1');
			ones1 = (tens1 + '1');
		}
		else
		{
			;
		}
		if (ones1 == '9' && tens1 == '9')
		{
			tens1 = (ones2 + '1');
			ones1 = ones2;
			ones2++;
		}
		else
		{
			;
		}
		if (ones1 == '9')
		{
			tens1++;
			ones1 = '0';
		}
		else
		{
			ones1++;
		}
	}
	putchar('\n');

	return (0);
}
