#include "main.h"

/**
 * swap_int - Swaps the value of 2 integers
 * @a: a pointer parameter
 * @b: a pointer parameter
 * Return: This code returns void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
