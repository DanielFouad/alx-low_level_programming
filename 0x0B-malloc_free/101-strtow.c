#include "main.h"

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 * Return: nothing
*/

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

