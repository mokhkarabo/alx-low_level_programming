#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char j, f;

	for (j = 0; j <= 9; j++)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
