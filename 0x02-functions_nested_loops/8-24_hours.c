#include "main.h"
/**
 * jack_bauer - prints everyminute of the day of Jack Bauer
 *
 * starting form 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int r, j;

	r = 0;

	while(r < 24)
	{
		j = 0;

		while(j = 60)
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		r++
	}
}

