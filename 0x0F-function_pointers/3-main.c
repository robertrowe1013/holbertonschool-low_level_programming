#include "3-calc.h"
/**
  * main - calculate operation
  * @argc: always 4
  * @argv: filename, first number, operand, second number
  *
  * Return: operation result
  */
int main(int argc, char *argv[])
{
	int result = 0;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' || *argv[2] != '-' || *argv[2] != '*' || *argv[2] != '/' || *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && *argv[3] == '0') || (*argv[2] == '%' && *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[3])(num1, num2);
	printf("%d\n",result);

	return (0);
}
