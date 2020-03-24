#include "lists.h"
/**
  * get_nodeint_at_index - get node at index
  * @head: head of list, index 0
  * @index: index of the list to get
  *
  * Return: value at index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	return (tmp);
}
