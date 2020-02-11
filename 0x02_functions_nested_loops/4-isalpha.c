#include <ctype.h>
/**
  * _isalpha - determine if c is a letter
  *
  * Return: 1 if lowercase, 0 otherwize
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
