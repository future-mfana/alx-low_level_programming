#include "main.h"

/**
 * _strlen_recursion - returns the lenght of the string.
 * @s: the lenght of the string to be measured.
 *
 * Return: the lengt of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);

}
