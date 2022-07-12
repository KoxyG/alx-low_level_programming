#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: a string pointer to be passed to the function
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	return (len);
}
