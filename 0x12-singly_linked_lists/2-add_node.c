#include "lists.h"
/**
  * add_node - add node
  * @head: head
  * @str: string pointer
  *
  * Return: pointer to new element, or NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int sl = 0;

	new_node = *head;
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	(*head)->str = strdup(str);
	if ((*head)->str == NULL)
	{
		free(*head);
		return (NULL);
	}
	while (str[sl])
		sl++;
	(*head)->len = sl;
	(*head)->next = new_node;

	return (*head);
}
