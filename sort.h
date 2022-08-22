#ifndef _SRT_
#define _SRT_

/*---Libraries*/
#include <stdio.h>
#include <stdlib.h>

/*---Data Structures*/
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

/*---Prototypes*/
/*--Provided by Holberton*/
/*-print_list.c*/
void print_list(const listint_t *list);

/*-print_array.c*/
void print_array(const int *array, size_t size);

/*--Main Tasks*/
/*-0-bubble_sort.c, 0-O*/
void bubble_sort(int *array, size_t size);

/*-1-insertion_sort_list.c, 1-O*/
void insertion_sort_list(listint_t **list);

/*-2-selection_sort.c, 2-O*/
void selection_sort(int *array, size_t size);

/*-3-quick_sort.c, 3-O*/
void quick_sort(int *array, size_t size);

/*--Advanced Tasks*/
/*-100-shell_sort.c*/
void shell_sort(int *array, size_t size);

/*-101-cocktail_sort_list.c, 101-O*/
void cocktail_sort_list(listint_t **list);

/*-101-cocktail_sort_list.c, 101-O*/
void cocktail_sort_list(listint_t **list);

/*-102-counting_sort.c, 102-O*/
void counting_sort(int *array, size_t size);

/*-103-merge_sort.c, 103-O*/
void merge_sort(int *array, size_t size);

/*-104-heap_sort.c, 104-O*/
void heap_sort(int *array, size_t size);

/*-105-radix_sort.c*/
void radix_sort(int *array, size_t size);

/*-106-bitonic_sort.c, 106-O*/
void bitonic_sort(int *array, size_t size);

/*-107-quick_sort_hoare.c, 107-O*/
void quick_sort_hoare(int *array, size_t size);

/*-1000-sort_deck.c, deck.h*/
void sort_deck(deck_node_t **deck);

#endif
