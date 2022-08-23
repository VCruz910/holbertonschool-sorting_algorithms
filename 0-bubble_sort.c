#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: Variable for array of integers for sorting.
 * @size: Size of the array.
 *
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int I, J;
	int TMP;

	if (size < 2)
	{
		return;
	}
	for (I = 0; I < size; I++)
	{
		for (J = 0; J < size - I - 1; J++)
		{
			if (array[J] > array[J + 1])
			{
				TMP = array[J];
				array[J] = array[J + 1];
				array[J + 1] = TMP;
				print_array(array, size);
			}
		}
	}
}
