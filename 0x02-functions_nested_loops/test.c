#include <stdio.h>
int main(void)
{
	char ch[] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		putchar(ch[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
