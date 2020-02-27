#include "holberton.h"
char *wildcard(char *star);
/**
  * wildcmp - compare
  * @s1: string 1
  * @s2: string 2
  *
  * Return: 1 if match, 0 if not
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		wildcard(s2);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
char *wildcard(char *s2)
{
	if (*s2 != '*')
		return (s2);
	else if (*s2 == '*')
		return (wildcard(s2 + 1));

	return (s2);
}
