#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's number of param
 *
 * @argc: number of parameters
 *
 * @argv: array of parameters
 *
 * Return: returns (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n",argc - 1);
	return (0);
}
