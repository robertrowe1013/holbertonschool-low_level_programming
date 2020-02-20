#include "holberton.h"
/**
  * _strcat - concatinate strings
  * @dest: destination
  * @src: source
  *
  * Return: pointer
  */
char *_strcat(char *dest, char *src)
{
	int sl = 0;
	int i = 1;

	while (dest[sl] != '\0')
	{
		sl ++;
	}
	while (src[-i] != '\0')
	{
		dest[sl + i] = src[i - 1];
		i++;
	}
	dest[sl + 1] = '\0';

	return (dest);
}
