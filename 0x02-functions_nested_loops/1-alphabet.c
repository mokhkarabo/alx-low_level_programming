#include "main.h"
/**
 * print alphabet - make the alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
