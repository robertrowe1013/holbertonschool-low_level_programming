#include "holberton.h"
#include <stdlib.h>
/**
  * string_nconcat - concatinate n char of str
  * @s1: string 1
  * @s2: string 2
  * @n: char count
  *
  * Return: null on failure, else dest string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sl = 0;
	unsigned int sl2 = 0;
	char *dest;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sl] != '\0')
		sl++;
	while (s2[sl2] != '\0')
		sl2++;
	if (n < sl2)
		sl2 = n;
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
