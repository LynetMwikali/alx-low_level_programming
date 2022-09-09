#include<stdio.h>
/**
 * main-program that prints the alphabets in lower case followed by anew line
 * Return:0
 */
int main(void)
{
	int lc = 'a';

	while (lc <= 'z')
	{
		if (lc == 'e' || lc == 'q')
		{
			lc += 1;
		}
		else
		{
			putchar(lc);
			lc += 1;
		}
	}
	putchar('\n');
	return (0);
}
