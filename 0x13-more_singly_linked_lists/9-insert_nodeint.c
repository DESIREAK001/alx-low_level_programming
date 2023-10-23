#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 unsigned int i;
 listint_t *own;
 listint_t *temp = *head;

 own = malloc(sizeof(listint_t));
 if (!own || !head)
 return (NULL);

 own->n = n;
 own->next = NULL;

 if (idx == 0)
 {
 own->next = *head;
 *head = own;
 return (own);
 }

 for (i = 0; temp && i < idx; i++)
 {
 if (i == idx - 1)
 {
 own->next = temp->next;
 temp->next = own;
 return (own);
 }
 else
 temp = temp->next;
 }

 return (NULL);
}
