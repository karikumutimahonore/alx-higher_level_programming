#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct listint_s - single linked list.
 * @n: number of integers.
 * @next: points to the next node.
 * 
 * Description: single linked list node structure.
 * 
*/
typedef struct listsint_s
{
    int n;
    struct listsint_s *next;
} listsint_t;

size_t print_listint(const listsint_t *h);
listsint_t *add_nodeint(listsint_t **head, const int n);
void free_listint(listsint *head);
int check_cycle(listsint_t *list);

#endif