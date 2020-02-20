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
	int i = 0;

/* get string length for dest*/	
	while (dest[sl] != '\0')
	{
		sl++;
	}
/*go to src['\0'], start at dest['\0'], replace dest[i] with src[i] */
	while (src[i] != '\0')
	{
		dest[sl + i] = src[i];
		i++;
	}
/* add '\0' to end of dest[] */	
	dest[sl] = '\0';
/* return dest to p */
	return (dest);
}
