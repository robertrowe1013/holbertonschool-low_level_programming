#include "holberton.h"
/**
  * leet - l337sp34k
  */
char *leet(char *s)
{
	int i = 0;
	int a;
	char arr[] = "aeotlAEOTL43071";

	while (s[i] != '\0')
	{
		a = 0;
		while (a <= 5)
		{
			if (s[i] == arr[a] || s[i] == arr[a + 5])
			{
				s[i] = arr[a + 10];
				break;
			}
			a++;
		}
		i++;
	}

	return (s);
}
