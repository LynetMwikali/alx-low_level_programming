#include "main.h"
#include <string.h>
/**
 * _strncat - appends/concatenates two strings
 * @src: source
 * @dest: dest
 * @n: number of bytes/characters from source
 * Return: pointer to the resulting string dest
 **/

char *_strncat(char *dest, char *src, int n)

{
	strncat(dest, src, n);
	return (dest);
}
