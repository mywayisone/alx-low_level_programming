#include "main.h"

/**
 * swap_int - Swaps the value of 2 integers
 * @m: a pointer parameter
 * Return: This code returns void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
