#include "hash_tables.h"
/**
  * hash_table_print - print hash table
  * @ht: hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;
	char *spacer = "";

	printf("{");
	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", spacer, ht->array[i]->key, ht->array[i]->value);
			if (i != ht->size)
				spacer = ", ";
			else
				spacer = "";
			temp = temp->next;
		}
	}
	printf("}\n");
}
