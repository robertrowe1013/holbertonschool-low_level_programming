#include "hash_tables.h"
/**
  * hash_table_set - set hash table
  * @ht: hash table
  * @key: key
  * @value: value for key
  *
  * Return: 1 on success, else 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = hash_djb2((unsigned char *)key) % (ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
