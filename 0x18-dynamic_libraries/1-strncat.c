#include "holberton.h"
/**
  * _strncat - append n bytes to string
  * @dest: destination
  * @src: source
  * @n: number
  *
  * Return: pointer
  */
char *_strncat(char *dest, char *src, int n)
{
	int sl = 0;
	int i = 0;

	while (dest[sl] != '\0')
	{
		sl++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[sl] = src[i];
		i++;
		sl++;
	}
	dest[sl] = '\0';

	return (dest);
}
