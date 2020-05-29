#include "hash_tables.h"
/**
  * key_index - finds key index
  * @key: key
  * @size: size
  *
  * Return: index
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key) % size;
	return (index);
}
