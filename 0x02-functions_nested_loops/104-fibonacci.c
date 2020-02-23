#include <stdio.h>
/**
  * main - print fib up to 98th
  *
  * Return: 0
  */
int main(void)
{
	unsigned long a1 = 0;
	unsigned long a2 = 1;
	unsigned long b1 = 0;
	unsigned long b2 = 2;
	unsigned long c1 = 0;
	unsigned long c2 = 0;
	int i;

	printf("1, 2");
	for (i = 0; i < 96; i++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		if (c2 > 1000000)
		{
			c2 %= 1000000;
			c1++;
		}
		if (c1 > 0)
		{
			if (c2 < 100000)
				printf(", %lu0%lu", c1, c2);
			else
				printf(", %lu%lu", c1, c2);
		}
		else
		{
			printf(", %lu", c2);
		}
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	putchar('\n');

	return (0);
}
