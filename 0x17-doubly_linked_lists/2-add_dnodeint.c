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

	new_node = *head;
	*head = malloc(sizeof(dlistint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
