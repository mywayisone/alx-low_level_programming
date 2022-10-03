#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: The size of the array
 *
 * @c: Character to be used as initialization
 *
 * Return: returns a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
		while (*arr != '\0')
		{
			*arr = c;
			arr++;
		}
		return (arr);
	}
	return (NULL);
}
