#include "3-calc.h"
/**
  * get_op_func - get operand
  * @s: operand symbol
  *
  * Return: pointer to op_func for operand
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
