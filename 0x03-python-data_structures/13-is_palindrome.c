#include "lists.h"
/**
 * reverse_listint - Reverse list
 * @head: pointer parameter
 * Return: reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *next, *prev = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    return (*head);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: pointer parameter.
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return (1);

    listint_t *slow, *fast, *prev_slow = *head;
    listint_t *second_half, *mid = NULL;
    int is_palindrome = 1;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

    if (fast != NULL)
    {
        mid = slow;
        slow = slow->next;
    }

    second_half = reverse_listint(&slow);
    listint_t *temp1 = *head;
    listint_t *temp2 = second_half;
	
    while (temp1 != mid && temp2 != NULL)
    {
        if (temp1->n != temp2->n)
        {
            is_palindrome = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    reverse_listint(&second_half);
    if (mid != NULL)
        prev_slow->next = mid;

    return is_palindrome;
}
