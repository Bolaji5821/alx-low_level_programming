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
ifor (ch = 'a'; ch <= 'z'; ch++)
{
	putchar("%c ", ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar("%c", ch);
}
return (0);
}
