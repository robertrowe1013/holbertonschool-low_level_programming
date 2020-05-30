#include "hash_tables.h"
/**
  * hash_table_delete - delete hash table
  * @ht: hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *holder;
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			holder = temp;
			temp = temp->next;
			free(holder->key);
			free(holder->value);
			free(holder);
		}
	}
	free(ht->array);
	free(ht);
}
