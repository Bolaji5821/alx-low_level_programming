#include "main.h"
#include <stdio.h>
/**
 * main - the main function checks for uppercase character
 *
 * return - always 0 after successful execution
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
	return (1);
}
	else
{
	return(0);
}
}
