#include "holberton.h"
/**
  * jack_bauer - 24 hr clock
  */
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;
	int hrcount;
	int mincount;

	for (hrcount = 0; hrcount < 24; hrcount++)
	{
		for (mincount = 0; mincount < 60; mincount++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
		min = 0;
	}
}
