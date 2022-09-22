#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @src:  source
 * @dest:  destination
 * @n:  number of bytes to be copied
 * Return: returns a pointer to destination
 **/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
