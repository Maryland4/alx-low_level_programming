#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: NULL if nmemb, 0 if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
	unsigned int nb, i;
	char *a, *b;

	if ((nmemb || size) == 0)
		return (NULL);
	nb = nmemb * size;
	a = b = malloc(nb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nb; i++)
		*a++ = 0;
	return (b);
}
