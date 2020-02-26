#include "holberton.h"
/**
  * _pow_recursion - x to the y
  * @x: value
  * @y: exponent
  *
  * Return: -1 if exponent less than 0, else product
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, (y - 1))));
}
