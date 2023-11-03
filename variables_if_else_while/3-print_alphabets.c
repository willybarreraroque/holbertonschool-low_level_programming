#include<stdio.h>
/**
 * main - print lowercase
 *
 * Return: Always (0)
*/
int main(void)
{
	char letter_low;
	char letter_up;

	for (letter_low = 'a'; letter_low <= 'z'; letter_low++)
	{
		putchar(letter_low);
	}
	for (letter_up = 'A'; letter_up <= 'Z'; letter_up++)
	{
		putchar(letter_up);
	}
	putchar('\n');
	return (0);
	
}
