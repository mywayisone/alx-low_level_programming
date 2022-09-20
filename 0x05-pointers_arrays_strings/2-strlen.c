#include "main.h"

/**
 * _strlen - Counts the number of string
 * @s: a pointer parameter of char
 * Return: This code returns integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
