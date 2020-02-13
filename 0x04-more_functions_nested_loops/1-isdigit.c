#include "holberton.h"

/**
  * _isdigit - is ASCII numeral
  * @c: input
  *
  * Return: 1 if number, 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && !(c >= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
