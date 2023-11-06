#include "lists.h"

/**
 * reverse_list = fuction that reverse a list
 * @head: head pointer
 * Return: pointer
*/

listint_t *reverse_list(listint_t *head)
{
    listint_t *prev = NULL;
    listint_t *curr = head;
    listint_t *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

/**
 * compare_lists - compare 2 lists
 * @head1: first pointer
 * @head2: second pointer
 * Return: 1 if equal, 0 otherwise
*/

int compare_lists(listint_t *head1, listint_t *head2)
{
    listint_t *temp1 = head1;
    listint_t *temp2 = head2;

    while (temp1 && temp2)
    {
        if (temp1->n == temp2->n)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return 0;
    }

    if (temp1 == NULL && temp2 == NULL)
        return 1;

    return 1;
}

/**
 * is_palindrome - check if a list is palindrome
 * @head: pointer
 * Return: result
*/
int is_palindrome(listint_t **head)
{
    listint_t *slow, *fast, *second_half, *prev_of_slow;
    int res;

    if (*head == NULL || (*head)->next == NULL)
        return 1;

    slow = fast = *head;
    prev_of_slow = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_of_slow = slow;
        slow = slow->next;
    }

    if (fast != NULL)
        slow = slow->next;

    second_half = reverse_list(slow);

    res = compare_lists(*head, second_half);

    second_half = reverse_list(second_half);

    if (prev_of_slow != NULL)
        prev_of_slow->next = second_half;

    return res;
}