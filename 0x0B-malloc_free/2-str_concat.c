#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: Pointer to the first string
 *
 * @s2: Pointer to the second string
 *
 * Return: returns pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = malloc(sizeof(char) * (i + j) + 1);
	if (ptr != NULL)
	{
		for (k = 0; k < i + j; k++)
		{
			if(k < i)
				ptr[k] = s1[k];
			else
				ptr[k] = s2[k - i];
		}
		return  (ptr);
	}
	return (NULL);

}
