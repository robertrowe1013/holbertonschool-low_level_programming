#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_numbers - print all the numbers!
  * @separator: separator
  * @n: number of numbers
  *
  * Return: 0 if n is 0, else sum;
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start (list, n);
	if (n == 0)
		exit(0);
	printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
	{
		if ((i != n) && (separator != NULL))
			printf("%s", separator);
		printf("%d", va_arg(list, int));
	}
	printf("\n");
	va_end (list);
}
