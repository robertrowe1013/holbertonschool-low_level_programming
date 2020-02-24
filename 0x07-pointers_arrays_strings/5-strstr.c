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
	int i = 0;
	int i2 = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[i2])
		{
			i++;
			i2++;
			if (needle[i2] == '\0')
			{
				return (&haystack[i - i2]);
			}
		}
		else
		{
			i -= i2;
			i2 = 0;
			i++;
		}
	}
	if (needle[0] == '\0')
		return (&needle[0]);

	return ('\0');
}
