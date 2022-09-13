#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * Return: 0 (success) and 1 (otherwise)
 * 
 * c: parameter for the function
 */

int _islower(int c)
{
	int result;

	result = c >= 97 && c <= 122 ? 1 : 0;
	return (result);
}
