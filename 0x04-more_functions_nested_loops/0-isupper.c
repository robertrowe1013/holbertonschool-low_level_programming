#include "holberton.h"

/**
  * _isupper - is upper case letter
  * @c: letter
  *
  * Return: 1 if upper case, 0 otherwise
  */

int _isupper(int c)
{
	if (c >= 'A' && !(c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
