#include "lists.h"
/**
  * free_listint2 - free list, set head to null
  *@head: head
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;

}
