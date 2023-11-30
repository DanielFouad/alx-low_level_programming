#include "variadic_functions.h"

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int para, total = 0;

	va_start(app, n);

	for (para = 0; para < n; para++)
		/* get the next parameter value and add it to sum*/
		total += va_arg(app, int);
	va_end(app);

	return (total);
}
