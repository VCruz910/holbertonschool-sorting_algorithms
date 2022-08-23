#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: Variable for array to sort
 * @size: Array size.
 **/
void selection_sort(int *array, size_t size)
{
	unsigned int I, J, MIN;

	register int TMP;

	if (size < 2)
	{
		return;
	}
	for (I = 0; I < size; I++)
	{
		MIN = I;
		for (J = I + 1; J < size; J++)
		{
			if (array[J] < array[MIN])
			{
				MIN = J;
			}
			TMP = array[I];
			array[I] = array[MIN];
			array[MIN] = TMP;
			if (I != MIN)
			{
				print_array(array, size);
			}
		}
	}
}
