#include "main.h"
/**
 * memset - fill a block of memory with a specific value
 * @s: starting address of a memory to be filled
 * @b: the desired values
 * @n: number of bytes to be changed
 *
 * Return: changed array with new values for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

