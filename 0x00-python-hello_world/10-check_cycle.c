#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - Checks if list contain cycle.
 * @list: pointer of the list.
 * Return: 0 if there is no cycle, 
 *         1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *s = list;
	
	listint_t *f = list;
	
	while(f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if(s == f)
		{
			return (1);
		}
	}
	return (0);
}
