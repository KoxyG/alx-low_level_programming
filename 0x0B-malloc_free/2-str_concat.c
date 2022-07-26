#include <stdlib.h>
#include "main.h"

/**
 * str_concat - This is a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: a string (Success), NULL (Error).
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);

	int s1_length + s2_length + 1;

	char *s

		s = (char *)malloc(size * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1; i++)
		s[i] = s1[i];

	for (i = 0; i < s2; i++)
		s(s1_length + i) = s2[i];

	s(size - 1) = '\0';
	return (s);
}
