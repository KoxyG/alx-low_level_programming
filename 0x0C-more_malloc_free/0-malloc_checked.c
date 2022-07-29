#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This is a function that allocates memory.
 * @b: a parameter
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (malloc == NULL)
		exit(98);
	return (ptr);
}
