#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list app;
	unsigned int index;

	va_start(app, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(app, int));
		/* print separator only between arguments */
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(app);
	printf("\n");
}
