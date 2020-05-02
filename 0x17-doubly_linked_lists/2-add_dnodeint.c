#include "lists.h"
/**
  * add_dnodeint - add node
  * @head: head
  * @n: node contents
  *
  * Return: pointer to new element, or NULL if failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if ((*head) == NULL)
	{
		(*head = new_node);
		new_node->next = NULL;
	}
	else
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	
	return (*head);
}
