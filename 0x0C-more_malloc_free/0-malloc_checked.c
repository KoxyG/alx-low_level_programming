#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This is a function that allocates memory.
 * @b: mumber of byte to be allocated
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (malloc == NULL)
		exit(98);
	return (ptr);
}
