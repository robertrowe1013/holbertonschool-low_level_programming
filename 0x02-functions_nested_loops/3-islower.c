#include <ctype.h>
/**
  * _islower - determine if c is lowercase
  * @c: character
  *
  * Return: 1 if lowercase, 0 otherwize
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
