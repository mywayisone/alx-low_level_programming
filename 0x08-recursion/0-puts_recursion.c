#include "main.h"

/**
 * puts_recursion - prints a string
 * 
 * @s: pointer parameter
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_put_recursion(s);
}
