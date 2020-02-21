#include "holberton.h"
/**
  * rot13 - rot13 cypher
  * @s: string
  *
  * Return: string
  */
char *rot13(char *s)
{
	int i = 0;
	int a;
	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		a = 0;
		while (a <= 52)
		{
			if (s[i] == arr[a])
			{
				s[i] = rot[a];
				break;
			}
			a++;
		}
		i++;
	}

	return (s);
}
