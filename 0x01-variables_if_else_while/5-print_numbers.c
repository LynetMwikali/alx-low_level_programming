#include<stdio.h>
/**
 * main-program that prints all single digits of base ten
 *
 * Return:Always 0(success/correct)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}
