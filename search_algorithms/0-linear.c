#include "search_algos.h"
/**
 * linear_search - function that searches for value in array of ints
 *
 * @array: given array
 * @size: size of array
 * @value: value we're looking for
 *
 * Return: value
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return(i);
				}
		}
	return (-1);

}
