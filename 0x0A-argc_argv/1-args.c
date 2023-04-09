#include <stdio.h>

/**
 * main - program that prints the number of argumenst
 * passed to it.
 * @argc: counts the number of arguments passeed to main
 * @argv: stores the arguments passed to main
 *
 * Return: On success, 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

