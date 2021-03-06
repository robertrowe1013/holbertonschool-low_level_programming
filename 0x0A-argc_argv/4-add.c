#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - sum
  * @argc: number of numbers
  * @argv: numbers to add
  *
  * Return: 0 if no numbers, 1 Error if not a number, else 2
  */
int main(int argc, char *argv[])
{
	int i;
	int i2 = 0;
	int sum = 0;
	int tmp = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (i2 = 0; argv[i][i2] != '\0'; i2++)
		{
			if (isdigit(argv[i][i2]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		tmp = atoi(argv[i]);
		sum += tmp;
	}
	printf("%d\n", sum);

	return (2);
}
