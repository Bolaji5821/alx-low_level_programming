#include "main.h"
#include <stdio.h>
/**
 * main - the main function checks for uppercase character
 *
 * return - always 0 after successful execution
 */
int _isupper(void)
{
char c;
c = 'A';
printf("%c: %d \n", c, _isupper(c));
c = 'a';
printf("%c: %d \n", c, _isupper(c));
return(0);
}

