#include "function_pointers.h"
/**
 *
 *
 *
 *
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end_of_array = array + size - 1;

	if (array && size && action)
		while(array <= end_of_array)
			action(*array++);

}
