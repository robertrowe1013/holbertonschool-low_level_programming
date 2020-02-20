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
	int sl, i;

/* get string length for dest*/	
	for (sl = 0; dest[sl] != '\0'; sl++)
	{
		;
	}
/* start at src[0], go to src['\0'], start at dest['\0'], replace dest[] with src[] */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[sl + i + 1] = src[i];
	}
/* add '\0' to end of dest[] */	
	dest[sl + 1] = '\0';
/* return dest to p */
	return (dest);
}
