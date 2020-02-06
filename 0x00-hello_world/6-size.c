#include<stdio.h>
/**
  * main - print byte usage
  *
  *Return: return 0
  */
int main(void)
{
	char character;
	int integer;
	long longinteger;
	long long verylonginteger;
	float floatingdecimal;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longinteger));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(verylonginteger));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatingdecimal));

	return (0);
}
