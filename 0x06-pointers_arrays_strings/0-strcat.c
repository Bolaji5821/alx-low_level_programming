#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * concatenates two strings and overwriting the terminating null
 * byte at the end of strings.
 * @src: source.
 * @dest: destination.
 *Return: the program returns (dest) after suceefull execution.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
	i++;
	}
	while (j >= 0)
	{
	*(dest + i) = *(src + j);
	if (*(src + j) == '\0')
	break;
i++;
j++;
	}
}
