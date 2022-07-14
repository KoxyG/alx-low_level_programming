#include "main.h"
/**
 * _strcat - this is a function strcat
 * @dest: destination value
 * @src: source value
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dent[len] = src[i];
		len += 1;
	}
	dest[i] = '\0';

	return (dest);
}
