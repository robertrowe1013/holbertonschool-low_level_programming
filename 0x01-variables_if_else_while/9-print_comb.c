#include<stdio.h>
/**
  * main - print numbers seperated by commas
  *
  * Return: 0
  */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
