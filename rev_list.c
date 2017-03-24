#include "link.h"
#include <stdlib.h>

/**
 * rev_list - reverses a "link"ed list
 * @head: pointer to the head of the "link"ed list
 *
 * Return: pointer to a struct
 */

link *rev_list(link *head)
{
	link *tmp;
	link *curr;

	curr = NULL;

	while (tmp != NULL)
	{
		/* this sets the pointer equal to the next node */
		tmp = head->next;

		/* this sets the `next` pointer equal to the curr (initally null) */
		head->next = curr;
		
		/* this changes the `curr` to the current head */
		curr = head;

		/* finally, the new head is set to the tmp */
		head = tmp;
	}

	return (curr);
}
