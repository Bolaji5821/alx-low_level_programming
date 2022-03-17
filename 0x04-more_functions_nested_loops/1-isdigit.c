#include "main.h"
/**
* _isdigit - this function checks for digit 0 throudh 9
*
* @c: is used as a placeholder for input
*
* Return: 1 if its a number (0 to 9), 0 in other case.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
	return (1);
}
else
{
return (0);
}
}
