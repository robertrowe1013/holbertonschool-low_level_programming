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
	char *dup_origin;

	if (str == NULL)
		return (NULL);
	while (str[sl] != '\0')
		sl++;
	dup = malloc(sl * (sizeof(char) + 1));
	if (dup == NULL)
		return (NULL);
	dup_origin = dup;
	while (*str)
	{
		*dup_origin = *str;
		dup_origin++;
		str++;
	}
	*dup_origin = '\0';

	return (dup);
}
