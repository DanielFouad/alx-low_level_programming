#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a program prints arguments count
 * @argc: the count of the arguments passed
 * @argv: the Arguments
 * Return: Always (0).
*/
int main(int argc, char const *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
