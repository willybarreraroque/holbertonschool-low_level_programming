#include<stdio.h>
/**
 * main -Entry point
 * Description: 'print inverted alphabet'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number;
	char letter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
