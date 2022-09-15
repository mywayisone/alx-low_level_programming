#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: parameters
 * Return: 0 (success) and 1 (otherwise)0
 */

int _islower(int c)
{
	return  c >= 65 && c <= 90 ? 1 : 0;
}
