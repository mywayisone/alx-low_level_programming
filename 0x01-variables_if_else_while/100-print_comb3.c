#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 10)
	{
		while (j <= 10)
		{
			if (i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
