#include<stdio.h>
/**
 * main - print number 0 to 9
 *
 * Return : Always (0)
*/
int main(void)
{
	int number;

	number = '0';

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
