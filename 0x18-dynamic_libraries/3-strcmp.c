#include "holberton.h"
/**
  * _strcmp - compare string
  * @s1: string 1
  * @s2: string 2
  *
  * Return: difference in s1 and s2
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
