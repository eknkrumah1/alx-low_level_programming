#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *@s: memory area to be filled
 *@b: char to copy
 *@n: number of times to copy b
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
