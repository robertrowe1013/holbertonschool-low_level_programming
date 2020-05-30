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
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = hash_djb2((unsigned char *)key) % (ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		temp = temp->next;
	}
	return (NULL);
}
