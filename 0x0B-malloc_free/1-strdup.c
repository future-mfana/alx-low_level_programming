#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates to a new memory location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		a[r] = str[r];
	return (a);
}
