#include "main.h"

/**
 * _isupper - Check if paramter c represents an uppercase letter.
 * @c: Variable test
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
