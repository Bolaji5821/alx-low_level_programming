#include "main.h"
/**
 * print_most_numbers - this function printd numbers from 0-9.
 *
 * @ch:  ch is an input/placeholder
 *
 * Return: no return
 *
 */
void print_most_numbers(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
	if (ch != 50 && ch != 52)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
}
