#include "holberton.h"
#include <stdlib.h>
/**
  * _calloc - allocate memory for arry
  * @nmemb: array count
  * @size: mem size
  *
  * Return: NULL if size is 0, nmemb is 0, or malloc fails. else pointer.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i = 0;

	if (size < 1 || nmemb < 1)
	{
		return (NULL);
	}
	ar = malloc(nmemb * size);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	while (i < nmemb)
	{
		ar[i] = 0;
		i++;
	}
	ar[i] = '\0';

	return (ar);
}
