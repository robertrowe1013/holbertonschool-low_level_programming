#include "holberton.h"
#include <stdlib.h>
/**
  * str_concat - concatinate strings
  * @s1: string 1
  * @s2: string 2
  *
  * Return: null on failure, else dest string
  */
char *str_concat(char *s1, char *s2)
{
	int sl = 0;
	int sl2 = 0;
	char *dest;
	int i;

	while (s1[sl] != '\0')
		sl++;
	while (s2[sl2] != '\0')
		sl2++;
	dest = malloc(sl + sl2 + 1);
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	for (i = 0; i < sl; i++)
		dest[i] = s1[i];
	for (i = 0; i < sl2; i++)
		dest[i + sl] = s2[i];
	dest[sl + sl2] = '\0';

	return (dest);
}
