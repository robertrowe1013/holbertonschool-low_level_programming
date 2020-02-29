#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - sum
  * @argc: number of numbers
  * @argv: numbers to add
  *
  * Return: 0 if no numbers, 1, Error if not a number, else 2
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int tmp;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '0')
		{
			;
		}
		else
		{
			tmp = atoi(argv[i]);
			if (tmp == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += tmp;
		}
	}
	printf("%d\n", sum);

	return (2);
}
