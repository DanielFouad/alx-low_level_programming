#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: a program that multiplies two numbers
 * @argc: the count of the arguments passed
 * @argv: the Arguments
 * Return: Always (0).
*/
int main(int argc, char *argv[])
{
	int sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}
