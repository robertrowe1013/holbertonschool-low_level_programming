#include "holberton.h"
char *wildcard(char *s2);
char *moves1(char *s1, char *s2);
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
	{
		wildcard(s2);
		moves1(s1, s2);
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
/**
  * wildcard - move string past wildcards
  * @s2: string 2
  *
  * Return: new string 2 location
  */
char *wildcard(char *s2)
{
	if (*s2 != '*')
		return (s2);
	else if (*s2 == '*')
		return (wildcard(s2 + 1));

	return (s2);
}
/**
  * moves1 - move s1
  * @s1: string 1
  * @s2: string 2
  *
  * Return: new position of s1
  */
char *moves1(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (s1);
	if (*s1 == '\0')
		return (s1);

	return (moves1(s1 + 1, s2));
}
