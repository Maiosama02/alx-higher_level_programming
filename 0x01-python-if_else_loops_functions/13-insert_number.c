#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer
 * @number: number to be inserted
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *pervious = NULL;

	if (new_node == NULL)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;
	if (*head == NULL || number < (*head)->n)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL && number > current->n)
	{
		pervious = current;
		current = current->next;
	}
	pervious->next = new_node;
	new_node->next = current;
	return (new_node);
}
