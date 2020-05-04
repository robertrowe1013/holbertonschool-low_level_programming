#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
