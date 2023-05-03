#include "main.h"

/**
 * _puts_recursion - a function like put()
 * @s: input
 *
 * Return: Always 0 (if success)
 */
void _put_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}

	else
		_putchar('\n');
}
