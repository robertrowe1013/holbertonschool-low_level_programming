#include "holberton.h"
/**
  * _strlen - string length
  * @s: string
  * Return: string length
  */
int _strlen(char *s)
{
	int sl = 0;

	while (*s != '\0')
	{
		s++;
		sl++;
	}
	return (sl);
}
