#include "lists.h"

listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * reverse_listint - reverse list.
 * @head: A pointer to the starting node of the list to reverse.
 * Return: A pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = *head, *x, *p = NULL;

	while (n)
	{
		x = n->next;
		n->next = p;
		p = n;
		n = x;
	}
	*head = p;
	return (*head);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer parameter
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *t, *rev, *mid;
	size_t size = 0, i;
	
	if (*head == NULL || (*head)->next == NULL)
		return (1);
	t = *head;
	while (t)
	{
		size++;
		t = t->next;
	}
	t = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		t = t->next;
	if ((size % 2) == 0 && t->n != t->next->n)
		return (0);
	t = t->next->next;
	rev = reverse_listint(&t);
	mid = rev;

	t = *head;
	while (rev)
	{
		if (t->n != rev->n)
			return (0);
		t = t->next;
		rev = rev->next;
	}
	reverse_listint(&mid);
	return (1);
}
