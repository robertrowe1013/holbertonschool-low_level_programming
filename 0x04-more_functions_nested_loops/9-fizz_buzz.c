#include <stdio.h>
/**
  * main - print 1 - 100 3 is fizz, 5 is bang
  *
  * Return: 0
  */
int main(void)
{
	int n;

	for (n = 1; n <= 101; n++)
	{
		if (n == 101)
		{
			putchar('\n');
		}
		else if ((n % 5 == 0) && (n % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			putchar(' ');
		}
	}
	return (0);
}
