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
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		i++;
		k++;
	}
	dest[i] = '\0';

	return (dest);
}
