#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: counts the arguments passed to main
 * @argv: stores the arguments passed to main
 *
 * Return: 0 on success
 * on error: 1
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a * b;
		printf("%d\n", sum);
	}
	return (0);
}
