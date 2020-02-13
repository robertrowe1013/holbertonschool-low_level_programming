#include <stdio.h>
/**
  * main - sum of numbers divisible by 3 and 5
  *
  * Return: 0
  */
int main(void)
{
	int x;
	long int y = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y = x + y;
		}
	}
	printf("%ld\n", y);

	return (0);
}
