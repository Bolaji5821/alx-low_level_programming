#include "main.h"
/**
 * _isalpha- checks for alphabetic in
 * in put
 * @c: is tested to be between a - z and A - Z
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * then 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
