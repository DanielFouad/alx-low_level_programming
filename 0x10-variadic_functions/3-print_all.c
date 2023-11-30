#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @arg: a list of argument pointing
 *
 * Return: nothing
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 *
 * @arg: a list of argument pointing
 *
 * Return: nothing
*/

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - print a float
 *
 * @arg: a list of argument pointing
 *
 * Return: nothing
*/

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - print a string
 *
 * @arg: a list of argument pointing
 *
 * Return: nothing
*/

void print_string(va_list arg)
{
	char *ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *
 * Description: If any argument not of data type
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list app;
	int i = 0, j = 0;
	char *separator = "";

	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(app, format);

	while (format && format[i])
	{
		j = 0;
		/**
		 * 4 equals to the number of funcs present
		 * so if j is less than four and our current
		 * format is not equal to format in funcs
		 * then j becomes j + 1
		 */
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(app);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(app);
}
