#include "sort.h"
/**
 * SWITCHEROO - Swaps two integers in the array.
 * @IS1: Integer Swap 1.
 * @IS2: Integer Swap 2.
 **/
void SWITCHEROO(int *IS1, int *IS2)
{
	int TMP;

	TMP = *IS1;
	*IS1 = *IS2;
	*IS2 = TMP;
}
/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: Variable for array to sort
 * @size: Array size.
 **/
void selection_sort(int *array, size_t size)
{
	size_t I, J;
	int *MIN;

	if (size < 2 || array == NULL)
	{
		return;
	}
	for (I = 0; I < size - 1; I++)
	{
		MIN = array + I;
		for (J = I + 1; J < size; J++)
		{
			MIN = (array[J] < *MIN) ? (array + J) : MIN;
		}
		if ((array + I) != MIN)
		{
			SWITCHEROO(array + I, MIN);
			print_array(array, size);
		}
	}
}
