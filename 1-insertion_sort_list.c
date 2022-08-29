#include "sort.h"
/**
 * LEN_List - Returns list's lenght.
 * @L1ST: List Pointer
 * Return: List Lenght (LEN).
 **/
int LEN_List(listint_t *L1ST)
{
	int LEN = 0;

	while (L1ST)
	{
		LEN++;
		L1ST = L1ST->next;
	}
	return (LEN);
}
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Double pointer for the list to sort.
 * **/
void insertion_sort_list(listint_t **list)
{
	listint_t *CURRENT = NULL, *ONE = NULL;
	listint_t *TWO = NULL, *THREE = NULL, *FOUR = NULL;

	if (!list || !(*list) || LEN_List(*list) < 2)
		return;
	CURRENT = *list;
	while (CURRENT)
	{
		if (CURRENT->prev && CURRENT->n < CURRENT->prev->n)
		{
			ONE = CURRENT->prev->prev;
			TWO = CURRENT->prev;
			THREE = CURRENT;
			FOUR = CURRENT->next;
			TWO->next = FOUR;
			if (FOUR)
				FOUR->prev = TWO;
			THREE->next = TWO;
			THREE->prev = ONE;
			if (ONE)
				ONE->next = THREE;
			else
				*list = THREE;
			TWO->prev = THREE;
			CURRENT = *list;
			print_list(*list);
			continue;
		}
		else
			CURRENT = CURRENT->next;
	}
}

