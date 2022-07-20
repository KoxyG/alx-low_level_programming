#include "main.h"

/**
 * _print_rev_recursion - this is a function that prints a string in reverse
 * @s: a string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
