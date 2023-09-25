#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: void has no return value
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap array[j] and array[j + 1]*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/*print_array function prints array after each swap*/
				print_array(array, size);
			}
		}
	}
}
