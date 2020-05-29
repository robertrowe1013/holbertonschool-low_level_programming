#include "hash_tables.h"

/**
  * hash_table_create - create a hash table
  * @size: size of table
  *
  * Return: pointer to hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (hashtable->array == NULL)
		return (NULL);
	hashtable->size = size;
	return (hashtable);
}
