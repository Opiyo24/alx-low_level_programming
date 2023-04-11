#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - entry point
 * @str: function parameter
 *
 * Return: pointer
*/

char *_strdup(char *str)
{
	char *p;
	int c;
	int t = 0;

	while (str[t] != '\0')
	{
		t++;
	}

	p = malloc((t * sizeof(char)) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (c = 0; str[c] != '\0'; c++)
	{
		p[c] = str[c];
	}
	p[c] = '\0';

	return (p);

}
