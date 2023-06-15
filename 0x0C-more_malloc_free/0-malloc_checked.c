#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memor with  malloc.
 * @o: num of bytes allocated.
 * Return: a pointer.
 */
void *malloc_checked(unsigned int o)
{
	void *ptr;

	ptr = malloc(o);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
