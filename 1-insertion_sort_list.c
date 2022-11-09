#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - insertion sort algorithm implementation
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	 listint_t *temp, *node;
	temp = *list;
	if (*list == NULL)
		return;
	temp = temp->next;
	while (temp != NULL)
	{
		while (temp->prev && temp->n < (temp->prev)->n)
		{
			node = temp;
			if (temp->next)
				(temp->next)->prev = node->prev;
			(temp->prev)->next = node->next;
			temp = temp->prev;
			node->prev = temp->prev;
			node->next = temp;
			if (temp->prev)
				(temp->prev)->next = node;
			temp->prev = node;
			if (node->prev == NULL)
				*list = node;
			print_list(*list);
			temp = temp->prev;
		}
		temp = temp->next;
	}
}
