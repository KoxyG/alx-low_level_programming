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

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
