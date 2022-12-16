#include "main.h"

/**
 * _memset -fills the first n bytes of memory area pointed
 * to by s with a constant byte b
 * @s: address to memory block
 * @b: char to be used
 * @n: no of bytes to be used
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{	s[n - 1] = b;
		n--;
	}
	return (s);
}
