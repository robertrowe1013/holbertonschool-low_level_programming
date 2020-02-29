#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - min coins for change
  * @argc: must be two
  * @argv: amount in cents
  * Return: 1 if not exactly one argument, else 0
  */
int main(int argc, char *argv[])
{
	int i;
	int val;
	int change = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; coins[i]; i++)
	{
		while (val >= coins[i])
		{
			val -= coins[i];
			change++;
		}
	}
	printf("%d\n", change);

	return (0);
}
