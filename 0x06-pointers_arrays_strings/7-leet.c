#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int a = 0, int i;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[a])
	{
		for (i = 0; i < 8; i++)
		{
			if (str[a] == leet[i] || str[a] - 32 == leet[i])
				str[a] = i + '0';
		}

		i++
	}

	return (str);
}
