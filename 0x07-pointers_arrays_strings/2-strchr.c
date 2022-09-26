#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: a pointer to char as parameter
 * @c: a variaable as parameter
 * Return: returns a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
