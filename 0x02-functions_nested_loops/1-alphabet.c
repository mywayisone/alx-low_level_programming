#include "main.h"

/**
 * main - Entry point 
 *
 * print_alphabet: function prints alphabet
 *
 * Description: Program prints alphabet
 *
 *
 * Return: 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return;
}
