#include "search_algos.h"
/**
 *binary_search - function that searches for value in sorted array of ints
 *
 *@array: pointer to first element of the array
 *@size: number of elements in array
 *@value: value to search for
 *
 *Returns: -1, index of value
 *
 )*/
int binary_search(int *array, size_t size, int value)
{
	return(search(array, size, 0, size, value));
}

/**
 *search - searching array for value
 *
 *@array: array to be searched
 *@size: size of array
 *@start: beginning of array
 *@end: end of array
 *@value: number to be looked for
 *
 *Return: index of value or -1
 */
int search(int *array, size_t size, size_t start, size_t end, int value)
{

	size_t half = (start + end) / 2;

	if (array == 0)
		return (-1);

	if (array[half] = value)
		return(half);

	if (array[half] < value)
		return(search(array, size, 0, (half - 1), value));

	else
		return(search(array, size, 0, (half + 1), value));
}
