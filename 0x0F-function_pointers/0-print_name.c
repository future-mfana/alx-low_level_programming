#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name.
 * @name: the name to print.
 * @f: pointer to function that prints a name.
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
