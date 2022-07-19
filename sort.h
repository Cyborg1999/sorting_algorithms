#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Printing Arrays functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Swapping number functions*/
void swap(int *a, int *b);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);

/* Sorting Algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


#endif