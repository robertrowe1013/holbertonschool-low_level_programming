#include "holberton.h"
/**
  * jack_bauer - 24 hr clock
  */
void jack_bauer(void)
{
	int hr10 = 0;
	int hr1 = 0;
	int min10 = 0;
	int min1 = 0;
	int linecount;

	for (linecount = 0; linecount < 1440; linecount++)
	{
		_putchar(hr10 + '0');
		_putchar(hr1 + '0');
		_putchar(':');
		_putchar(min10 + '0');
		_putchar(min1 + '0');
		_putchar('\n');

		if (min1 < 9)
		{
			min1++;
		}
		else
		{
			min10++;
			min1 = 0;
			if (min10 < 6)
			{
				;
			}
			else
			{
				hr1++;
				min10 = 0;
				if (hr1 < 10)
				{
					;
				}
				else
				{
					hr10++;
					hr1 = 0;
				}
			}
		}
	}
}
