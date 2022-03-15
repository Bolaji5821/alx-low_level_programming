#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase x10
 *
 * return: always 0
 */
void print_alphabet_x10(void)
{
int i;
for (i = 1; i < 10; i++)
{
char b;
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
