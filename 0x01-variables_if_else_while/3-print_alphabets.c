#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints char a-z, A-Z
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
