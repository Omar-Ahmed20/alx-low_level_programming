#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: given array
 * @size: size of the array
 * @action: function print out each character
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		if (array && size > 0)
		{
			while (i < size)
			{
				action(array[i]);
				i++;
			}
		}
	}
}
