#include "lists.h"
/**
  * add_node_end - add node to end of list
  * @head: head
  * @str: string pointer
  *
  * Return: pointer to new element, or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int sl = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	last_node = (*head);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[sl])
		sl++;
	new_node->len = sl;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

	return (new_node);
}
