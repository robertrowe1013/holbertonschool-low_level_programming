#include "holberton.h"
#include <stdlib.h>
/**
  * strtow - string tow?
  * @str: string
  *
  * Return: null if str is null, str is empty, or malloc fails, else string
  */
char **strtow(char *str)
{
	int sl;
	int i;
	char *ar;

	if (str == NULL || str[0] == ' ')
		return (NULL);
	sl = _strlen(str);
	while (i < sl)
	{
		if (str[i] != ' ')
		{
			ar = _crtstr(str, i);
			*ar++;
			while (str[i] != ' ')
			{
				if (str[i] == '\0')
					return (str);
				i++;
			}
		}
		else
			i++;
	}

	return (str);
}
/**
  * _strlen - string length
  * @str: string
  *
  */
int _strlen(char *str)
{
	int sl = 0;

	while (str != '\0')
		sl++;

	return (sl);
}
/**
  * _crtstr - create string
  * @str: string
  * @i: index
  *
  * Return: string
  */
char *_crtstr(char *str, int i)
{
	int ii;
	char *ar;
	int sl = 0;

	while (str[i] != ' ' || str[i] != '\0')
	{
		sl++;
		i++;
	}
	i -= sl;
	ar = malloc(sizeof(char) * (sl + 1));
	while (sl > 0)
	{
		ar[ii] = str[i];
		i++;
		ii++;
		sl--;
	}

	return (ar);
}
