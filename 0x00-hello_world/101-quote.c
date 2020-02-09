#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - print quote
 *
 * Return: 1
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, q, 59);

	return (1);
}
