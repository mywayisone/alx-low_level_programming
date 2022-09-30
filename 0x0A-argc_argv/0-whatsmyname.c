#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's name
 *
 * @argc: number of parameters
 *
 * @argv: array of parameters
 *
 * Return: returns (0)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n",argv[0]);
	return (0);
}
