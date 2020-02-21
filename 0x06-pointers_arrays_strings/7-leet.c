#include "holberton.h"
/**
  * leet - l337sp34k
  */
char *leet(char *s)
{
	int i = 0;
	int a;
	char arr[] = "AaEeOoTtLl43071";

	while (s[i] != '\0')
	{
		a = 0;
		while (a <= 10)
		{
			if (s[i] == (arr[a] || arr[a + 1]))
			{
				s[i] = arr[a + 11];
				a += 2;
			}
			else
			{
				a += 2;
			}
		}
		i++;
	}

	return (s);
}
