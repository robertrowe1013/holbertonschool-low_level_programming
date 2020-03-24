#include "lists.h"
/**
  * pop_listint - pop the head
  * @head: to delete
  *
  * Return: 0 if empty, else new head
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
