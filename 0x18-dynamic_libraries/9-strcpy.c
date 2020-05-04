#include "holberton.h"
/**
  * *_strcpy - copy string
  * @dest: destination
  * @src: string copy
  *
  * Return: dest pointer
  */
char *_strcpy(char *dest, char *src)
{
	int sl = 0;
	int i;

	while (src[sl] != '\0')
	{
		sl++;
	}
	for (i = 0; i <= sl; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
