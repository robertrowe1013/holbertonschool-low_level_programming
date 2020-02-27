#include "holberton.h"
int _prime(int i, int num);
/**
  * is_prime_number - is number prime
  * @n: number
  *
  * Return: 1 if prime, 0 if not prime
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if ((_prime(3, n)) == 0)
		return (0);

	return (1);
}
/**
  * _prime - prime
  * @i: iterator
  * @num: number
  *
  * Return: 1 if prime, 0 if not
  */
int _prime(int i, int num)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	if (num > i)
		return (_prime((i + 1), num));

	return (0);
}
