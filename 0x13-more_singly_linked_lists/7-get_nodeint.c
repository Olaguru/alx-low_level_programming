#include "lists.h"
/**
 * get_nodeint_at_index - retreive a node at an index
 * @head: pointer to the first element of a list
 * @index: node desired position to retrieve
 * Return: pointer to the retrieved node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
