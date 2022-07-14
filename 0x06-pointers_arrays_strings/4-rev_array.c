#include "main.h"
#include <string.h>
/**
 * reverse_array - reversing an array
 * @a: an array
 * @n: elememt of an array
 */
void reverse_array(int *a, int n)
{
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = arr[i];

		arr[i] = arr[j];
		arr[j] = temp;
	}
}
