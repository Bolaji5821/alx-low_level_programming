#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of commend line arguments.
 * @argv: arrays that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
