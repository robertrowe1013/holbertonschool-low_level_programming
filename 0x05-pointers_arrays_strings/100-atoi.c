#include "holberton.h"
/**
  * _atoi - array to int
  * @s: string
  *
  * Return: int
  */
int _atoi(char *s)
{
	int neg = 0;
	unsigned int num = 0;
	int ret = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			neg -= 1;
		if (s[i] == '+')
			neg += 1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = (num * 10) + (s[i] - '0');
				i++;
			}
			break;
		}
	}
	if (neg < 0)
		ret = (num * -1);
	else
		ret = num;

	return (ret);
}
