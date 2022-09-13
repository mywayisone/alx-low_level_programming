#include "main.h"

/**
 * main - Program entry point
 * Retrun: 0
 */

int main(void)
{
	char *string = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	return 0;
}
