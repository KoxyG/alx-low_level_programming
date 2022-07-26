#include <stdlib.h>
#include "main.h"

/**
 * create_array - This is a function that creates an array of chars.
 * @size: size of array to be created.
 * @c: a character an array is initialized with.
 * Return: A pointer to an array, or null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));

	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
