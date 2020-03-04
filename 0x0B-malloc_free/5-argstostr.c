#include "holberton.h"
#include <stdlib.h>
/**
  * argstostr - arguements to string
  * @ac: arguement count
  * @av: arguement value
  *
  * Return: null if ac is 0 or av is null or malloc fails, else values
  */
char *argstostr(int ac, char **av)
{
	int i;
	int i2;
	int sl = 0;
	char *ar;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (i2 = 0; av[i][i2] != '\0'; i2++)
			sl++;
	ar = malloc((sl + ac + 1) * sizeof(char));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (i2 = 0; av[i][i2] != '\0'; i2++, index++)
			ar[index] = av[i][i2];
		if (i == ac - 1)
		{
			ar[index] = '\n';
			ar[index + 1] = '\0';
		}
		else
		{
			ar[index] = '\n';
			index++;
		}
	}

	return (ar);
}
