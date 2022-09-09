#include<stdio.h>
/**
 * main-program that prints in uppercase then in lowercase
 * Return:0 (success)
 */
int main(void)
{
	int lc = 'a';
	int uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc += 1;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc += 1;
	}
	putchar('\n');
	return (0);
}
