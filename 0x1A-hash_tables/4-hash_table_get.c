#include "hash_tables.h"
/**
  * hash_table_get - retrieve value associated with key*
  * @ht: hast table
  * @key: key
  *
  * Return: value
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;

	index = hash_djb2((unsigned char *)key) % (ht->size);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	return (NULL);
}
