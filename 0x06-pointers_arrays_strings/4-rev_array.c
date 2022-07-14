#include "main.h"
/**
 * reverse_array - reversing an array
 * @a: an array
 * @n: elememt of an array
 */
void reverse_array(int *a, int n)
{
	int len = strlen(a) - 1;

	int temp, *copy;

	copy = s;
	copy += len;

	while (s < copy)
	{
		temp = *copy;
		*copy-- = *s;
		*s++ = temp;
	}
}
