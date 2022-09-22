#include "main.h"
#include <stdlib.h>

/**
 * _strcat - Concatenates two strings
 * @dest: first pointer param
 * @src: second pointer param
 * Return: returns a pointer to character
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int count;
	char *ptr;

	while (desc[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	ptr = (char *)calloc((i + j), sizeof(char));
	count = i + j;
	i = 0;
	j = 0;

	int k;
	
	for (k = 0; k < count; k++)
	{
		if (desc[i] != '\0')
		{
			ptr[k] = desc[i];
			i++;
		}
		else
		{
			prt[k] = src[j];
			j++;
		}
	}
	return (prt);
}
