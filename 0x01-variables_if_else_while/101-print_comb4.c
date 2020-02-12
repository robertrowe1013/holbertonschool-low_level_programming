#include <stdio.h>
/**
  * main - unique 3 digit numbers
  *
  * Return: 0
  */
int main(void)
{
	int hund = 0;
	int ten = 1;
	int one = 2;

	while (hund <= 7)
	{
		while (ten <= 8)
		{
			while (one <= 9)
			{
				putchar(hund + '0');
				putchar(ten + '0');
				putchar(one + '0');
				if (!(hund == 7 && ten == 8 && one == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
