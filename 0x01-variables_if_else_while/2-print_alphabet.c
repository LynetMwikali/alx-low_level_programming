#include<stdio.h>
#include<ctype.h>
/**
 * main-entry for the program
 * prints the alphabets in lowercase followed by a new line
 *Return:Always 0(sucess/correct)
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');
	return (0);
}
