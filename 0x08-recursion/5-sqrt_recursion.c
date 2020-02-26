#include "holberton.h"
int _pow(int x, int num);
/**
  * _sqrt_recursion - square root
  * @n: number
  *
  * Return: -1 if unnatural, else natural root
  */
int _sqrt_recursion(int n)
{
	int sqr;

	sqr = _pow(1, n);

	return (sqr);
}
/**
  * _pow - square of a number
  * @x: number
  * @num: upper limit
  *
  * Return: -1 if no square, x if square
  */
int _pow(int x, int num)
{
	if ((x * x) < num)
		return (_pow((x + 1), num));
	if ((x * x) == num)
		return (x);

	return (-1);
}
