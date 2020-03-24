#include "lists.h"
/**
  * add_nodeint - add node
  * @head: head
  * @n: number stored in struct
  *
  * Return: pointer to new element, or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
