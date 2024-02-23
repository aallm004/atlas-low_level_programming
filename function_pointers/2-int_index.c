#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: number of elements in array
 * @cmp: function ptr
 * 
 * Return: index of the first element, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == 0 || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		(cmp(array[i]));
		 return (i);
	}

	return (-1);
}
