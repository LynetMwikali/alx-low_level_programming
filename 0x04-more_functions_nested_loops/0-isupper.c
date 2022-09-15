#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main-Write a function that checks for uppercase character.
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 **/
int _isupper(int c)
{
	int c;

	c = 'A';
        printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

}

int main(void)
{
	_isupper();
	return (0);
}
