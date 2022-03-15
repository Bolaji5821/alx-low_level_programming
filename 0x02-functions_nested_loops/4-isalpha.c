#include "main.h"
/**
 * _isalpha - this function checks for alphabetic character
 *
 * @c will be checked
 *
 * returns: 1 if c is a letter,lowercase or uppercase
 * then otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
