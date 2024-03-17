#include "lists.h"
/**
 * reverse_listint - Reverse list
 * @head: pointer parameter
 * @end: pointer parameter
 */
listint_t *is_palind(listint_t **head, listint_t **end)
{
	if(end == NULL)
		return (1);
	if(is_palind(head, end->next) && (*head)->n == end->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}
/**
 * is_palindrome - checks if list is a palindrome.
 * @head: pointer parameter.
 * Return: 0 if it is not a palindrome,
 * 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return (1);
	return (is_palind(head, *head));	
}
