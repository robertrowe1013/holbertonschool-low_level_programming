#include <stdio.h>
/**
  * main - two digit uniq numbers
  *
  * Return: 0
  */
int main(void)
{
	int first;
	int second;

	for (first = 0; first <= 98; first++)
	{
		for (second = first +1; second <= 99; second++)
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((second / 10) + '0');
			putchar((second % 10) + '0');
			if ((first + second) < 197)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
