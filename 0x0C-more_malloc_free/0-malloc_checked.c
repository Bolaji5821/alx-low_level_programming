#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * @*malloc_checked: allocates memory using the malloc function.
 *  @b: number of bytes to allocate
 *
 *  Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b)
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
