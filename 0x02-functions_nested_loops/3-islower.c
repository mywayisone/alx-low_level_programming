#include "main.h"

/**
 * islower - checks for lower case character
 *
 * Returns: 0 (success) 
 * 1 otherwise
 */

int _islower(int c)
{
	int result;

	result = c >= 97 && c <= 122 ? 1 : 0;
	return (result);
}
