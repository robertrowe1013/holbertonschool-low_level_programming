#include "variadic_functions.h"
/**
  * sum_them_all - add em all, let the Gods sort em out
  * @n: number of numbers
  *
  * Return: if no numbers, return 0, else sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	int i;
	int num = n;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < num; i++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
