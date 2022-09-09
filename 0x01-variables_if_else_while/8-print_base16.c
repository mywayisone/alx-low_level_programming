#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char digit = '0';

	while (digit < '10')
	{
		putchar(digit);
		digit++;
	}
	digit = 'a';

	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
