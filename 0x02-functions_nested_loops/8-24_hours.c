#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int a, b;

	a = 0;

	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(':');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar('\n');
			b++;
		}
		a++;
	}
}
