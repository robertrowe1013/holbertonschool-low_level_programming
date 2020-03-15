#ifndef VERIADIC_FUNCTIONS_H
#define VERIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>

/**
  * struct fmt - format to print
  * @s: format string
  * @prt: print function
  */
typedef struct fmt
{
	char *s;
	void (*prt)(va_list);
} fmt_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list to_prt);
void p_int(va_list to_prt);
void p_fl(va_list to_prt);
void p_str(va_list to_prt);

#endif /* VERIADIC_FUCTIONS_H */
