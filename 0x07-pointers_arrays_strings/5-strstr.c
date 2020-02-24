#include "holberton.h"
/**
  * _strstr - find needle in haystack
  * @haystack: source string
  * @needle: string to search for
  *
  * Return: address of needle in haystack
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int i2 = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i2])
		{
			i++;
			i2++;
			if (i2 == '\0')
				return (&haystack[i - i2]);
		}
		i -= i2;
	}

	return ('\0');
}
