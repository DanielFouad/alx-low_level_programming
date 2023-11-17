#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: prints the minimum number of coins
 * @argc: the count of the arguments passed
 * @argv: the Arguments
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int currency_ex, convertor = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		currency_ex = atoi(argv[1]);
		while (currency_ex > 0)
		{
			if (currency_ex >= 25)
				currency_ex -= 25;
			else if (currency_ex >= 10)
				currency_ex -= 10;
			else if (currency_ex >= 5)
				currency_ex -= 5;
			else if (currency_ex >= 2)
				currency_ex -= 2;
			else if (currency_ex >= 1)
				currency_ex -= 1;
			convertor += 1;
		}
	}
	printf("%d\n", convertor);
	return (0);
}
