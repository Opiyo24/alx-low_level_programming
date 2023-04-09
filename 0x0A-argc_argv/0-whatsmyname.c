#include <stdio.h>

/**
 * main - Program that writes its own name
 * without having to recompile.
 * @argv: arguments vector
 * @argc: argument count
 *
 * Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
