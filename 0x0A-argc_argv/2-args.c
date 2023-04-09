#include <stdio.h>

/**
 * main - Prints all the arguments it receives.
 * @argc: counts all arguments passed to main
 * @argv: Stores the arguments passed to main
 *
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int a;

	a = 0;
	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
