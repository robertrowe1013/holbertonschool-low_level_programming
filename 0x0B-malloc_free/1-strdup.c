#include "holberton.h"
#include <stdlib.h>
/**
  * _strdup - duplicate string
  * @str: string
  *
  * Return: \0 if string null, null if not enough mem, else pointer
  */
char *_strdup(char *str)
{
	int sl = 0;
	static char *dup;
	int i;

	if (str[0] == '\0')
		return ('\0');
	while (str[sl] != '\0')
		sl++;
	dup = malloc(sl * (sizeof(char) + 1));
	if (dup == '\0')
		return ('\0');
	for (i = 0; i < (sl); i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
