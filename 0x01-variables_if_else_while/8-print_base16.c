#include <stdio.h>

/*
 * main -assign a random number to the variable n each time it is executed
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 97; ch < 103; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
