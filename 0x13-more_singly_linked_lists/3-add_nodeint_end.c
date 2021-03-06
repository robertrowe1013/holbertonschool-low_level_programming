#include "lists.h"
/**
  * add_nodeint_end - add node to end of list
  * @head: head
  * @n: number
  *
  * Return: pointer to new element, or NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
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
