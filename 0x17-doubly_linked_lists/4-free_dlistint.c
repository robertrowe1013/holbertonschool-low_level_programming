#include "lists.h"
/**
  * free_dlistint - free list
  *@head: head
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
