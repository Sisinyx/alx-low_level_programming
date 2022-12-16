#include "main.h"

/**
 * _memcpy - function copies n bytes from memory
 * area src to memory area dest
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: numberof bytes to be copied
 *
 * Return: a pointer to dest(copied to memory block)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
