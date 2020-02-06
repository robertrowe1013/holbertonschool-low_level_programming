#include<stdio.h>
/**
* main - identify a number as positive, negative, or zero.
*
* Return: return 0
*/
int main(void)
{
	int n;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
