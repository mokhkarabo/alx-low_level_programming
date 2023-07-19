#include "main.h"

/**
 * print alphabet - make the alphabet in lowercase
 *Description: print alphabet in lowercase
 * Return: always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
