#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This is a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of byte s2 to concatenate to s1
 *
 * Return: a pointer (Success), if it fails (NULL)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i = 0;
	unsigned int len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
