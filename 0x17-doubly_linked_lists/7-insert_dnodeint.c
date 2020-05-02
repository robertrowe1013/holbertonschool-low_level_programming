#include "lists.h"
/**
  * insert_dnodeint_at_index - insert node at index
  * @h: head
  * @idx: index
  * @n: value for node
  *
  * Return: newnode or null
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp;
	dlistint_t *newnode;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	tmp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
