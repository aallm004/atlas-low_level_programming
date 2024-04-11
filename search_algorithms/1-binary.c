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
 */
int binary_search(int *array, size_t size, int value)
{
	return (search(array, size, 0, size, value));
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
	size_t half;

	half = ((start + end) / 2);

	print_array(array, start, end);

	if (!array)
		return (-1);

	if (array[half] == value)
		return (half);

	if (half == 0)
		return (-1);

	if (array[half] < value)
		return (search(array, size, (half + 1), size, value));

	else
		return (search(array, size, 0, (half - 1), value));
}

/**
 * print_array: prints the array
 *
 * @array: new array
 * @start: start of new array
 * @end: end of new array
 *
 * Return: index
*/

void print_array(int *array, size_t start, size_t end)
{
	size_t x;

	for (x = start; x <= end; x++)
	printf("%d", array[x]);

	if (x != end)
	printf(", ");

	else
	printf("\n");
}
