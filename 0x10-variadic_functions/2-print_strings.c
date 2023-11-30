#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list app;
	unsigned int index;
	char *ptr;

	/* iterate the argument list from the start */
	va_start(app, n);

	for (index = 0; index < n; index++)
	{
		ptr = va_arg(app, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(app);
	printf("\n");
}
