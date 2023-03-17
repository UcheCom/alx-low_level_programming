#include "main.h"
#include <stdlib.h>

/**
 * _realloc -> function that reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: the size in bytes, of the allocated space for pointer
 * @new_size: the new size in bytes of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrn;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
		ptrn = malloc(new_size);
	}
	if (!ptrn)
	{
		return (NULL);
		old_ptr = ptr;
	}
	if (new_size < old_old)
	{
		for (i = 0; i < new_size; i++)
			ptrn[i] = old_ptr[i];
	}
	if (new_size > old_old)
	{
		for (i = 0; i < old_size; i++)
			ptrn[i] = old_ptr[i];
	}
	free(ptr);
	return (ptrn);
{

