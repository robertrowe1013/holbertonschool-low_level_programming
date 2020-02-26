#include "holberton.h"
/**
  * _strlen_recursion - string length using recursion
  * @s: string
  *
  * Return: string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
