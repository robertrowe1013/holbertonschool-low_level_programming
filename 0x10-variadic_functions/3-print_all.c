#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_all - print all the things!
  * @format: string of types
  */
void print_all(const char * const format, ...)
{
	fmt_t prt_fmt[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_fl},
		{"s", p_str},
		{NULL, NULL}
	};
	int i = 0;
	int i2 = 0;
	va_list list;
	char *comma = "";

	va_start(list, format);
	while (format && format[i])
	{
		i2 = 0;
		while (prt_fmt[i2].s != NULL)
		{
			if (*(prt_fmt[i2].s) == format[i])
			{
				printf("%s", comma);
				prt_fmt[i2].prt(list);
				comma = ", ";
			}
			i2++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
  * p_char - print char
  * @to_prt: print
  */
void p_char(va_list to_prt)
{
	printf("%c", va_arg(to_prt, int));
}
/**
  * p_int - print int
  * @to_prt: print
  */
void p_int(va_list to_prt)
{
	printf("%d", va_arg(to_prt, int));
}
/**
  * p_fl - print float
  * @to_prt: print
  */
void p_fl(va_list to_prt)
{
	printf("%f", va_arg(to_prt, double));
}
/**
  * p_str - print string
  * @to_prt: print
  */
void p_str(va_list to_prt)
{
	char *s;

	s = va_arg(to_prt, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
