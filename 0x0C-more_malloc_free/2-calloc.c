#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements.
 * @size: number of bytes.
 *
 * Return: NULL if nmemb/size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;

	if ((nmemb || size) == 0)
		return (NULL);
	a = malloc(sizeof(size) * nmemb);
	if (a == NULL)
		return (NULL);
	return (a);
}
