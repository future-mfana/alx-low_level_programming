#include "main.h"

/**
 * print_line - draw a straight line
 * @c: number of times the characters should be printed
 */
void print_line(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= c; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
