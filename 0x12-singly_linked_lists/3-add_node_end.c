#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - a function that add nodes to the end
 * of the list
 * @head: pointer to the first node
 * @str: the new node to be added at the end
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)

	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}
/**
 * create_node - a function that declares/create nodes
 * @str: string to be inputed in the newly created node
 * Return: the pointer to the malloced memory
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - legth of a string
 * @str: string whoose length is to be found
 * Return: amount of length
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
