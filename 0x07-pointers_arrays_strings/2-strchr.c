#include "holberton.h"
/**
  * _strchr - first occurence of char in string
  * @s: string
  * @c: char
  *
  * Return: pointer
  */
char *_strchr(char *s, char c)
{
	int i;
	int sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}
	for (i = 0; i < sl; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if ((s[sl++] == '\0') && (c == '\0'))
	{
		return (&s[sl++]);
	}
	else
	{
		return ('\0');
	}
}
