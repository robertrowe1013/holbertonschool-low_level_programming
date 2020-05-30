#include "hash_tables.h"
/**
  * hash_table_print - print hash table
  * @ht: hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;

	printf("{");
	if (ht == NULL)
		return;
	else
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				if (i != ht->size)
					printf(", ");
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
