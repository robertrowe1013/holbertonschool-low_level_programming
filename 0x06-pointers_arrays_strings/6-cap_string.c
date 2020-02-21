#include "holberton.h"
/**
  * cap_string - cap words
  * @s: string
  *
  * Return: string
  */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[i] -= 32;
		}
		else
		{
			;
		}
		if (s[i] == ' ' || s[i] == 9 || s[i] == '\n' || s[i] == ',' || s[i] == ';' 
				|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' 
				|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				i++;
				s[i] -= 32;
			}
			else
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (s);
}
