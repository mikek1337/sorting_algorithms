#include "sort.h"
#include <stdio.h>

/**
 * swapnode - swaps two nodes
 * @temp: temp node
 * @nextnode: next node
 * 
 */
void swapnode(listint_t *temp, listint_t *nextnode)
{
	nextnode->prev = temp->prev;
	temp->next = nextnode->next;
	nextnode->next->prev = temp;
	temp->prev->prev->next = nextnode;
}

/**
 * insertion_sort_list - insertion sort algorithm implementation
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *nextnode;
	temp = *list;
	
	while (temp != NULL)
	{
		nextnode = (temp->next);
		if(temp->n > nextnode->n)
		{
			printf("Swap");
		}
			printf("%d, ", temp->n);
			/*swapnode(temp, temp->next);*/
			/*while (nextnode != NULL)
			{
				if (nextnode->n > nextnode->prev->n)
				{
					swapnode(nextnode, nextnode->prev);
				}
				
				nextnode = nextnode->prev;
			}*/
		
		temp = temp->next;
	}
	
}

