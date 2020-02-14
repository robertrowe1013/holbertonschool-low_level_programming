#include <stdio.h>
#include <math.h>
/**
  * main - find largest prime factor
  *
  * Return: 0
  */
int main(void)
{
	long int n = 612852475143;
	long int gf = -1;
	long int x;
	long int sr = sqrt(n);

	for (x = 3; x <= sr; x = x + 2)
	{
		while (n % x == 0)
		{
			gf = x;
			n = n / x;
		}
	}
	if (n > 2)
	{
		gf = n;
	}
	printf("%ld\n", gf);

	return (0);
}
