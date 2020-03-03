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
	int sl;
	int sl2;
	char *dest;
	int i;

	while (*s1 != '\0')
		sl++;
	while (*s2 != '\0')
		sl2++;
	dest = malloc(sizeof(char) * (sl + sl2) + 1);
	if (dest == '\0')
		return ('\0');
	for (i = 0; i < sl; i++)
		dest[i] = s1[i];
	for (i = 0; i < sl2; i++)
		dest[i] = s2[i];
	dest[i] = '\0';

	return (dest);
}
