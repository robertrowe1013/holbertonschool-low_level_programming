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
	printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		arg = va_arg(list, char *);
		if ((i != n) || (separator != NULL))
			printf("%s", separator);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
	}
	printf("\n");
	va_end(list);
}
