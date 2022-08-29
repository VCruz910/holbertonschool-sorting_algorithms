#include "sort.h"
/**
 * AuxShellFunc - Auxiliary Funtion.
 * @InArr: Input Array.
 * @size: Size for the input array.
 * @n: Interval.
 **/
void AuxShellFunc(int *InArr, int size, int n)
{
	int TMP, InA, InB;

	for (InA = 0; (InA + n) < size; InA++)
	{
		for (InB = InA + n; (InB - n) >= 0; InB = InB - n)
		{
			if (InArr[InB] < InArr[InB - n])
			{
				TMP = InArr[InB];
				InArr[InB] = InArr[InB - n];
				InArr[InB - n] = TMP;
			}
		}
	}
	print_array(InArr, size);
}

/**
 * shell_sort - Sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: Array of Integers for sorting.
 * @size: Size of the array.
 **/
void shell_sort(int *array, size_t size)
{
	size_t n = 1;

	while (n < size)
	{
		n = (n * 3) + 1;
	}
	while ((n = (n - 1) / 3) > 0)
	{
		AuxShellFunc(array, size, n);
	}
}
