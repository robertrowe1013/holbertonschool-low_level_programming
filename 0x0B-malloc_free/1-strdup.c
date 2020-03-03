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
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[sl] != '\0')
		sl++;
	dup = malloc(sl * (sizeof(char) + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
