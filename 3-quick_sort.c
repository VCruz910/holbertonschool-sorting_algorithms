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
 * QPartitions - Gives a PIV Index for quicksorting.
 * @array: Variable for array.
 * @IDXLeft: Left Element Index.
 * @IDXRight: Right Element Index.
 * @size: Array size.
 * Return: IDXAbove.
 **/
int QPartitions(int *array, int IDXLeft, int IDXRight, size_t size)
{
	int *Pivot, IDXAbove, IDXBelow;

	Pivot = array + IDXRight;
	for (IDXAbove = IDXBelow = IDXLeft; IDXBelow < IDXRight; IDXBelow++)
	{
		if (array[IDXBelow] < *Pivot)
		{
			if (IDXAbove < IDXBelow)
			{
				SWITCHEROO(array + IDXBelow, array + IDXAbove);
				print_array(array, size);
			}
			IDXAbove++;
		}
	}
	if (array[IDXAbove] > *Pivot)
	{
		SWITCHEROO(array + IDXAbove, Pivot);
		print_array(array, size);
	}
	return (IDXAbove);
}

/**
 * QRecursion - Helper function.
 * @array: Array for sorting.
 * @IDXLeft: Left Element Index.
 * @IDXRight: Right Element Index.
 * @size: Array size.
 **/
void QRecursion(int *array, int IDXLeft, int IDXRight, size_t size)
{
	int PIV;

	if (IDXRight - IDXLeft > 0)
	{
		PIV = QPartitions(array, IDXLeft, IDXRight, size);
		QRecursion(array, IDXLeft, PIV - 1, size);
		QRecursion(array, PIV + 1, IDXRight, size);
	}
}

/**
 * quick_sort - Sorts an array of integers
 * in ascending order using the Quick sort algorithm.
 * @array: Variable for array of integers.
 * @size: Array size.
 **/
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
	{
		return;
	}
	QRecursion(array, 0, size - 1, size);
}
