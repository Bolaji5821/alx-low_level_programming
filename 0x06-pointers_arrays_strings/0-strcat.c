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
	int count = 0, count2 = 0;
	while(*(dest + count) != '\0')
	{
	count++
	}
	while (count2 >= 0)
	{
	*(dest + count) = *(src + count2);
	if(*(src + count2) == '\0')
		break;
	count++;
	count2++;
	}
return (dest);
}
