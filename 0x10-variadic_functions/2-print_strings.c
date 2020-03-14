#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_strings - print all the strings!
  * @separator: separator
  * @n: number of string things
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *arg;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(list, char *);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
		if ((i > n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
