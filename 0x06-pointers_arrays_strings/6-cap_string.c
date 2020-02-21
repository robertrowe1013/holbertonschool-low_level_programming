#include "holberton.h"
/**
  * cap_string - cap words
  * @s: string
  *
  * Return: string
  */
char *cap_string(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == 9 || s[i] == '\n' || s[i] == ',' || s[i] == ';' 
				|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' 
				|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			i++;
			s[i] -= 32;
		}
		else
		{
			i++;
		}
	}

	return (s);
}
