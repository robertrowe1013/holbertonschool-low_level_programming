#include <stdio.h>
/**
  * main - unique 3 digit numbers
  *
  * Return: 0
  */
int main(void)
{
	int hund;
	int ten;
	int one;

	for (hund = 0; hund <= 7; hund++)
	{
		for (ten = hund + 1; ten <= 8; ten++)
		{
			for (one = ten +1; one <= 9; one++)
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
