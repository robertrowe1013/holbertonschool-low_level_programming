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
	char *dup_origin;

	while (str[sl] != '\0')
		sl++;
	if (sl == 0)
		return ('\0');
	dup = malloc(sl * (sizeof(char) + 1));
	if (dup == '\0')
		return ('\0');
	dup_origin = dup;
	for (i = 0; i < (sl); i++)
		dup_origin[i] = str[i];
	dup_origin[i] = '\0';

	return (dup);
}
