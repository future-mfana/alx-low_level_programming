#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const cahr * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{

		while(format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;

