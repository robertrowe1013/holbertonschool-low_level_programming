#include "holberton.h"
int _slr(char *s);
int pal(char *s, int str, int end);
/**
  * is_palindrome - is palindrome?
  * @s: string
  *
  * Return: 1 if palindrome, 0 if not
  */
int is_palindrome(char *s)
{
	int sl;

	sl = _slr(s) - 1;
	if (pal(s, 0, sl) == 0)
		return (0);

	return (1);
}
/**
  * _slr - string length
  * @s: string
  *
  * Return: length
  */
int _slr(char *s)
{
	if (*s == '\0')
		return (0);
	return (_slr(s+1) + 1);
}
/**
  * pal - palindrome?
  * @s: string
  * @str: string start
  * @end: string length
  *
  * Return: 1 if palindrome, 0 if not
  */
int pal(char *s, int str, int end)
{
	if (str > end)
		return (1);
	if (s[str] == s[end])
		return(pal(s, str + 1, end - 1));

	return (0);
}
