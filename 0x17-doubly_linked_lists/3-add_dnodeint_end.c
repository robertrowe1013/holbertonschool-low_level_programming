#include "lists.h"
/**
  * add_dnodeint_end - add node to end of list
  * @head: head
  * @n: node content
  *
  * Return: pointer to new element, or NULL if failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	last_node = (*head);
	new_node->n = n;
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
