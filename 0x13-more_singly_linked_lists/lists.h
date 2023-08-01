#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - self referencial struct
 * for creating nodes of a singly linked list
 *
 * @n: integer data
 * @next: self referencial pointer
 * pointer to the next node of a list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);

#endif
