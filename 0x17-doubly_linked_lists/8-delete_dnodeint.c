#include "lists.h"
/**
  * delete_dnodeint_at_index - delete node at index
  * @head: head of list, index 0
  * @index: index of the list to get
  *
  * Return: 1 if successful, -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;
	dlistint_t *del;

	tmp = *head;
	del = *head;
	for (i = 0; i < (index); i++)
	{
		tmp = del;
		del = del->next;
		if (del == NULL)
			return (-1);
	}
	if (del == NULL)
		return (-1);
	if (del == *head)
		*head = (*head)->next;
	tmp->next = del->next;
	del->next = NULL;
	free(del);

	return (1);
}
