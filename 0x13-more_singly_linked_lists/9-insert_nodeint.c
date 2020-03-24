#include "lists.h"
/**
  * insert_nodeint_at_index - insert node at index
  * @head: head of list, index 0
  * @idx: index of the list to get
  * @n: number for node
  *
  * Return: value at index
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	tmp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
