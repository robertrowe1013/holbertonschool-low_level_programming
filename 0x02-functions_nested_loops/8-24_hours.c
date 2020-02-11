#include "holberton.h"
/**
  * jack_bauer - 24 hr clock
  */
void jack_bauer(void)
{
	int hr10 = '0';
	int hr1 = '0';
	int min10 = '0';
	int min1 = '0';

	while (hr10 < '2' && hr1 < '4' && min10 < '0' && min1 < '0')
	{
		_putchar(hr10);
		_putchar(hr1);
		_putchar(':');
		_putchar(min10);
		_putchar(min1);
		_putchar('\n');
		
		if (min1 < '9')
		{
			min1++;
		}
		else
		{
			min10++;
			min1 = '0';
			if (min10 < '5')
			{
				min10++;
			}
			else
			{
				hr1++;
				min10 = '0';
				if (hr1 < '9')
				{
					hr1++;
				}
				else
				{
					hr10++;
					hr1 = '0';
				}
			}
		}
	}
}
