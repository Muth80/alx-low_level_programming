#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @low: The starting index of the array
 * @high: The ending index of the array
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (size_t i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array
 * @low: The starting index of the array
 * @high: The ending index of the array
 * @value: The value to search for
 *
 * Return: The index where the first occurrence of value is located,
 *         or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_recursive(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	else
		return (advanced_binary_recursive(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the first occurrence of value is located,
 *         or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
