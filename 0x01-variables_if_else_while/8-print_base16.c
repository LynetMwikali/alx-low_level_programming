#include<stdio.h>
/**
 * main-a program that prints all the numbers to base 16 in lowecase
 * Return:Always 0 (Success/correct)
 */
int main(void)
{
	int i;
	char j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
