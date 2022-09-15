#include "main.h"

/**
 * _isdigit - checks for lower case character
 * @c: parameters
 * Return: 0 (success) and 1 (otherwise)0
 */

int _isdigit(int c)
{
	return  c + 48 >= 65 && c + 48 <= 90 ? 1 : 0;
}
