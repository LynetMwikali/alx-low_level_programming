#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return:0 if s1 == s2, if s1 > s2, >0,if s1 < s2, <0
 *
 **/

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
