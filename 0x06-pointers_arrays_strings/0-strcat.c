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

	for (sl = 0; dest[sl] != '\0'; sl++)
	for (i = 1; src[-i] != '\0'; i++)
	{
		dest[sl + i] = src[i - 1];
	}
	dest[sl + 1] = '\0';

	return (dest);
}
